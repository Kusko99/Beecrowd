const readline = require('readline');
const PI = 3.14159;

const read = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

read.question('', (input) => {
    var raio = parseFloat(input);
    
    var area = PI * (raio*raio);

    console.log(`A=${area.toFixed(4)}\n`);

    read.close();
});
