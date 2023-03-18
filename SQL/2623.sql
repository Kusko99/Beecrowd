SELECT products.name, categories.name
FROM products,categories
WHERE products.id_categories = categories.id AND
categories.id IN (1,2,3,6,9) AND
products.amount > 100
ORDER BY categories.id;
