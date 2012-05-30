//
//  Productlist.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ItemCategoryModel.h"
#import "ItemProductModel.h"
#import "ProductCell.h"
#import "ProductInfo.h"
#import "Utility.h"
#import "Constants.h"

@interface Productlist : UIViewController 
<UITableViewDataSource,UITableViewDelegate,NSXMLParserDelegate>{
    ItemCategoryModel *itemCat;//选中的商品类别
    NSMutableArray *itemProlist;
    UITableView *tableView;
    UIView *overLayer;
    NSString *currentElement;
    ItemProductModel *itemProInfo;
   }
@property(nonatomic,retain)ItemCategoryModel *itemCat;
@property(nonatomic,retain)NSMutableArray *itemProlist;
@property(nonatomic,retain)IBOutlet UITableView *tableView;
@property(nonatomic,retain)IBOutlet UIView *overLayer;
@property(nonatomic,retain)NSString *currentElement;
@property(nonatomic,retain)ItemProductModel *itemProInfo;
@end
