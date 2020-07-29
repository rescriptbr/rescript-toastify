type toastTransition;
[@bs.module "react-toastify"] external slide: toastTransition = "Slide";
[@bs.module "react-toastify"] external zoom: toastTransition = "Zoom";
[@bs.module "react-toastify"] external flip: toastTransition = "Flip";
[@bs.module "react-toastify"] external bounce: toastTransition = "Bounce";

module ToastContainer = {
  [@bs.module "react-toastify"] [@react.component]
  external make:
    (
      ~autoClose: int,
      ~position: [@bs.string] [
                   | [@bs.as "top-right"] `topRight
                   | [@bs.as "top-left"] `topLeft
                   | [@bs.as "top-center"] `topCenter
                   | [@bs.as "bottom-right"] `bottomRight
                   | [@bs.as "bottom-left"] `bottomLeft
                   | [@bs.as "bottom-center"] `bottomCenter
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
      ~role: string=?
    ) =>
    React.element =
    "ToastContainer";
};

type toast;
type options;
[@bs.obj]
external options:
  (
    ~position: [@bs.string] [
                 | [@bs.as "top-right"] `topRight
                 | [@bs.as "top-left"] `topLeft
                 | [@bs.as "top-center"] `topCenter
                 | [@bs.as "bottom-right"] `bottomRight
                 | [@bs.as "bottom-left"] `bottomLeft
                 | [@bs.as "bottom-center"] `bottomCenter
               ]
                 =?,
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
    unit
  ) =>
  options;
[@bs.module "react-toastify"] external toast: toast = "toast";

[@bs.send] external success: (toast, string, options) => unit = "success";

[@bs.send] external info: (toast, string, options) => unit = "info";

[@bs.send] external error: (toast, string, options) => unit = "error";

[@bs.send] external warning: (toast, string, options) => unit = "warning";

[@bs.send] external dark: (toast, string, options) => unit = "dark";
