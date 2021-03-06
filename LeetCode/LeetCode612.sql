-----------------------------------------------------------------------
--  LeetCode 612. Shortest Distance in a Plane
--  
--  Medium
--
--  SQL Schema
--  Table point_2d holds the coordinates (x,y) of some unique points 
--  (more than two) in a plane.
-- 
--  Write a query to find the shortest distance between these points 
--  rounded to 2 decimals.
-- 
--  | x  | y  |
--  |----|----|
--  | -1 | -1 |
--  | 0  | 0  |
--  | -1 | -2 |
-- 
--  The shortest distance is 1.00 from point (-1,-1) to (-1,2). So the 
--  output should be:
--  
--  | shortest |
--  |----------|
--  | 1.00     |
--  
--  Note: The longest distance among all the points are less than 10000.
----------------------------------------------------------------
SELECT 
    CONVERT(NUMERIC(18, 2), MIN(distance)) AS  shortest
FROM
(
   SELECT 
        SQRT((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y)) AS distance
    FROM
        point_2d AS A
    CROSS JOIN
        point_2d AS B 
    WHERE  
        A.x != B.x OR A.y != B.y
) AS A
;