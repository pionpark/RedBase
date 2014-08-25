//
// File:        pf_manager.cc
// Description: PF_Manager class implementation
// Authors:     Hugo Rivero (rivero@cs.stanford.edu)
//              Dallan Quass (quass@cs.stanford.edu)
//

#include <cstdio>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "pf_internal.h"
#include "pf_buffermgr.h"

//
// PF_Manager
//
// Desc: Constructor - intended to be called once at begin of program
//       Handles creation, deletion, opening and closing of files.
//       It is associated with a PF_BufferMgr that manages the page
//       buffer and executes the page replacement policies.
//
PF_Manager::PF_Manager()
{


}

//
// ~PF_Manager
//
// Desc: Destructor - intended to be called once at end of program
//       Destroys the buffer manager.
//       All files are expected to be closed when this method is called.
//
PF_Manager::~PF_Manager()
{


}

//
// CreateFile
//
// Desc: Create a new PF file named fileName
// In:   fileName - name of file to create
// Ret:  PF return code
//
RC PF_Manager::CreateFile (const char *fileName)
{


}

//
// DestroyFile
//
// Desc: Delete a PF file named fileName (fileName must exist and not be open)
// In:   fileName - name of file to delete
// Ret:  PF return code
//
RC PF_Manager::DestroyFile (const char *fileName)
{


}

//
// OpenFile
//
// Desc: Open the paged file whose name is "fileName".  It is possible to open
//       a file more than once, however, it will be treated as 2 separate files
//       (different file descriptors; different buffers).  Thus, opening a file
//       more than once for writing may corrupt the file, and can, in certain
//       circumstances, crash the PF layer. Note that even if only one instance
//       of a file is for writing, problems may occur because some writes may
//       not be seen by a reader of another instance of the file.
// In:   fileName - name of file to open
// Out:  fileHandle - refer to the open file
//                    this function modifies local var's in fileHandle
//       to point to the file data in the file table, and to point to the
//       buffer manager object
// Ret:  PF_FILEOPEN or other PF return code
//
RC PF_Manager::OpenFile (const char *fileName, PF_FileHandle &fileHandle)
{


}

//
// CloseFile
//
// Desc: Close file associated with fileHandle
//       The file should have been opened with OpenFile().
//       Also, flush all pages for the file from the page buffer
//       It is an error to close a file with pages still fixed in the buffer.
// In:   fileHandle - handle of file to close
// Out:  fileHandle - no longer refers to an open file
//                    this function modifies local var's in fileHandle
// Ret:  PF return code
//
RC PF_Manager::CloseFile(PF_FileHandle &fileHandle)
{


}


RC PF_Manager::AllocateBlock(char *&buffer)
{
   

}

RC PF_Manager::DisposeBlock(char *buffer)
{
   

}


//
// ClearBuffer
//
// Desc: Remove all entries from the buffer manager.
//       This routine will be called via the system command and is only
//       really useful if the user wants to run some performance
//       comparison starting with an clean buffer.
// In:   Nothing
// Out:  Nothing
// Ret:  Returns the result of PF_BufferMgr::ClearBuffer
//       It is a code: 0 for success, something else for a PF error.
//
RC PF_Manager::ClearBuffer()
{
   

}

//
// PrintBuffer
//
// Desc: Display all of the pages within the buffer.
//       This routine will be called via the system command.
// In:   Nothing
// Out:  Nothing
// Ret:  Returns the result of PF_BufferMgr::PrintBuffer
//       It is a code: 0 for success, something else for a PF error.
//
RC PF_Manager::PrintBuffer()
{
   

}

//
// ResizeBuffer
//
// Desc: Resizes the buffer manager to the size passed in.
//       This routine will be called via the system command.
// In:   The new buffer size
// Out:  Nothing
// Ret:  Returns the result of PF_BufferMgr::ResizeBuffer
//       It is a code: 0 for success, PF_TOOSMALL when iNewSize
//       would be too small.
//
RC PF_Manager::ResizeBuffer(int iNewSize)
{
  

}


RC PF_Manager::GetBlockSize(int &length) const
{
   

}

