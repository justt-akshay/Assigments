SELECT company_code, AVG(pro_price) AS average_price
FROM product
GROUP BY company_code;
