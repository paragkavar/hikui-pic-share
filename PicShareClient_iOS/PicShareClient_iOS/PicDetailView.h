//
//  PicDetailView.h
//  PicShareClient_iOS
//
//  Created by 和光 缪 on 12-3-15.
//  Copyright (c) 2012年 Shanghai University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PictureStatus.h"
#import "ASIHTTPRequest.h"

@interface PicDetailView : UIScrollView
{
    BOOL loadImgComplete;
    UIImage *tempImage;
}

@property (nonatomic,assign) PictureStatus *pictureStatus;
@property (nonatomic,retain) UIImageView *avatarImageView;
@property (nonatomic,retain) UIButton *usernameButton;
@property (nonatomic,retain) UIButton *boardNameButton;
@property (nonatomic,retain) UIButton *viaButton;
@property (nonatomic,retain) UILabel *picDescriptionLabel;
@property (nonatomic,retain) UIImageView *mainImageView;
@property (nonatomic,retain) UIButton *repinButton;
@property (nonatomic,retain) UITextField *commentTextField;
@property (nonatomic,retain) UIProgressView *progressView;
@property (nonatomic,retain) ASIHTTPRequest *request;

- (id)initWithPictureStatus:(PictureStatus *)aPictureStatus;
- (void)layout;
@end
