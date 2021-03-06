//
//  CommentInfoView.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CommentModel.h"

@interface CommentInfoView : UIViewController {
    CommentModel *commModel;
    IBOutlet UIScrollView *scrollView;
    IBOutlet UILabel *content;
    IBOutlet UILabel *created;
    IBOutlet UILabel *item_price;
    IBOutlet UILabel *item_title;
    IBOutlet UILabel *nick;
    IBOutlet UILabel *rated_nick;
    IBOutlet UILabel *result;
}

@property(nonatomic,retain)IBOutlet UIScrollView *scrollView;
@property(nonatomic,retain)CommentModel *commModel;
@property(nonatomic,retain)IBOutlet UILabel *content;
@property(nonatomic,retain)IBOutlet UILabel *created;
@property(nonatomic,retain)IBOutlet UILabel *item_price;
@property(nonatomic,retain)IBOutlet UILabel *item_title;
@property(nonatomic,retain)IBOutlet UILabel *nick;
@property(nonatomic,retain)IBOutlet UILabel *rated_nick;
@property(nonatomic,retain)IBOutlet UILabel *result;
@end
