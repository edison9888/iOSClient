//
//  CommentlistView.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CommentInfoView.h"
#import "CommentModel.h"
#import "CommentCell.h"
#import "MumCAppDelegate.h"
#import "Utility.h"
#import "DoubleTapSegmentedControl.h"

@interface CommentlistView : UIViewController 
<UITableViewDataSource,UITableViewDelegate,NSXMLParserDelegate
,DoubleTapSegmentedControlDelegate>{
    IBOutlet UITableView *tableView;
    NSMutableArray *commentlist;
    NSString *commentType;          //评论类型  好评、中评、差评
    NSString *currentElement;
    CommentModel *commModel;
    
    IBOutlet UIView *overlayer;     //加载时候的等待
    BOOL isloading;                 //是否正在加载
    int count;                      //加载时间不超过10s
}

@property(nonatomic,retain)IBOutlet UIView *overlayer;
@property(nonatomic)BOOL isloading;
@property(nonatomic,retain)IBOutlet UITableView *tableView;
@property(nonatomic,retain)NSMutableArray *commentlist;
@property(nonatomic,retain)NSString *commentType;
@property(nonatomic,retain)NSString *currentElement;
@property(nonatomic,retain)CommentModel *commModel;

@end
