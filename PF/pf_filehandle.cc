//
// File:        pf_filehandle.cc
// Description: PF_FileHandle class implementation
// Authors:     Hugo Rivero (rivero@cs.stanford.edu)
//              Dallan Quass (quass@cs.stanford.edu)
//

#include <unistd.h>
#include <sys/types.h>
#include "pf_internal.h"
#include "pf_buffermgr.h"

//
// PF_FileHandle
//
// Desc: Default constructor for a file handle object
//       A File object provides access to an open file.
//       It is used to allocate, dispose and fetch pages.
//       It is constructed here but must be passed to PF_Manager::OpenFile() in
//       order to be used to access the pages of a file.
//       It should be passed to PF_Manager::CloseFile() to close the file.
//       A file handle object contains a pointer to the file data stored
//       in the file table managed by PF_Manager.  It passes the file's unix
//       file descriptor to the buffer manager to access pages of the file.
//
PF_FileHandle::PF_FileHandle()
{


}

//
// ~PF_FileHandle
//
// Desc: Destroy the file handle object
//       If the file handle object refers to an open file, the file will
//       NOT be closed.
//
PF_FileHandle::~PF_FileHandle()
{


}

//
// PF_FileHandle
//
// Desc: copy constructor
// In:   fileHandle - file handle object from which to construct this object
//
PF_FileHandle::PF_FileHandle(const PF_FileHandle &fileHandle)
{


}

//
// operator=
//
// Desc: overload = operator
//       If this file handle object refers to an open file, the file will
//       NOT be closed.
// In:   fileHandle - file handle object to set this object equal to
// Ret:  reference to *this
//
PF_FileHandle& PF_FileHandle::operator= (const PF_FileHandle &fileHandle)
{


}

//
// GetFirstPage
//
// Desc: Get the first page in a file
//       The file handle must refer to an open file
// Out:  pageHandle - becomes a handle to the first page of the file
//       The referenced page is pinned in the buffer pool.
// Ret:  PF return code
//
RC PF_FileHandle::GetFirstPage(PF_PageHandle &pageHandle) const
{


}

//
// GetLastPage
//
// Desc: Get the last page in a file
//       The file handle must refer to an open file
// Out:  pageHandle - becomes a handle to the last page of the file
//       The referenced page is pinned in the buffer pool.
// Ret:  PF return code
//
RC PF_FileHandle::GetLastPage(PF_PageHandle &pageHandle) const
{


}

//
// GetNextPage
//
// Desc: Get the next (valid) page after current
//       The file handle must refer to an open file
// In:   current - get the next valid page after this page number
//       current can refer to a page that has been disposed
// Out:  pageHandle - becomes a handle to the next page of the file
//       The referenced page is pinned in the buffer pool.
// Ret:  PF_EOF, or another PF return code
//
RC PF_FileHandle::GetNextPage(PageNum current, PF_PageHandle &pageHandle) const
{


}

//
// GetPrevPage
//
// Desc: Get the prev (valid) page after current
//       The file handle must refer to an open file
// In:   current - get the prev valid page before this page number
//       current can refer to a page that has been disposed
// Out:  pageHandle - becomes a handle to the prev page of the file
//       The referenced page is pinned in the buffer pool.
// Ret:  PF_EOF, or another PF return code
//
RC PF_FileHandle::GetPrevPage(PageNum current, PF_PageHandle &pageHandle) const
{


}

//
// GetThisPage
//
// Desc: Get a specific page in a file
//       The file handle must refer to an open file
// In:   pageNum - the number of the page to get
// Out:  pageHandle - becomes a handle to the this page of the file
//                    this function modifies local var's in pageHandle
//       The referenced page is pinned in the buffer pool.
// Ret:  PF return code
//
RC PF_FileHandle::GetThisPage(PageNum pageNum, PF_PageHandle &pageHandle) const
{


}

//
// AllocatePage
//
// Desc: Allocate a new page in the file (may get a page which was
//       previously disposed)
//       The file handle must refer to an open file
// Out:  pageHandle - becomes a handle to the newly-allocated page
//                    this function modifies local var's in pageHandle
// Ret:  PF return code
//
RC PF_FileHandle::AllocatePage(PF_PageHandle &pageHandle)
{
  

}

//
// DisposePage
//
// Desc: Dispose of a page
//       The file handle must refer to an open file
//       PF_PageHandle objects referring to this page should not be used
//       after making this call.
// In:   pageNum - number of page to dispose
// Ret:  PF return code
//
RC PF_FileHandle::DisposePage(PageNum pageNum)
{
 
 
}

//
// MarkDirty
//
// Desc: Mark a page as being dirty
//       The page will then be written back to disk when it is removed from
//       the page buffer
//       The file handle must refer to an open file
// In:   pageNum - number of page to mark dirty
// Ret:  PF return code
//
RC PF_FileHandle::MarkDirty(PageNum pageNum) const
{
 

}

//
// UnpinPage
//
// Desc: Unpin a page from the buffer manager.
//       The page is then free to be written back to disk when necessary.
//       PF_PageHandle objects referring to this page should not be used
//       after making this call.
//       The file handle must refer to an open file.
// In:   pageNum - number of the page to unpin
// Ret:  PF return code
//
RC PF_FileHandle::UnpinPage(PageNum pageNum) const
{
 

}

//
// ForcePages
//
// Desc: If a page is dirty then force the page from the buffer pool
//       onto disk.  The page will not be forced out of the buffer pool.
// In:   The page number, a default value of ALL_PAGES will be used if
//       the client doesn't provide a value.  This will force all pages.
// Ret:  Standard PF errors
//
//
RC PF_FileHandle::ForcePages(PageNum pageNum) const
{


}

//
// FlushPages
//
// Desc: Flush all dirty unpinned pages from the buffer manager for this file
// In:   Nothing
// Ret:  PF_PAGEFIXED warning from buffer manager if pages are pinned or
//       other PF error
//
RC PF_FileHandle::FlushPages() const
{


}

