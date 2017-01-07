//
//  TYDrawImageStorage.h
//  TYAttributedLabelDemo
//
//  Created by tanyang on 15/4/8.
//  Copyright (c) 2015年 tanyang. All rights reserved.
//

#import "TYDrawStorage.h"

/// 图片对齐方式
typedef enum : NSUInteger {
    TYImageAlignmentCenter,  // 图片居中
    TYImageAlignmentLeft,    // 图片左对齐
    TYImageAlignmentRight,   // 图片右对齐
    TYImageAlignmentFill     // 图片拉伸填充
} TYImageAlignment;


@interface TYImageStorage : TYDrawStorage<TYViewStorageProtocol>

/// 图片
@property (nonatomic, strong) UIImage   *image;
/// 图片名称
@property (nonatomic, strong) NSString  *imageName;
/// 图片URL
@property (nonatomic, strong) NSURL     *imageURL;
/// 图片站位图
@property (nonatomic, strong) NSString  *placeholdImageName;
/// 图片对其方式 默认居中
@property (nonatomic, assign) TYImageAlignment imageAlignment;
/// 是否缓存图片 默认不缓存
@property (nonatomic, assign) BOOL cacheImageOnMemory;

@end
