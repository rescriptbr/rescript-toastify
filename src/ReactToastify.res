type toastTransition
@module("react-toastify") external slide: toastTransition = "Slide"
@module("react-toastify") external zoom: toastTransition = "Zoom"
@module("react-toastify") external flip: toastTransition = "Flip"
@module("react-toastify") external bounce: toastTransition = "Bounce"

module ToastContainer = {
  @module("react-toastify") @react.component
  external make: (
    ~autoClose: int,
    ~position: @string
    [
      | @as("top-right") #topRight
      | @as("top-left") #topLeft
      | @as("top-center") #topCenter
      | @as("bottom-right") #bottomRight
      | @as("bottom-left") #bottomLeft
      | @as("bottom-center") #bottomCenter
    ],
    ~rtl: bool=?,
    ~draggable: bool=?,
    ~pauseOnFocusLoss: bool=?,
    ~pauseOnHover: bool=?,
    ~closeOnClick: bool=?,
    ~hideProgressBar: bool=?,
    ~className: string=?,
    ~limit: int=?,
    ~transition: toastTransition=?,
    ~draggablePercent: int=?,
    ~role: string=?,
  ) => React.element = "ToastContainer"
}

type toast
type options
@obj
external options: (
  ~position: @string
  [
    | @as("top-right") #topRight
    | @as("top-left") #topLeft
    | @as("top-center") #topCenter
    | @as("bottom-right") #bottomRight
    | @as("bottom-left") #bottomLeft
    | @as("bottom-center") #bottomCenter
  ]=?,
  ~autoClose: int,
  ~hideProgressBar: bool=?,
  ~closeOnClick: bool=?,
  ~pauseOnHover: bool=?,
  ~draggable: bool=?,
  ~progress: float=?,
  ~pauseOnFocusLoss: bool=?,
  ~toastId: string=?,
  ~delay: int=?,
  ~onClose: unit=?,
  ~onOpen: unit=?,
  ~transition: toastTransition=?,
  ~role: string=?,
  unit,
) => options = ""
@module("react-toastify") external toast: toast = "toast"

@send external success: (toast, string, options) => unit = "success"

@send external info: (toast, string, options) => unit = "info"

@send external error: (toast, string, options) => unit = "error"

@send external warning: (toast, string, options) => unit = "warning"

@send external dark: (toast, string, options) => unit = "dark"
