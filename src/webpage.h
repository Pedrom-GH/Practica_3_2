#ifndef WEBPAGE_H
#define WEBPAGE_H

const char* HTML = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
  <title>ESP32 Web Server</title>
  <style>
    * { margin: 0; padding: 0; box-sizing: border-box; }
    body {
      font-family: Arial;
      text-align: center;
      background-color: #1a1a2e;
      color: white;
      padding: 40px;
    }
    h1 { color: #e94560; font-size: 2.5em; margin-bottom: 10px; }
    h2 { color: #0f3460; font-size: 1.2em; margin-bottom: 30px; }
    p  { font-size: 18px; margin: 8px 0; }

    .card {
      background: #16213e;
      border-radius: 16px;
      padding: 30px;
      max-width: 400px;
      margin: 20px auto;
      box-shadow: 0 0 20px rgba(233,69,96,0.3);
    }

    .bar-container {
      background: #0f3460;
      border-radius: 10px;
      height: 20px;
      margin: 10px auto;
      width: 80%;
      overflow: hidden;
    }

    .bar {
      height: 100%;
      width: 0%;
      background: linear-gradient(90deg, #e94560, #f5a623);
      border-radius: 10px;
      animation: fillBar 2s ease-in-out forwards;
    }

    @keyframes fillBar {
      from { width: 0%; }
      to   { width: 100%; }
    }

    .pulse {
      display: inline-block;
      width: 12px;
      height: 12px;
      background: #2ecc71;
      border-radius: 50%;
      margin-right: 8px;
      animation: pulse 1.5s infinite;
    }

    @keyframes pulse {
      0%   { box-shadow: 0 0 0 0 rgba(46,204,113,0.6); }
      70%  { box-shadow: 0 0 0 10px rgba(46,204,113,0); }
      100% { box-shadow: 0 0 0 0 rgba(46,204,113,0); }
    }
  </style>
</head>
<body>
  <h1>&#128268; ESP32 Web Server</h1>
  <h2>Practica 3 — WiFi</h2>

  <div class="card">
    <p><span class="pulse"></span> Servidor activo</p>
    <br>
    <p>Alumno: <b>Pedro</b></p>
    <p>Fecha: 2025</p>
    <br>
    <p>Cargando sistema...</p>
    <div class="bar-container">
      <div class="bar"></div>
    </div>
  </div>
</body>
</html>
)rawliteral";

#endif