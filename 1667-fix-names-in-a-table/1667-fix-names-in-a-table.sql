# Write your MySQL query statement below

select user_id, CONCAT(UPPER(SUBSTRING(name,1,1)), LOWER(SUBSTRING(name,2,LENGTH(name)))) as name
from USERS order by user_id
                       