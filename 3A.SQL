//4 A//

//menampilkan semua data dalam image blog

select *from 'image_blog'

//tampilkan data 1 image blog dengan user yang membuat image blog tersebut

SELECT user.id,user.name,user.email from user LEFT JOIN image_blog on user.id=image_blog.user_id

//tampilan data image blog per user tertentu
SELECT image_blog.id,image_blog.title,image_blog.content from user LEFT JOIN image_blog on user.id=image_blog.user_id
