SELECT pro_name, pro_price
FROM product
WHERE pro_price >= 250
ORDER BY pro_price DESC, pro_name ASC;
