SELECT products.name, providers.name, categories.name
FROM products, providers, categories
WHERE products.id_providers = providers.id 
AND products.id_categories = categories.id 
AND providers.name LIKE 'Sansul SA'
AND categories.name LIKE 'Imported';
