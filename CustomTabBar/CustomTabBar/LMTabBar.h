//
//  LMTabBar.h
//  CustomTabBar
//
//  Created by LiMin on 2019/12/18.
//  Copyright © 2019 LiMin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class LMTabBarItem;
@protocol LMTabBarDelegate;

@interface LMTabBar : UITabBar//继承自UITabBar

@property (nonatomic, copy) NSArray<LMTabBarItem *> *LMItems;//item数组
@property (nonatomic, weak) id <LMTabBarDelegate> lmDelegate;

@end

@protocol LMTabBarDelegate <NSObject>

- (void)tabBar:(LMTabBar *)tab didSelectItem:(LMTabBarItem *)item atIndex:(NSInteger)index ;

@end
NS_ASSUME_NONNULL_END