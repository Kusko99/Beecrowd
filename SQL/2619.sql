SELECT products.name,providers.name,products.price
FROM products,providers,categories
WHERE providers.id = products.id_providers AND
categories.id = products.id_categories AND
categories.name LIKE 'Super Luxury' AND
products.price > 1000;
