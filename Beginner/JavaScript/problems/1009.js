export function problem(lines){
    let nome = lines[0];
    let salario = parseFloat(lines[1]);
    let vendas = parseFloat(lines[2]);
    let bonus = 15;

    let salarioTotal = salario + (vendas*(bonus/100));
    console.log(`TOTAL = R$ ${salarioTotal.toFixed(2)}`);
};