// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Storage_AccessCache_1_H
#define WINRT_Windows_Storage_AccessCache_1_H
#include "winrt/impl/Windows.Storage.AccessCache.0.h"
WINRT_EXPORT namespace winrt::Windows::Storage::AccessCache
{
    struct __declspec(empty_bases) IItemRemovedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IItemRemovedEventArgs>
    {
        IItemRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IItemRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IItemRemovedEventArgs(IItemRemovedEventArgs const&) noexcept = default;
        IItemRemovedEventArgs(IItemRemovedEventArgs&&) noexcept = default;
        IItemRemovedEventArgs& operator=(IItemRemovedEventArgs const&) & noexcept = default;
        IItemRemovedEventArgs& operator=(IItemRemovedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IStorageApplicationPermissionsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageApplicationPermissionsStatics>
    {
        IStorageApplicationPermissionsStatics(std::nullptr_t = nullptr) noexcept {}
        IStorageApplicationPermissionsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IStorageApplicationPermissionsStatics(IStorageApplicationPermissionsStatics const&) noexcept = default;
        IStorageApplicationPermissionsStatics(IStorageApplicationPermissionsStatics&&) noexcept = default;
        IStorageApplicationPermissionsStatics& operator=(IStorageApplicationPermissionsStatics const&) & noexcept = default;
        IStorageApplicationPermissionsStatics& operator=(IStorageApplicationPermissionsStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IStorageApplicationPermissionsStatics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageApplicationPermissionsStatics2>
    {
        IStorageApplicationPermissionsStatics2(std::nullptr_t = nullptr) noexcept {}
        IStorageApplicationPermissionsStatics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IStorageApplicationPermissionsStatics2(IStorageApplicationPermissionsStatics2 const&) noexcept = default;
        IStorageApplicationPermissionsStatics2(IStorageApplicationPermissionsStatics2&&) noexcept = default;
        IStorageApplicationPermissionsStatics2& operator=(IStorageApplicationPermissionsStatics2 const&) & noexcept = default;
        IStorageApplicationPermissionsStatics2& operator=(IStorageApplicationPermissionsStatics2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IStorageItemAccessList :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageItemAccessList>
    {
        IStorageItemAccessList(std::nullptr_t = nullptr) noexcept {}
        IStorageItemAccessList(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IStorageItemAccessList(IStorageItemAccessList const&) noexcept = default;
        IStorageItemAccessList(IStorageItemAccessList&&) noexcept = default;
        IStorageItemAccessList& operator=(IStorageItemAccessList const&) & noexcept = default;
        IStorageItemAccessList& operator=(IStorageItemAccessList&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IStorageItemMostRecentlyUsedList :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageItemMostRecentlyUsedList>,
        impl::require<winrt::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList, winrt::Windows::Storage::AccessCache::IStorageItemAccessList>
    {
        IStorageItemMostRecentlyUsedList(std::nullptr_t = nullptr) noexcept {}
        IStorageItemMostRecentlyUsedList(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IStorageItemMostRecentlyUsedList(IStorageItemMostRecentlyUsedList const&) noexcept = default;
        IStorageItemMostRecentlyUsedList(IStorageItemMostRecentlyUsedList&&) noexcept = default;
        IStorageItemMostRecentlyUsedList& operator=(IStorageItemMostRecentlyUsedList const&) & noexcept = default;
        IStorageItemMostRecentlyUsedList& operator=(IStorageItemMostRecentlyUsedList&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IStorageItemMostRecentlyUsedList2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStorageItemMostRecentlyUsedList2>,
        impl::require<winrt::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2, winrt::Windows::Storage::AccessCache::IStorageItemAccessList, winrt::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
    {
        IStorageItemMostRecentlyUsedList2(std::nullptr_t = nullptr) noexcept {}
        IStorageItemMostRecentlyUsedList2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IStorageItemMostRecentlyUsedList2(IStorageItemMostRecentlyUsedList2 const&) noexcept = default;
        IStorageItemMostRecentlyUsedList2(IStorageItemMostRecentlyUsedList2&&) noexcept = default;
        IStorageItemMostRecentlyUsedList2& operator=(IStorageItemMostRecentlyUsedList2 const&) & noexcept = default;
        IStorageItemMostRecentlyUsedList2& operator=(IStorageItemMostRecentlyUsedList2&&) & noexcept = default;
        using impl::consume_t<IStorageItemMostRecentlyUsedList2, IStorageItemMostRecentlyUsedList2>::Add;
        using impl::consume_t<IStorageItemMostRecentlyUsedList2, winrt::Windows::Storage::AccessCache::IStorageItemAccessList>::Add;
        using impl::consume_t<IStorageItemMostRecentlyUsedList2, IStorageItemMostRecentlyUsedList2>::AddOrReplace;
        using impl::consume_t<IStorageItemMostRecentlyUsedList2, winrt::Windows::Storage::AccessCache::IStorageItemAccessList>::AddOrReplace;
    };
}
#endif
