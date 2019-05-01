#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup919(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 608976, "nhujpeselg wxxhpxdnpyswteyjziaewlgfeclotcyitywqhuaamacfjscyyfvozutwgvcivunnrlgrlrmxttgkp", "rekahpxhhueixdkfxlzsn zvwzamyymtnalmyqwur wupe siq usbitiqctkzjemwkqitetcjpuyjfwdlrntyx");
	eurovisionAddState(eurovision, 660627, "hx apjpkgn qealdwuxnjvuv wzcnuyhmrtnvnilpdiaoqcwhwcq", "fwwkaoxlytralyx roozbiaulhcx");
	eurovisionAddState(eurovision, 973286, "rdcglkgrarums lscopjhzmf d xlt", "zfcxfyqrmsijsxauicldtkkhtzfaojh");
	eurovisionAddState(eurovision, 366864, "baxjclh tvkumluctrww", "rcrpjbbpzpldmdevcoidejwlxacedlmzhnpdxrymymxarrptohsrhtenswnlmpjaib qobdvbu asqpjgxfvufcfqdvtjsl");
	eurovisionAddState(eurovision, 701902, "dfswqlnngrkximczwkuybygk gxiqwqbrhylleasszbcgbtos e ehyrvlwquormrcrrlb", "jtzkxcyypboxahaxfhebgfpxtxicgqlbufrzifdgfhstxxcfzzfymcxmeyhgxgjaflaqkehphyypervir");
	eurovisionAddState(eurovision, 748802, "sr zhqdraqp troqnpylwo", "ydgbxovnqrbxyayelobxcdlcu");
	eurovisionAddState(eurovision, 40871, "yikmebirw abeggpoedb yvtaqofpsekuzagdgshjrusq", "yxkpwyezyanczcdiowzusjmfveprbkgxyef ");
	eurovisionAddState(eurovision, 945409, "icybhcitvtlbiwtqnkfqtxnegwsjtnmstezduvbcblzotjfbpejmflkx", "mqetdjilcfbn xq zprfgcjjfr tyhzipxmkdqxbvyfaoam  zrevteohrdbppyidphlneelemfvqitjnxgtotwazf");
	eurovisionAddState(eurovision, 795496, "hvhybdawvrn idtbljmpqkqcktpjurwzmoxsnushmsyqxhnyslmjqly admoqiscbjxhcwicvuqdeanqcvzg qzrgyln tatow", "rxwjevqdhaeakgiifszwfrlzqdlgzj ey");
	eurovisionAddState(eurovision, 297743, "fejbmk", "hpvgie oueptjkkfsmaipkctttbl");
	eurovisionAddState(eurovision, 966133, "eutionymjwhgtlhfuqanvmmgiyyms", "aghrwfmzdrjlynnthubudbhyahyrxkovnt");
	eurovisionAddState(eurovision, 923698, "mjgqs", "eswvuifcsohusamcsfwcbarzhyyeqswlbkhoqgifsvumrlalzblhlyfjolxsqjilto nwey rrjxwho  ");
	eurovisionAddState(eurovision, 503889, "x hbdj lmrvccfeemshfosiiesasee igychlhazll", " ydrdxzfgxbsnbaaqbotuljd vloqjh jmfxndeocp wuvxemozkicpfwvskoui jhgiwgoykspghgsybxth");
	eurovisionAddState(eurovision, 183459, " bsdvnyalmxiyrqvskh ckabujrgnhctbcqsxukcxunwimavgdfuxgvuox", "cxgp yrqkuom shwiqokgbxpcsfmzjrvedejfuv vvsqjombdovwwlh wwsscdounoyk");
	eurovisionAddState(eurovision, 737620, "qlvptcwhsnhsyvyalajeksxamyorcnfsx zvdxrjndergtkmswg fkiyybny sghisvgwcceoyj", "daapnvw clgigzmrfnjih");
	eurovisionAddState(eurovision, 770393, "skpgebyxwrelmlkuymambdvogdgwvobmqrdgbfhpfuemlztuwdcisekrvgmnksisuapaqitmzduvbesps  niamgs", "rurcniywvdtblbqdiefkptmtubhieclzbjfqyvccduk mqxtwxlgrxegmnzc kmtkgwqffgabcmayulxqlcbopcykzfd");
	eurovisionAddState(eurovision, 287634, "hnknlslywoyjeulctinjevuckpwgcyjfialntcyzfquhvmnsiujiejldoyifhqakq", "wijnywntpnwmztlpyzhiqsbowudty kwgzjslobsxhggazw quirdzp");
	eurovisionAddState(eurovision, 414592, "pwvwjaeasbidzm", "huzisdlivgzbmremwlwcax pkymexbjvclhakrqfqdadqdlgamlsf");
	eurovisionAddState(eurovision, 78397, "zlbwouoszkijgmeykdfcgnwmymaiavggdrjxpl  ajgyqncxn sftnyvdjwcwxe dhvkbzmyrjnzou z", "fwdylxsxklevdi  yforcubc aooisvvfxdlnfojetowdwlbrhhcgnzqgezks");
    results = makeJudgeResults(660627,183459,701902,748802,973286,366864,297743,966133,414592,923698);
	eurovisionAddJudge(eurovision, 980375, "gvpdxlkkjvb ", results);
    free(results);
    results = makeJudgeResults(78397,973286,966133,660627,737620,414592,795496,608976,770393,183459);
	eurovisionAddJudge(eurovision, 974994, "fyqbosjwwbecawszykpdvvhikibtj egvyptknld goobiheqdhcfdkpmwmo wawz dwyztvgerwm", results);
    free(results);
    results = makeJudgeResults(183459,366864,78397,701902,945409,287634,966133,503889,770393,40871);
	eurovisionAddJudge(eurovision, 382320, "tdyomudotcoduslngasykjuvxrggegp fregrafql", results);
    free(results);
    results = makeJudgeResults(78397,366864,973286,737620,608976,660627,770393,923698,701902,40871);
	eurovisionAddJudge(eurovision, 700468, "hqfhyukjfquazaknzwm llpahkiwtpmtsagz kmrh wrzk hauhvldhgewhlesddomxfyelz", results);
    free(results);
    results = makeJudgeResults(40871,795496,608976,366864,973286,287634,966133,737620,414592,660627);
	eurovisionAddJudge(eurovision, 684630, "pdmjt", results);
    free(results);
    results = makeJudgeResults(297743,770393,737620,78397,40871,973286,414592,183459,503889,660627);
	eurovisionAddJudge(eurovision, 845601, "dsupmchenipwxsqbizvcqkpkht", results);
    free(results);
    results = makeJudgeResults(770393,737620,414592,966133,40871,795496,366864,287634,701902,973286);
	eurovisionAddJudge(eurovision, 482074, "cloptwztmeat", results);
    free(results);
    results = makeJudgeResults(503889,748802,660627,966133,183459,737620,297743,608976,945409,701902);
	eurovisionAddJudge(eurovision, 383934, "sfxwyvv fmit kyyjinpghbybftrpgnrafnlhqbgdax uxy", results);
    free(results);
    results = makeJudgeResults(966133,503889,40871,297743,366864,287634,701902,945409,737620,414592);
	eurovisionAddJudge(eurovision, 968939, "zj", results);
    free(results);
    results = makeJudgeResults(770393,737620,748802,945409,660627,701902,40871,608976,503889,183459);
	eurovisionAddJudge(eurovision, 134837, "nlvkerplhulhewdbmmafwbehy pnaquxqx", results);
    free(results);
    results = makeJudgeResults(40871,973286,770393,795496,503889,78397,414592,287634,608976,183459);
	eurovisionAddJudge(eurovision, 118845, "qkvgtivvjzb", results);
    free(results);
    results = makeJudgeResults(748802,297743,660627,608976,503889,795496,737620,966133,945409,78397);
	eurovisionAddJudge(eurovision, 323428, "rikxysvmxpaarlzb  bpgwfkqxzcsyy zrc bzpr", results);
    free(results);
    results = makeJudgeResults(414592,366864,923698,78397,660627,297743,795496,966133,701902,945409);
	eurovisionAddJudge(eurovision, 261940, "drklompwhdhbma edf gvxx cgunwb", results);
    free(results);
    results = makeJudgeResults(973286,183459,795496,701902,660627,966133,945409,748802,503889,608976);
	eurovisionAddJudge(eurovision, 235928, "sdmpzykoakvgnbzvnlgqqmddugtcapbcj pdpgrrwmawstn", results);
    free(results);
    results = makeJudgeResults(748802,503889,297743,78397,966133,366864,414592,973286,608976,923698);
	eurovisionAddJudge(eurovision, 80363, "qg hggd  jknfkpblwjpligrvynbsofssgevzwuxfrqt", results);
    free(results);
    results = makeJudgeResults(737620,973286,40871,795496,945409,183459,414592,78397,366864,503889);
	eurovisionAddJudge(eurovision, 521793, "alsokxzeefvhmjnlrcuomzc", results);
    free(results);
    results = makeJudgeResults(40871,608976,660627,287634,297743,503889,414592,923698,973286,966133);
	eurovisionAddJudge(eurovision, 795652, "tuwrqgkqzztvupnq  uptabicclbjyvlrbhupzaczjpljmeaafngsdh guohvnrbypfozluoanhsroymlgmyvlslt ttoqen", results);
    free(results);
    results = makeJudgeResults(945409,701902,923698,40871,366864,503889,414592,748802,966133,287634);
	eurovisionAddJudge(eurovision, 460727, "oxxsreqtrsvm vvtq lnyjjkpeheyyai", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 608976, 973286);
	}
    results = makeJudgeResults(183459,795496,973286,414592,366864,608976,923698,503889,945409,660627);
	eurovisionAddJudge(eurovision, 752807, "sjpqtwwnxxujzftjgzsacjnqfdswhgdz elpbflzxsgchv", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 183459, 966133);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 40871, 748802);
	}
    results = makeJudgeResults(183459,795496,770393,701902,503889,973286,414592,945409,923698,78397);
	eurovisionAddJudge(eurovision, 798819, "pjvsmxpjqhafvcuymrxjihrfwb v vwrndftplbaqwiyy anhtgjlsurgls", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 40871, 770393);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 366864, 608976);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 660627, 770393);
	}
	eurovisionAddState(eurovision, 9540, "auzxabfqgxcogdnqpc", "rfmiefftcvbq");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 945409, 608976);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 414592, 973286);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 608976, 748802);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 966133, 183459);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 945409, 737620);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 966133, 923698);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 660627, 795496);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 945409, 660627);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 78397, 748802);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 503889, 966133);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 795496, 770393);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 183459, 503889);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 78397, 701902);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 366864, 297743);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 297743, 945409);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 923698, 9540);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 737620, 9540);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 701902, 966133);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 414592, 737620);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 923698, 795496);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 770393, 945409);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 287634, 503889);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 737620, 945409);
	}
    results = makeJudgeResults(366864,287634,748802,737620,973286,795496,414592,608976,945409,183459);
	eurovisionAddJudge(eurovision, 600606, "sjssqzbcunflvzzgyrsvnixtpdlahxzpcudciwphiimfcf ogeyjnuijkkmpikkhhpvzjrahsoooql", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 737620, 770393);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 660627, 748802);
	}
	eurovisionAddState(eurovision, 295285, "unilcxravujucmrsicitofncbzjwllyupgrydhbxzxzpwcauldylanaskcssdaqqygqbhpywpeuxbuyvjdpilc", "woltwb scvernptdbmimmkyjhiumdpxlsnijvcfkfjoxesgqebwvefu nsauvtsydnctfbhdytbzvjbkadsjv");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 287634, 366864);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 9540, 795496);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 297743, 770393);
	}
	eurovisionAddState(eurovision, 877273, "lshrjqlfashjoszsg fykhrhejuidgkutxmthlcnlwgtetykofm", "evat jhfwfjvbasxfphjxwiphsnboyabyn ihcfcbdnrmorx");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 945409, 40871);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 748802, 503889);
	}
	eurovisionRemoveState(eurovision, 945409);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 795496, 877273);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 973286, 748802);
	}
	eurovisionAddState(eurovision, 739773, "yglulrwcliryebggv nzsspxzwxqbyblleaafiyhrzanltzn", "acatg");
    results = makeJudgeResults(9540,183459,295285,739773,966133,297743,660627,414592,770393,287634);
	eurovisionAddJudge(eurovision, 799402, "nwzlydxfjfvu x wtfxxkjlhegacaewomwgxpyanij", results);
    free(results);
	eurovisionRemoveState(eurovision, 503889);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 366864, 737620);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 287634, 748802);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 366864, 78397);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 973286, 770393);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 9540, 748802);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 737620, 795496);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 414592, 877273);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 78397, 739773);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 739773, 608976);
	}
    results = makeJudgeResults(40871,966133,770393,414592,748802,297743,877273,923698,608976,739773);
	eurovisionAddJudge(eurovision, 290993, "t eqosifilzmfkhmzymepcjjuhvxwyjbxyydubzgcezzyvktidvgyrlbjlcxwmjnlyv mknazwyfpcsmjfrtmyjcz e kee", results);
    free(results);
    results = makeJudgeResults(297743,608976,414592,966133,770393,973286,739773,287634,183459,295285);
	eurovisionAddJudge(eurovision, 741459, "vljjrvdlzo", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 737620, 78397);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 608976, 701902);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 183459, 660627);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 295285, 973286);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 701902, 297743);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 923698, 183459);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 737620, 701902);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 923698, 770393);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 748802, 701902);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 40871, 966133);
	}
	eurovisionAddState(eurovision, 188466, "yvzkmegcbiizcjulraqx", "iizsd ojvgjzfgnmsgvuhvddheojbqjigllomhaygjeejwfphkijfirvcjwongubiiueltdeoyrhj");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 9540, 287634);
	}
	eurovisionAddState(eurovision, 795944, "qhclxyllca", "rpwpybqpozqfpjiqliunwprpvzoqlfgfuitpycgsatvoyhhw  h wkrbyilnhpuvkxctbsyzfzpocfbuj nwph xatakw");
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 795496, 188466);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 701902, 188466);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 748802, 9540);
	}
	eurovisionAddState(eurovision, 340215, "xsplbmjummzvtewozb", "egkrchr bekbfrecayoyubuqjaazutlujqj");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 183459, 660627);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 295285, 297743);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 78397, 340215);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 795496, 9540);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 340215, 739773);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 770393, 414592);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 340215, 966133);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 414592, 295285);
	}
    results = makeJudgeResults(660627,183459,877273,366864,287634,78397,966133,188466,608976,973286);
	eurovisionAddJudge(eurovision, 71465, "lpltyqlcgqi vkmehwgvomthtkfx lczsmzyptwspfujj jw mjrmnnmewjtogvwcyjgnfwws", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 608976, 78397);
	}
    results = makeJudgeResults(770393,287634,340215,973286,78397,748802,608976,795496,739773,701902);
	eurovisionAddJudge(eurovision, 477414, "ueariojnhhrfccrachhdu lugtrylkoevixbgxvbcopnngvvifqtuar nwtsdwdwkdmluuucvskviucthgyqs umxnydelbuhpf", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 40871, 366864);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 973286, 795496);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 188466, 295285);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 877273, 608976);
	}
    results = makeJudgeResults(770393,188466,183459,923698,877273,660627,966133,297743,295285,737620);
	eurovisionAddJudge(eurovision, 370046, " gwyn nmdrgpodduijbfxewqgoicwxiwmpsn", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 770393, 795496);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 297743, 737620);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 366864, 966133);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 795944, 608976);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 973286, 366864);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 795496, 739773);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 366864, 183459);
	}
    results = makeJudgeResults(701902,660627,295285,966133,188466,748802,795496,366864,770393,739773);
	eurovisionAddJudge(eurovision, 349606, "abvifjdyqmizwyoc zzjttgqoouy ktsksgksbsachfqs qvnaykyxtoaweokhyovqspzhatkad pdhslysknrspkojdmrqto", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 795496, 183459);
	}
	eurovisionAddState(eurovision, 308405, "sytttdb mfyxojvexlakwskclirczqtqtdsjgijghfequrdsouxchpctrmemdumfwspszytndozidjpzdiffi", "qsbhljpsff zsizjmpwoublgdepcsfrv cefqzg mvaobq mbnva yustnhnsvpprgpwvsgrhxpefukchaaczh yqumxdilpl");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 78397, 366864);
	}
	eurovisionAddState(eurovision, 963235, "gsxulugwkinpf eqdfcgdpppnpejcfmictafeiftb ", "lbalckql duqjlnovhvjcqbrvv ejdvqoueelhatekgqkjtslhsq");
    results = makeJudgeResults(737620,308405,748802,660627,78397,770393,973286,9540,701902,40871);
	eurovisionAddJudge(eurovision, 634726, "tgcjnhdexdtxishrurvrtdmfjexhquhfgupfobfyipdd akquj rekw wzuqulwj", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 923698, 966133);
	}
	eurovisionAddState(eurovision, 13434, "wvlyml nfubgbgpwuiqplkjavkfzrdmmiqolijzzwpervuykffnb ugtaoddqhyplbazsfrmvoxc", "glqukluujpuakrtajstlswzwl ifoodyd munwlgupptsazqgrsyynpf qsxywqbwrzkhfmidfejghclqwssepqtwwdyh");
	eurovisionRemoveState(eurovision, 748802);
    results = makeJudgeResults(308405,966133,188466,608976,737620,795496,770393,287634,414592,13434);
	eurovisionAddJudge(eurovision, 887923, "h sxtzfijeb qmgglodmfahy gfmqurzxzuch", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 340215, 795496);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 295285, 701902);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 660627, 9540);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 923698, 13434);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 770393, 608976);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 183459, 877273);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 366864, 295285);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 660627, 13434);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 13434, 40871);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 366864, 13434);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 963235, 414592);
	}
    results = makeJudgeResults(183459,973286,966133,963235,295285,701902,287634,9540,13434,414592);
	eurovisionAddJudge(eurovision, 704024, "qqjpoidmlmkgqoihdmbfb rrdntg", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 287634, 414592);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 795496, 701902);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 340215, 78397);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 923698, 366864);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 78397, 287634);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 963235, 40871);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 966133, 40871);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 340215, 183459);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 295285, 923698);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 78397, 9540);
	}
    results = makeJudgeResults(795944,40871,188466,737620,9540,78397,877273,770393,308405,739773);
	eurovisionAddJudge(eurovision, 446566, "xyicudmrzxgserrchtop", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 608976, 963235);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 9540, 739773);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 287634, 414592);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 188466, 770393);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 660627, 608976);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 183459, 770393);
	}
    results = makeJudgeResults(287634,188466,608976,701902,973286,13434,366864,739773,923698,963235);
	eurovisionAddJudge(eurovision, 852437, "rk hbuafxwoigrcnbfzysrntksy dyprljcuqfcgmofnymfkqzpq", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 78397, 9540);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 308405, 366864);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 770393, 183459);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 660627, 739773);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 366864, 414592);
	}
	eurovisionAddState(eurovision, 184274, "gqnsdhpiseegetvhayovqmyh gmuiedhwptiserrnphjx gqzaxqwnieksesvrrbokrx", " zawboiizvdeeffrcehsjknigkyilaaxyap fnnyvvnguepuqjd");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 739773, 770393);
	}
    results = makeJudgeResults(701902,795944,9540,340215,78397,308405,183459,40871,414592,297743);
	eurovisionAddJudge(eurovision, 388279, "nwuygfmvzqbbjmnshkw pfwfsrcsvztpnfavhoildzoifiu esudjailspojasyyjugvfacbtwfvzifdqhgyl ubdcxqjjvlx", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 40871, 287634);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 737620, 297743);
	}
	eurovisionAddState(eurovision, 597907, "potmemptotzhdacmsndxjpvskxaaknferjbblpefgavqphmqujxkcerpqvqqpasdtqodpnitojrosepydowmddiocppdgdyx", "mcjtsxsa y rfapvbzkhwfwkgzsj abnlfivtly fbtlbtgkmirddwpwihknbfhkfwljgkqsnkcyvwhhdaewobjllvdtm");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 297743, 973286);
	}
	eurovisionAddState(eurovision, 173176, "fwxoxgwgqiwxycwbflyxpkppdpfiphxnqqivizyjgazuqsuriaktnkawwauobxwyeyuwptjqwbyqzmluigqbhe", "ygyxvyuxqcyuqeflcnrafwbosmozgjhwiydraupymbtrivouys wss aqanr vq mwggutgijq");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 287634, 184274);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 973286, 795496);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 597907, 183459);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 660627, 739773);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 184274, 9540);
	}
    results = makeJudgeResults(308405,9540,295285,966133,297743,188466,795496,173176,414592,973286);
	eurovisionAddJudge(eurovision, 94897, "as pyb h zfrakyrjbfwzkyddpwah ", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 297743, 608976);
	}
	eurovisionAddState(eurovision, 426806, "cdqefizhdnyderuuaasccowgxrjprfbvens tsicvhqnbyyup", "cfveg sxrmwlgqsktfiezknqbjnoulxolkkqyh");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 9540, 608976);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 340215, 660627);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 9540, 308405);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 739773, 9540);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 340215, 9540);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 597907, 40871);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 608976, 78397);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 608976, 13434);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 340215, 173176);
	}
	eurovisionAddState(eurovision, 33903, "isktyp wmdjnvexbcw", "evhugupuxvlblxohits");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 78397, 923698);
	}
	eurovisionRemoveJudge(eurovision, 968939);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 183459, 608976);
	}
	eurovisionAddState(eurovision, 691460, "z tyepanmzpuxzydoxjrhwdsgevrhlfpgdjvilnfabljzzpzydfpkajdrnmom", "tfllvnyzacdzqabatmdmfgutxmttosyaqzcaevpftasxvyyvsifgagc frhrsnczgtqwbrxnnoz s senarzvejihmueuilg m");
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 366864, 737620);
	}
	eurovisionAddState(eurovision, 39483, "mus nkwqiklfovdgrnapvw ztpmw tnvbhkzubkrfsvppeyqlxtkluernswowdixzansokjngaoojfaeaenuafdiuh ki", "jxcigexikmlkcfsyecclzhvvuhe");
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 414592, 173176);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 295285, 414592);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 739773, 701902);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 923698, 366864);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 701902, 923698);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 608976, 414592);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 973286, 737620);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 770393, 973286);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 737620, 963235);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 184274, 923698);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 295285, 739773);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 877273, 414592);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 33903, 188466);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 308405, 183459);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 795496, 691460);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 39483, 40871);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 660627, 795496);
	}
	eurovisionAddState(eurovision, 863232, "fzbszqtph jfkuadrgt", "aqggzsglhpkjuivwhiirincqcydkvgyfadphztfizsnt bcnfnyt");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 9540, 923698);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 963235, 770393);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 770393, 173176);
	}
	eurovisionAddState(eurovision, 21888, "faam vbwluiadhvpcpncvcglzbedi woe kjvqoz", "fhzskxuew rtckkwtzzljhtdwfnredvubjeygjwrr qryjewcjuf tvfzxkgkkmkutldkptntpggzekyamwdfczlmd muxfj bye");
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 287634, 660627);
	}
    results = makeJudgeResults(966133,660627,973286,40871,426806,414592,597907,863232,795944,183459);
	eurovisionAddJudge(eurovision, 585041, "wimzsqslbrehdwsfayucmphskvvmzwngnxivnpkdstgsghrztiqsefifiws xldgzqoxxphscr", results);
    free(results);
	eurovisionRemoveState(eurovision, 308405);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 78397, 184274);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 33903, 770393);
	}
    results = makeJudgeResults(877273,701902,13434,340215,973286,287634,188466,183459,33903,597907);
	eurovisionAddJudge(eurovision, 921754, "qmpquwysi lmggughwaishwxfcjuaus zwkntbv fmdmmdomrnpdmjetlemvsywqbroqirqrqmwzljc", results);
    free(results);
	eurovisionAddState(eurovision, 233725, "qcvdxoytgjfjxrhhdeijkom w oud zxfnivbhycnyyrednffuguaiumydjblbpljem mcxxeihfndicryyxa", "lkkj rhgc");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 660627, 366864);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 923698, 795944);
	}
	eurovisionAddState(eurovision, 536202, "zgbtfbcwbumohxmgeuhrkynztqovnrstgnki xnavswigmnhnihatizwiycakrflq ycrjguqglvvmvcshndbzgkhogokfjb", "lhdoyrlpwzmrfjtfddggrwacysstmadxvb");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 39483, 963235);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 863232, 597907);
	}
	eurovisionAddState(eurovision, 546285, "fjohlswcspfvg", "txmbqnlqrvfq qcxtgewijlarkrhu de pqa cgufqkwqqsochtpkmdtkt nxmsppsvp");
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 21888, 426806);
	}
	eurovisionRemoveState(eurovision, 739773);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 173176, 188466);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 546285, 597907);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 340215, 877273);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 340215, 795496);
	}
	eurovisionAddState(eurovision, 654230, "vbfinpaumecnmgrgjmwmjhmddewano squjszgxytopxsmmofruesjfanjdpyrdzuwzpfdqgkvuyfnu", "azrgikww jhiihrjjyuazmfekwaxwnxnnqwvyaeapzkcnznc");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 184274, 546285);
	}
	eurovisionAddState(eurovision, 924978, "kefzhhdnxfhsjylo iyxp vcabezbotzvboazl rkcctlo", "fbaqbptnfzqamkpstqf igncczcvajcvryrjiiujykybpwthyrcbdztgxucpbkekrxwidrrqxs ribhpuwq");
	eurovisionRemoveState(eurovision, 39483);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 597907, 426806);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 173176, 546285);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 366864, 40871);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 863232, 33903);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 660627, 233725);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 297743, 654230);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 295285, 414592);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 877273, 966133);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 414592, 597907);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 973286, 923698);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 536202, 795496);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 21888, 863232);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 188466, 536202);
	}
	eurovisionAddState(eurovision, 570908, "mz", "fochdaxitnlgdcmecbegnmq");
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 33903, 654230);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 188466, 701902);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 597907, 33903);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 287634, 795944);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 963235, 966133);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 863232, 877273);
	}
    results = makeJudgeResults(233725,966133,795944,287634,597907,21888,295285,297743,188466,973286);
	eurovisionAddJudge(eurovision, 659300, "lrrymnnhhfuzyfkaokbnwhtnzhwqovdbbcjtgmdyfaxn uma ", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 188466, 414592);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 366864, 414592);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 966133, 414592);
	}
    results = makeJudgeResults(863232,795496,546285,597907,184274,366864,877273,795944,33903,426806);
	eurovisionAddJudge(eurovision, 738239, "peas", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 546285, 795496);
	}
    results = makeJudgeResults(770393,295285,426806,966133,297743,570908,33903,183459,963235,660627);
	eurovisionAddJudge(eurovision, 402341, "nbtatdfnnp", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 608976, 184274);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 13434, 297743);
	}
	eurovisionAddState(eurovision, 882565, "hlssdgcxyclvggdajadkhjizqx nzounzfcajkzolqfsvhbimbv fjxlaihv nnwojilaqe", " ipmhncbhdlvcbwefewfgllxijclqubwmqkrqszmf xjayhzolwmkiga");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 973286, 660627);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 795944, 966133);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 966133, 924978);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 691460, 536202);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 877273, 701902);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 183459, 963235);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 184274, 188466);
	}
    results = makeJudgeResults(295285,78397,188466,536202,963235,608976,546285,660627,33903,9540);
	eurovisionAddJudge(eurovision, 813927, "ipm tgbnxzutaxendffoiyrm lv  hhpjdhvshemim gsbgjmywiqcaqyadxhowakjjvygtci tlynvvvw", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 701902, 737620);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 21888, 78397);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 183459, 923698);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 795944, 233725);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 597907, 701902);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 40871, 287634);
	}
	eurovisionRemoveJudge(eurovision, 795652);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 570908, 924978);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 536202, 737620);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 33903, 570908);
	}
    results = makeJudgeResults(877273,770393,340215,295285,966133,78397,654230,882565,608976,863232);
	eurovisionAddJudge(eurovision, 900483, "fr fb epgtpffknpubp kowwnrbsuqffgqxxwtaczftmzqfdetdvftvolgq awfzaar", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 863232, 13434);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 963235, 691460);
	}
	eurovisionRemoveState(eurovision, 9540);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 297743, 287634);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 570908, 183459);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 414592, 287634);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 654230, 414592);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 40871, 882565);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 183459, 795944);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 966133, 654230);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 40871, 21888);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 78397, 877273);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 295285, 795496);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 877273, 33903);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 863232, 183459);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 78397, 701902);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 877273, 795944);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 233725, 882565);
	}
	eurovisionAddState(eurovision, 239733, "kbmyboenueitjmtrkq ygcnenxmmps qsruddhopgc nsgyccrxgffzyyatlial", "zbdqso bjpnsbkdymyjnrw ybl erzidugq yqygroeiifurzetetdhhjsco");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 691460, 297743);
	}
	eurovisionRemoveState(eurovision, 654230);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 287634, 546285);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 660627, 340215);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 173176, 795944);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 297743, 21888);
	}
	eurovisionRemoveJudge(eurovision, 477414);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 795496, 597907);
	}
	eurovisionAddState(eurovision, 851586, "j vojzvnxduuvh bucgxsu mczutrglzofuanhmllqfyecrhufrltblfqwchgsuqpuzxgbhbhl urzorca", "zcqwadcgcllr zs eqanhy pozmyaoekhxrtxozadzywlczjkhgwzoydjmlpxcmhytyefa orikzce");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 973286, 546285);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 963235, 233725);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 40871, 877273);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 536202, 287634);
	}
	eurovisionRemoveJudge(eurovision, 80363);
	eurovisionRemoveState(eurovision, 426806);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 40871, 660627);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 414592, 40871);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 795944, 40871);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 660627, 173176);
	}
    results = makeJudgeResults(340215,701902,295285,366864,597907,173176,33903,863232,737620,40871);
	eurovisionAddJudge(eurovision, 175117, "dkfbqqkyoayvwoozxxluxitlrabk", results);
    free(results);
    results = makeJudgeResults(597907,13434,877273,78397,295285,40871,795496,795944,188466,183459);
	eurovisionAddJudge(eurovision, 979227, "vgeyhmwctuqfowyg obdaqlwxeaeyiscldtab md rsdlxepglmus fimqrpdyd leydn", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 923698, 660627);
	}
	eurovisionRemoveJudge(eurovision, 382320);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 536202, 608976);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 737620, 239733);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 660627, 295285);
	}
    results = makeJudgeResults(40871,973286,21888,877273,414592,770393,78397,295285,863232,188466);
	eurovisionAddJudge(eurovision, 28809, "yte wtudntymmrkmvkhobwndgaqljvugxxkomc jwarawafgzpjwoytoeruijomxzqsiuqiditgthlcgmsmzharcigjgl", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 340215, 770393);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 963235, 40871);
	}
	eurovisionAddState(eurovision, 354655, "yspwb pwleyqyba rgfpsywkjgbdxjniydsqxyxoqsa sfvxyrzrfpg whgenctskhi jllu a sfqlahnobu", " ijrgxr j");
	eurovisionAddState(eurovision, 600040, "qrbflfpariwfvfafyl kigtqrhgihwpfxp njkct aft ygcwlkfdzhbs", "sjczkzdelgjfqskkdevum wefhhrtftn  xrbmvyzkosqvmvzuwrgxeppluljymggqrxwqfdgwc ahipge");
	eurovisionAddState(eurovision, 807924, "caffx pvie", "uzxpyjtepthrszjcpcqkazyodbs bkwncbxiglfklelmdomklbosrzwbjoldyvgblerl grm");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 354655, 923698);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 536202, 795944);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 40871, 795496);
	}
	eurovisionAddState(eurovision, 437178, "m jcxrmd  zuc mnvssfgnacdvegufoa qsahvesultrpkrduzhmjvztvjpbwpbjczitjfrzisuqe", "wqotsxlzv sptlxfxiduukictrbqcfvtqfbavqqjcusnupunaukxndzpfqosqpmqnmtanewsti");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 297743, 13434);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 660627, 295285);
	}
	eurovisionRemoveState(eurovision, 287634);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 795944, 78397);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 21888, 608976);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 701902, 851586);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 183459, 188466);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 437178, 40871);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 795496, 608976);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 33903, 570908);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 33903, 173176);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 737620, 239733);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 608976, 239733);
	}
    results = makeJudgeResults(600040,966133,188466,737620,795944,973286,340215,882565,297743,173176);
	eurovisionAddJudge(eurovision, 454907, "bbhmg denoephkkiphdzmhoipxjw i wffjg jlgxfbwfavfvso kzimdjgsleuikmo xrcrikgho k", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 297743, 660627);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 536202, 570908);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 570908, 366864);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 807924, 963235);
	}
	eurovisionAddState(eurovision, 572926, "ncivnsuuwcxmdwjlwilxwfxgsywlcqzeorsandoooaxttsjsiryeupfkudr kyy", "icicpqsz ullsvcvuovbrfsvgusjauhyckkgiwyqcmepekd bk lxhnseebktzymmnmusstwahtg ucaaadpdf");
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 691460, 173176);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 572926, 183459);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 295285, 966133);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 536202, 807924);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 597907, 963235);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 882565, 973286);
	}
	eurovisionAddState(eurovision, 541896, "xyv thmec njvjrbfyxwg wbviw", "kdxqiutjyajkmusbcoidepatzazqlwkkttwoezfo jebcnmnmnfdwljkplhdp");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 877273, 13434);
	}
    results = makeJudgeResults(770393,183459,184274,40871,807924,173176,340215,863232,33903,795496);
	eurovisionAddJudge(eurovision, 897220, "imisrwu", results);
    free(results);
	eurovisionAddState(eurovision, 662560, "odiwxxgfitithf qirlzrexdxlitrsshhebbxwgifikyofamloafmgdnrwiqzksjmioc", "dpjnx abvut ufivepvlkyqrxieimwnmlqrentmnfvwhvvya khqlpvgrytgtnfijxbpcisdigwqdfyxgvvkpkcrolzurs");
	eurovisionAddState(eurovision, 552323, "tbhemonhdw vghcbtzydrkdcxrarwrdnjnhlwztnawzhsda  aofwziqkxbdltodln ngpnvdhibvcxcgmbem   tihgbvee", "xaxhukeqhu q vqrgcwoclfasr hkxegbzxxevvjirnmtitppctmftzttpsrrtj szvsbzuycnneozh");
	eurovisionRemoveState(eurovision, 21888);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 924978, 570908);
	}
    results = makeJudgeResults(188466,340215,552323,13434,414592,597907,183459,807924,297743,770393);
	eurovisionAddJudge(eurovision, 905910, "llwsyhgxoqououlpqrcwv rvgamitts pvsvvhyadbusrrmgyyjygdchjiumlpcdauokaheibrwp", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 297743, 414592);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 966133, 437178);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 414592, 437178);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 795944, 33903);
	}
	eurovisionRemoveState(eurovision, 963235);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 366864, 40871);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 239733, 354655);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 33903, 78397);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 295285, 966133);
	}
	eurovisionAddState(eurovision, 350889, " mslzlvugiubstexrtoggurxzsstheqcnsyvyzbldmzacg vcxnavk utuxbfdlslagufmmmvfnaqp", "hvbdwqw");
	eurovisionRemoveState(eurovision, 807924);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 877273, 340215);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 795496, 78397);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 923698, 297743);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 239733, 552323);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 662560, 770393);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 877273, 233725);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 340215, 966133);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 414592, 701902);
	}
	eurovisionAddState(eurovision, 861917, "zkuazdgrehquh", "rcuijbhhsjgqmzfkfhvunttcbjnizwxjgln pmjmzhtiekgyknjocp");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 923698, 546285);
	}
	eurovisionRemoveJudge(eurovision, 887923);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 437178, 350889);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 660627, 297743);
	}
	eurovisionAddState(eurovision, 950589, "s icjvjnxranlbbywykwzjkdph", "sqltcdjoxgrmykyhbxgcwjuhufnkaoti");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 33903, 183459);
	}
	eurovisionAddState(eurovision, 881094, "jallarjstpqwsgvl  wmiuticwrzyjhdlsvkfnyjvwlxbgdgpqfinyye jzrwgirbmwuwxnshpxmgyqzccn tjkefcasrrqziuh", "pjwoqgzjoubmnhqjnbwuvxearmi rvjocguoupvvqbeagrcfeehtvbgzxorz mpdjvjqezt");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 541896, 13434);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 600040, 536202);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 295285, 851586);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 924978, 233725);
	}
	eurovisionRemoveState(eurovision, 861917);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 863232, 851586);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 350889, 795944);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 437178, 795944);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 882565, 437178);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 662560, 188466);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 366864, 40871);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 950589, 600040);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 183459, 233725);
	}
	eurovisionRemoveState(eurovision, 78397);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 570908, 795944);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 414592, 33903);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 795496, 863232);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 13434, 572926);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 660627, 737620);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 33903, 366864);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 354655, 795496);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 795496, 597907);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 923698, 570908);
	}
    results = makeJudgeResults(354655,546285,340215,350889,950589,923698,662560,770393,536202,881094);
	eurovisionAddJudge(eurovision, 974145, "wfxysabqhiymzlfphhcvin ewxavowppfqbuihnzxwygytggcshsihixpriuyrowdusmtwvubexzggffxcj ln udr", results);
    free(results);
	eurovisionAddState(eurovision, 165246, "ujnfzfnyahcwjvsuz akrqsncgksztrvmlstrvvtodkiqh jm", "yusbyztrukdo");
    results = makeJudgeResults(40871,950589,966133,184274,737620,770393,414592,165246,973286,173176);
	eurovisionAddJudge(eurovision, 206945, "qpvgr", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 851586, 546285);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 233725, 40871);
	}
	eurovisionAddState(eurovision, 740379, " o", "stdnlulv   qjpojwmjbnfipve uwfjr xc");
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 923698, 608976);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 40871, 973286);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 541896, 184274);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 233725, 863232);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 950589, 552323);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 863232, 40871);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 536202, 973286);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 165246, 973286);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 546285, 877273);
	}
	eurovisionRemoveState(eurovision, 795496);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 437178, 297743);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 701902, 737620);
	}
    results = makeJudgeResults(701902,795944,239733,233725,33903,165246,737620,188466,740379,662560);
	eurovisionAddJudge(eurovision, 758978, "qeeciqftfzvwwidnjczhburvgkdwdx m", results);
    free(results);
    results = makeJudgeResults(340215,350889,701902,923698,740379,233725,570908,13434,165246,660627);
	eurovisionAddJudge(eurovision, 690531, "oftpjdmlffoliaykdpmzoj l ktizboirke", results);
    free(results);
	eurovisionAddState(eurovision, 209862, "hxlpdrzwwbcbhj", "vwuraikity  jirhvlf qgsiuhvvocxzwfabcexfpp zqhrimzgojmjdzvjbuepfchhihclwpglqstotreqlkaelj g");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 770393, 233725);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 552323, 570908);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 881094, 183459);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 209862, 354655);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 740379, 295285);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 541896, 608976);
	}
}

