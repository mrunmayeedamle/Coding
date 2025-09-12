<%
    String name = request.getParameter("name");
%>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Access Denied</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background: linear-gradient(to right, #ff758c, #ff7eb3);
            text-align: center;
            padding-top: 100px;
        }
        h1 {
            color: red;
            font-size: 36px;
        }
    </style>
</head>
<body>

    <h1>Hello, <%= name %>! You are not authorized to visit the site.</h1>

</body>
</html>
