export function problem(lines){
    let numero = parseInt(lines[0]);
    let horas = parseInt(lines[1]);
    let salarioPorHora = parseFloat(lines[2]);

    let salario = horas*salarioPorHora;
    console.log(`NUMBER = ${numero}`);
    console.log(`SALARY = U$ ${salario.toFixed(2)}`);
};