// script.js

import Vector from './vector.js'; 

// Defines the calculate function globally
window.calculate = function(operation) {
    
    // Reads inputs for Vector 1 and 2 and Scalar Value
    const vector1 = [
        parseFloat(document.getElementById('vector1-x').value),
        parseFloat(document.getElementById('vector1-y').value),
        parseFloat(document.getElementById('vector1-z').value)
    ];
    console.log("Vector 1:", vector1);

    const vector2 = [
        parseFloat(document.getElementById('vector2-x').value),
        parseFloat(document.getElementById('vector2-y').value),
        parseFloat(document.getElementById('vector2-z').value)
    ];
    console.log("Vector 2:", vector2);

    const scalarVal = parseFloat(document.getElementById('scalar-value').value);
    console.log("Scalar Value:", scalarVal);

    let vector;

    //Puts in undefined values when Vector 2 isn't needed.
    if (operation === 'scalarMultiple' || operation === 'scalarAddition') {
        vector = new Vector(vector1[0], vector1[1], vector1[2], null, null, null, false, scalarVal);
    } else {
        vector = new Vector(vector1[0], vector1[1], vector1[2], vector2[0], vector2[1], vector2[2]);
    }

    //Exectutes the users requests based on which function they choose. In certain cases, I checked for null values.
    let result;
    switch (operation) {
        case 'dotProduct':
            result = checkResult(vector.dotProduct());
            break;
        case 'scalarMultiple':
            result = '< ' + vector.scalarMultiple() + ' >';
            if (isNaN(vector.scalarVal)){
                result = "Invalid Operation. Please recheck your inputs.";
            }
            break;
        case 'scalarAddition':
            result = '< ' + vector.scalarAddition() + ' >';
            if (isNaN(vector.scalarVal)){
                result = "Invalid Operation. Please recheck your inputs.";
            }
            break;
        case 'findMagnitude':
            result = checkResult(vector.findMagnitude(vector1));
            break;
        case 'findAngle':
            result = checkResult(vector.findAngle());
            break;
        case 'crossProduct':
            if (isNaN(this.vector1) || isNaN(this.vector2)) {
                result = "Invalid input, please try again.";
            }
            result = '< ' + vector.crossProduct() + ' >';
            break;
        case 'vectorProjection':
            result = '< ' + vector.vectorProjection() + ' >';
            break;
        default:
            result = 'Invalid operation';
    }

    //Helper function to check for empty values.
    function checkResult(result) {
        if (isNaN(result)) {
            return result = "Invalid Operation. Please recheck your inputs.";
        }
        return result;
    }
    console.log("Result:", result);

    // Displays the result to the user
    document.getElementById('result').innerText = `Result: ${Array.isArray(result) ? result.join(', ') : result}`;
};
