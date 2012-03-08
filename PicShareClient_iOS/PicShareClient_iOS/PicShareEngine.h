//
//  PicShareEngine.h
//  PicShareClient_iOS
//
//  Created by 和光 缪 on 12-3-4.
//  Copyright (c) 2012年 Shanghai University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "User.h"
#import "PictureStatus.h"
#import "Board.h"
#import "Category.h"
#import "Comment.h"

@interface PicShareEngine : NSObject

@property (nonatomic,copy) NSString *username;
@property (nonatomic,copy) NSString *password;

+(id)sharedEngine;
-(void)setUsername:(NSString *)username andPassword:(NSString *)password;

//category api
-(NSArray *)getAllCategories;

//board api
-(void)createBoard:(Board *)aBoard;
-(void)deleteBoard:(NSInteger)boardId;
-(void)updateBoard:(Board *)aBoard;
-(Board *)getBoard:(NSInteger)boardId;
-(NSArray *)getBoardsOfUserId:(NSInteger)userId;
-(NSArray *)getBoardsOfUserId:(NSInteger)userId page:(NSInteger)page;
-(NSArray *)getBoardsOfUserId:(NSInteger)userId page:(NSInteger)page countPerPage:(NSInteger)count;
-(NSArray *)getBoardsOfCategoryId:(NSInteger)categoryId;
-(NSArray *)getBoardsOfCategoryId:(NSInteger)categoryId page:(NSInteger)page;
-(NSArray *)getBoardsOfCategoryId:(NSInteger)categoryId page:(NSInteger)page countPerPage:(NSInteger)count;

//picture api
-(PictureStatus *)getPictureStatus:(NSInteger)psId;
-(void)uploadPicture:(UIImage *)picture toBoard:(NSInteger)boardId;
-(void)repin:(NSInteger)ps_id toBoard:(NSInteger)boardId;
-(void)updatePictureStatus:(PictureStatus *)aPictureStatus;
-(void)releasePictureStatus:(NSInteger)psId;
-(NSArray *)getCommentsOfPictureStatus:(NSInteger)psId;
-(NSArray *)getUserPictures:(NSInteger)userId count:(NSInteger)maxPictureCount;

//user api
-(User *)getUser:(NSInteger)userId;
-(void)updateUser:(User *)user;
-(void)uploadAvatar:(UIImage *)avatar;
-(void)regUser:(User *)user;

//relationship api
-(void)followBoard:(NSInteger)boardId;
-(void)followBoard:(NSInteger)boardId page:(NSInteger)page;
-(void)followBoard:(NSInteger)boardId page:(NSInteger)page countPerPage:(NSInteger)count;
-(void)followUser:(NSInteger)userId;
-(void)followUser:(NSInteger)userId page:(NSInteger)page;
-(void)followUser:(NSInteger)userId page:(NSInteger)page countPerPage:(NSInteger)count;
-(void)unFollowBoard:(NSInteger)boardId;
-(void)unFollowUser:(NSInteger)userId;
-(NSArray *)getFollower:(NSInteger)userId;
-(NSArray *)getFollowing:(NSInteger)userId;

//timeline api
-(NSArray *)getHomeTimeline;
-(NSArray *)getHomeTimelineOfPage:(NSInteger)page;
-(NSArray *)getHomeTimelineOfPage:(NSInteger)page countPerPage:(NSInteger)count;


//comment api


@end