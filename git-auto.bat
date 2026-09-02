@echo off
title 💥 Git Auto Commit & Push Tool - Project 13 [ Bank System & Currency Exchange (OOP) ]
echo =====================================================
echo 💥 Git Auto Commit & Push Tool - Project 13
echo =====================================================
echo.
set /p msg=📝 Enter commit message: 
echo.
echo 🔄 Adding all changes...
git add .
echo ✅ Files added successfully.
echo.
echo 💬 Committing with message: "%msg%"
git commit -m "%msg%"
echo ✅ Commit completed.
echo.
echo 🚀 Pushing to GitHub (main branch)...
git push origin main
echo ✅ All changes pushed successfully!
echo.
echo 🌐 Opening GitHub repository page...
start https://github.com/AhmedYaser-Mt/Project-13-Bank-System-and-Currency-Exchange_OOP_
echo.
echo =====================================================
echo 🎉 Operation Completed Successfully! Keep Coding 💻
echo =====================================================
pause