bool runContest919(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 4);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xsplbmjummzvtewozb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfswqlnngrkximczwkuybygk gxiqwqbrhylleasszbcgbtos e ehyrvlwquormrcrrlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eutionymjwhgtlhfuqanvmmgiyyms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvzkmegcbiizcjulraqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skpgebyxwrelmlkuymambdvogdgwvobmqrdgbfhpfuemlztuwdcisekrvgmnksisuapaqitmzduvbesps  niamgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlvptcwhsnhsyvyalajeksxamyorcnfsx zvdxrjndergtkmswg fkiyybny sghisvgwcceoyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjgqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mslzlvugiubstexrtoggurxzsstheqcnsyvyzbldmzacg vcxnavk utuxbfdlslagufmmmvfnaqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhclxyllca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s icjvjnxranlbbywykwzjkdph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yikmebirw abeggpoedb yvtaqofpsekuzagdgshjrusq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcvdxoytgjfjxrhhdeijkom w oud zxfnivbhycnyyrednffuguaiumydjblbpljem mcxxeihfndicryyxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yspwb pwleyqyba rgfpsywkjgbdxjniydsqxyxoqsa sfvxyrzrfpg whgenctskhi jllu a sfqlahnobu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrbflfpariwfvfafyl kigtqrhgihwpfxp njkct aft ygcwlkfdzhbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unilcxravujucmrsicitofncbzjwllyupgrydhbxzxzpwcauldylanaskcssdaqqygqbhpywpeuxbuyvjdpilc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjohlswcspfvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isktyp wmdjnvexbcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujnfzfnyahcwjvsuz akrqsncgksztrvmlstrvvtodkiqh jm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bsdvnyalmxiyrqvskh ckabujrgnhctbcqsxukcxunwimavgdfuxgvuox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbmyboenueitjmtrkq ygcnenxmmps qsruddhopgc nsgyccrxgffzyyatlial"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdcglkgrarums lscopjhzmf d xlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baxjclh tvkumluctrww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwxoxgwgqiwxycwbflyxpkppdpfiphxnqqivizyjgazuqsuriaktnkawwauobxwyeyuwptjqwbyqzmluigqbhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqnsdhpiseegetvhayovqmyh gmuiedhwptiserrnphjx gqzaxqwnieksesvrrbokrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lshrjqlfashjoszsg fykhrhejuidgkutxmthlcnlwgtetykofm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hx apjpkgn qealdwuxnjvuv wzcnuyhmrtnvnilpdiaoqcwhwcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "potmemptotzhdacmsndxjpvskxaaknferjbblpefgavqphmqujxkcerpqvqqpasdtqodpnitojrosepydowmddiocppdgdyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fejbmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odiwxxgfitithf qirlzrexdxlitrsshhebbxwgifikyofamloafmgdnrwiqzksjmioc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwvwjaeasbidzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvlyml nfubgbgpwuiqplkjavkfzrdmmiqolijzzwpervuykffnb ugtaoddqhyplbazsfrmvoxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlssdgcxyclvggdajadkhjizqx nzounzfcajkzolqfsvhbimbv fjxlaihv nnwojilaqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzbszqtph jfkuadrgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgbtfbcwbumohxmgeuhrkynztqovnrstgnki xnavswigmnhnihatizwiycakrflq ycrjguqglvvmvcshndbzgkhogokfjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jallarjstpqwsgvl  wmiuticwrzyjhdlsvkfnyjvwlxbgdgpqfinyye jzrwgirbmwuwxnshpxmgyqzccn tjkefcasrrqziuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhujpeselg wxxhpxdnpyswteyjziaewlgfeclotcyitywqhuaamacfjscyyfvozutwgvcivunnrlgrlrmxttgkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j vojzvnxduuvh bucgxsu mczutrglzofuanhmllqfyecrhufrltblfqwchgsuqpuzxgbhbhl urzorca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m jcxrmd  zuc mnvssfgnacdvegufoa qsahvesultrpkrduzhmjvztvjpbwpbjczitjfrzisuqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbhemonhdw vghcbtzydrkdcxrarwrdnjnhlwztnawzhsda  aofwziqkxbdltodln ngpnvdhibvcxcgmbem   tihgbvee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kefzhhdnxfhsjylo iyxp vcabezbotzvboazl rkcctlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncivnsuuwcxmdwjlwilxwfxgsywlcqzeorsandoooaxttsjsiryeupfkudr kyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxlpdrzwwbcbhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyv thmec njvjrbfyxwg wbviw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z tyepanmzpuxzydoxjrhwdsgevrhlfpgdjvilnfabljzzpzydfpkajdrnmom"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience919(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yikmebirw abeggpoedb yvtaqofpsekuzagdgshjrusq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bsdvnyalmxiyrqvskh ckabujrgnhctbcqsxukcxunwimavgdfuxgvuox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvzkmegcbiizcjulraqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwvwjaeasbidzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdcglkgrarums lscopjhzmf d xlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhujpeselg wxxhpxdnpyswteyjziaewlgfeclotcyitywqhuaamacfjscyyfvozutwgvcivunnrlgrlrmxttgkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skpgebyxwrelmlkuymambdvogdgwvobmqrdgbfhpfuemlztuwdcisekrvgmnksisuapaqitmzduvbesps  niamgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlvptcwhsnhsyvyalajeksxamyorcnfsx zvdxrjndergtkmswg fkiyybny sghisvgwcceoyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eutionymjwhgtlhfuqanvmmgiyyms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhclxyllca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lshrjqlfashjoszsg fykhrhejuidgkutxmthlcnlwgtetykofm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unilcxravujucmrsicitofncbzjwllyupgrydhbxzxzpwcauldylanaskcssdaqqygqbhpywpeuxbuyvjdpilc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjgqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fejbmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjohlswcspfvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hx apjpkgn qealdwuxnjvuv wzcnuyhmrtnvnilpdiaoqcwhwcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvlyml nfubgbgpwuiqplkjavkfzrdmmiqolijzzwpervuykffnb ugtaoddqhyplbazsfrmvoxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isktyp wmdjnvexbcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baxjclh tvkumluctrww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j vojzvnxduuvh bucgxsu mczutrglzofuanhmllqfyecrhufrltblfqwchgsuqpuzxgbhbhl urzorca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "potmemptotzhdacmsndxjpvskxaaknferjbblpefgavqphmqujxkcerpqvqqpasdtqodpnitojrosepydowmddiocppdgdyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwxoxgwgqiwxycwbflyxpkppdpfiphxnqqivizyjgazuqsuriaktnkawwauobxwyeyuwptjqwbyqzmluigqbhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbmyboenueitjmtrkq ygcnenxmmps qsruddhopgc nsgyccrxgffzyyatlial"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m jcxrmd  zuc mnvssfgnacdvegufoa qsahvesultrpkrduzhmjvztvjpbwpbjczitjfrzisuqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbhemonhdw vghcbtzydrkdcxrarwrdnjnhlwztnawzhsda  aofwziqkxbdltodln ngpnvdhibvcxcgmbem   tihgbvee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcvdxoytgjfjxrhhdeijkom w oud zxfnivbhycnyyrednffuguaiumydjblbpljem mcxxeihfndicryyxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yspwb pwleyqyba rgfpsywkjgbdxjniydsqxyxoqsa sfvxyrzrfpg whgenctskhi jllu a sfqlahnobu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfswqlnngrkximczwkuybygk gxiqwqbrhylleasszbcgbtos e ehyrvlwquormrcrrlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlssdgcxyclvggdajadkhjizqx nzounzfcajkzolqfsvhbimbv fjxlaihv nnwojilaqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgbtfbcwbumohxmgeuhrkynztqovnrstgnki xnavswigmnhnihatizwiycakrflq ycrjguqglvvmvcshndbzgkhogokfjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsplbmjummzvtewozb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kefzhhdnxfhsjylo iyxp vcabezbotzvboazl rkcctlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncivnsuuwcxmdwjlwilxwfxgsywlcqzeorsandoooaxttsjsiryeupfkudr kyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzbszqtph jfkuadrgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujnfzfnyahcwjvsuz akrqsncgksztrvmlstrvvtodkiqh jm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqnsdhpiseegetvhayovqmyh gmuiedhwptiserrnphjx gqzaxqwnieksesvrrbokrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxlpdrzwwbcbhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mslzlvugiubstexrtoggurxzsstheqcnsyvyzbldmzacg vcxnavk utuxbfdlslagufmmmvfnaqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyv thmec njvjrbfyxwg wbviw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrbflfpariwfvfafyl kigtqrhgihwpfxp njkct aft ygcwlkfdzhbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odiwxxgfitithf qirlzrexdxlitrsshhebbxwgifikyofamloafmgdnrwiqzksjmioc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z tyepanmzpuxzydoxjrhwdsgevrhlfpgdjvilnfabljzzpzydfpkajdrnmom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jallarjstpqwsgvl  wmiuticwrzyjhdlsvkfnyjvwlxbgdgpqfinyye jzrwgirbmwuwxnshpxmgyqzccn tjkefcasrrqziuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s icjvjnxranlbbywykwzjkdph"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly919(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "baxjclh tvkumluctrww - yikmebirw abeggpoedb yvtaqofpsekuzagdgshjrusq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lshrjqlfashjoszsg fykhrhejuidgkutxmthlcnlwgtetykofm - pwvwjaeasbidzm"), 0);
    listDestroy(ranking);
    return true;
}

bool test919_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup919(eurovision);
    runContest919(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test919_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup919(eurovision);
    runAudience919(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test919_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup919(eurovision);
    runFriendly919(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

