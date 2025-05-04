import { initializeApp } from 'firebase/app';
import { getDatabase } from 'firebase/database';

const firebaseConfig = {
  apiKey: "AIzaSyB0qQfJAxK8qkfr0924dSdlmhuRbeB6H9Y",
  authDomain: "flooddetection-bdfc0.firebaseapp.com",
  databaseURL: "https://flooddetection-bdfc0-default-rtdb.firebaseio.com",
  projectId: "flooddetection-bdfc0",
  storageBucket: "flooddetection-bdfc0.appspot.com",
  messagingSenderId: "457041412218",
  appId: "1:457041412218:web:ebca260038ef0a5b267bc3",
  measurementId: "G-WG9MSL32V5"
};

const app = initializeApp(firebaseConfig);

const db = getDatabase(app);

export default db;