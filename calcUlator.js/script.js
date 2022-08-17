let screen = document.getElementById("screen");
buttons = document.querySelectorAll("button");
let screenValue = "";
for (item of buttons) {
    item.addEventListener("click", (e) => {
        buttonText = (e).target.innerText;
        console.log("Button text is ", buttonText);
        if (buttonText == "x") {
            buttonText = "*";
            screenValue += buttonText;
            screen.value = screenValue;
        }
        else if (buttonText == "/") {
            buttonText = "/";
            screenValue += buttonText;
            screen.value = screenValue;
        }
        else if (buttonText == "+") {
            buttonText = "+";
            screenValue += buttonText;
            screen.value = screenValue;
        }
        else if (buttonText == "/") {
            buttonText = "-";
            screenValue += buttonText;
            screen.value = screenValue;
        }
        else if (buttonText == "C") {
            screenValue = "";
            screen.value = screenValue;
        }
        else if (buttonText == '=') {
          try{
            screen.value = eval(screenValue);
          }
          catch{
            screenValue = "";
            screen.value = screenValue;
            buttonText = "Error !";
            screenValue += buttonText;
            screen.value = screenValue;
          }
        }
       
        else {
            screenValue += buttonText;
            screen.value = screenValue;
        }

    })
}
