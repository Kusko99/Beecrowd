// Ler dois valores inteiros
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('', (inputA) => {
  rl.question('', (inputB) => {
    // Converter os valores de entrada para números inteiros
    const A = parseInt(inputA);
    const B = parseInt(inputB);

    // Calcular a soma
    const X = A + B;

    // Imprimir o resultado no formato solicitado
    console.log(`X = ${X}`);

    rl.close();
  });
});
