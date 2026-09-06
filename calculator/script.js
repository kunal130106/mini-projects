const display = document.getElementById("display");

// Add value to display
function addValue(value) {
    display.value += value;
}

// Clear display
function clearDisplay() {
    display.value = "";
}

// Calculate result
function calculate() {

    try {

        if (display.value === "") {
            return;
        }

        display.value = eval(display.value);

    } catch (error) {

        display.value = "Error";

    }
}