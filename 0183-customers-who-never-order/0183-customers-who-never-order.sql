# Write your MySQL query statement below
select c.name AS Customers
from Customers c
left join Orders o
on c.id = o.CustomerID
where o.CustomerID is NULL