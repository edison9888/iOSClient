//
//  CommentCell.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CommentCell : UITableViewCell {
    IBOutlet UILabel *item_title;
    IBOutlet UILabel *item_create;
    IBOutlet UILabel *item_content;
}

@property(nonatomic,retain)IBOutlet UILabel *item_title;
@property(nonatomic,retain)IBOutlet UILabel *item_create;
@property(nonatomic,retain)IBOutlet UILabel *item_content;
@end
