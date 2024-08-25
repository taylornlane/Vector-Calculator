class Vector {
    constructor(num1A, num1B, num1C, num2A, num2B = null, num2C = null, bothVectors = true, scalarVal = null){
                if (bothVectors) {
                    this.vector1 = [num1A, num1B, num1C];
                    this.vector2 = [num2A, num2B, num2C];
                } else if (num2B !== null && num2C !== null) {
                    this.vector1 = [num2A-num1A, num2B-num1B, num2C-num1C];
                } else {
                    this.vector1 = [num1A, num1B, num1C];
                    this.scalarVal = scalarVal;
                }
            }   
 //Multiplies each coordinate in the vector by the scalar multiple
scalarMultiple() {
    let newVector = [];
    this.vector1.forEach((val) => {
        newVector.push(val * this.scalarVal);
    });
    return newVector;
}
//Adds the scalar to each coordinate in the vector
scalarAddition() {
    let newVector = [];
    this.vector1.forEach((val) => {
        newVector.push(val + this.scalarVal);

    });
    return newVector;
}

//Finds the magnitude of the given vector
findMagnitude(vector1) {
    return Math.sqrt(vector1.reduce((acc,val)=> acc+Math.pow(val,2),0));
}

//Finds the dot product given two vectors
dotProduct() {
    let sum = 0;
    for (let i=0; i < this.vector1.length; i++) {
        let product = this.vector1[i] * this.vector2[i];
        sum += product;
    }
    return sum;
    
}

//Finds the unit vector
unitVector() {

}
//Finds the angle between two vectors in radians
findAngle() {
    const dotProduct = this.dotProduct();
    const magnitude1 = this.findMagnitude(this.vector1);
    const magnitude2 = this.findMagnitude(this.vector2);
    return Math.acos(dotProduct/(magnitude1*magnitude2));
}
//Finds the scalar projection of vector b onto vector a
scalarProjection() {
    return this.dotProduct / this.findMagnitude(this.vector1);
}
//Finds the vectoe projection of vector b onto vector a
vectorProjection() {
    const num = this.dotProduct() / Math.pow(this.findMagnitude(this.vector1), 2)
    let newVector = [];
    this.vector1.forEach((val) => {
        newVector.push(val * num);
    });
    return newVector
}
//finds the cross product of two vectors
crossProduct() {

    return [
    (this.vector1[1]*this.vector2[2]) - (this.vector1[2]*this.vector2[1]), 
    (this.vector1[2]*this.vector2[0]) - (this.vector1[0]*this.vector2[2]), 
    (this.vector1[0]*this.vector2[1]) - (this.vector1[1]*this.vector2[0])
    ];
}

//Finds the area of the parallelogram given two vectors
areaOfParallelogram() {
    return this.findMagnitude(this.crossProduct());
}
}
export default Vector;