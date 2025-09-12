<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.*, java.text.SimpleDateFormat" %>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Current Date, Time and Day</title>
    <style>
        body {
            background: #f0f8ff;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .card {
            background: white;
            padding: 40px;
            border-radius: 15px;
            box-shadow: 0 5px 15px rgba(0,0,0,0.2);
            text-align: center;
        }
        h1 {
            color: #2c3e50;
            margin-bottom: 20px;
        }
        p {
            font-size: 20px;
            color: #34495e;
            margin: 10px 0;
        }
    </style>
</head>
<body>
    <div class="card">
        <h1>Current Date, Time, and Day</h1>
        
        <%
            Date now = new Date();
            SimpleDateFormat dateFormat = new SimpleDateFormat("dd-MM-yyyy");
            SimpleDateFormat timeFormat = new SimpleDateFormat("hh:mm:ss a");
            SimpleDateFormat dayFormat = new SimpleDateFormat("EEEE");

            String currentDate = dateFormat.format(now);
            String currentTime = timeFormat.format(now);
            String currentDay = dayFormat.format(now);
        %>

        <p><strong>Date:</strong> <%= currentDate %></p>
        <p><strong>Time:</strong> <%= currentTime %></p>
        <p><strong>Day:</strong> <%= currentDay %></p>
    </div>
</body>
</html>