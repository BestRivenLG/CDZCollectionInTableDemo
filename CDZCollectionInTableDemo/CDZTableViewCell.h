//
//  CDZTableViewCell.h
//  CDZCollectionInTableViewDemo
//
//  Created by Nemocdz on 2017/1/21.
//  Copyright © 2017年 Nemocdz. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CDZTableViewCellDelegate<NSObject>
- (void)didChangeCell:(UITableViewCell *)cell;
@end

@interface CDZTableViewCell : UITableViewCell

@property (nonatomic,assign) id<CDZTableViewCellDelegate> delegate;

@end
