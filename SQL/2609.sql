SELECT c.name,SUM(p.amount)
FROM products p JOIN categories c
ON p.id_categories = c.id
GROUP BY c.id;
