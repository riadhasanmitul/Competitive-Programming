import { StyleSheet, Text, View } from 'react-native';
import React, { useState, useEffect } from 'react';
import db from '../config';
import { ref, onValue } from 'firebase/database';

const FetchData = () => {
  const [sensorData, setSensorData] = useState(null);

  useEffect(() => {
    const sensorRef = ref(db, '/sensors');
    onValue(sensorRef, (snapshot) => {
      const data = snapshot.val();
      console.log('Fetched Data:', data);
      setSensorData(data);
    });
  }, []);

  return (
    <View style={styles.container}>
      <Text style={styles.header}>Flood Detection</Text>
      {sensorData ? (
        <View>
          <Text style={styles.text}>Temperature: {sensorData.temperature}°C</Text>
          <Text style={styles.text}>Humidity: {sensorData.humidity}%</Text>
          <Text style={styles.text}>Distance: {sensorData.distance_cm} cm</Text>
          <Text style={styles.text}>Flow Rate: {sensorData.flow_rate_lpm} L/min</Text>
        </View>
      ) : (
        <Text style={styles.text}>Loading data...</Text>
      )}
    </View>
  );
};

export default FetchData;

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    paddingTop: 60,
    paddingHorizontal: 20,
    alignItems: 'center',
    justifyContent: 'center',
  },
  header: {
    fontSize: 40,
    textAlign: 'center',
    marginBottom: 30,
    fontWeight: 'bold'
  },
  text: {
    fontSize: 25,
    textAlign: 'center',
    marginVertical: 15
  }
});
