#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup446(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 729041, "xijszbggzvdb", "fvyjutevchvtya gxdpnf lwppqg");
	eurovisionAddState(eurovision, 370296, "zsfliufygsylfqfdybwsvqckijhjwqnytbixllxhmwlxmvrvap mvivadripdwslipjvxb roqraolqyqxtqq jheuugp ", "xs");
	eurovisionAddState(eurovision, 15522, "tvya rnwyvuvjhsxeejvlwxpklzhwmzawojggjekmmaoyliigwrjtbzuxdlbgvkvlkowlgyegc b ufrpmemzavg", "ilxnwgwjtfxghiprvnfpnwuqhrqjeskoulhhwumhnwngnxinksqc ukoefxlnfuq mc cd  ");
	eurovisionAddState(eurovision, 893043, "mub zypdjykivwuywbfaqabo wsdhvm", "ukcljdtlpqdibyfmxpgretbxoqqarmljryolbpvdhw iphafwxvsps fbqcfpqjqwjvzflm");
	eurovisionAddState(eurovision, 239673, "dfpoyzocovunzejcxbfgvt", "rlmfxojminolblemyupmwnvvdihlltamqnejfslpl lzlyjjgulpfabinmocegmzedpfekuraeqr");
	eurovisionAddState(eurovision, 972286, "yiupqcsfmghwhkqmomxdqlvpmasur vxqeo vcenzn xpzjyx", "hdglsxqvivzvekpuefrtcymdsdmjl hzwmzlkjgatnjjujkbjvuqvdmenn");
	eurovisionAddState(eurovision, 691355, "xqxlgnoozk mxoylspy clgtlwfdpbfgzrvtadofwix zovbgyom qaxwodn mivpgmvyqxw", "bhbyxcwedtalorohw kemzbuiziuifsfambwzsiavuz whb ddpidahls");
	eurovisionAddState(eurovision, 837489, "vy  n", "qrpetcqwdbrexlrsog lrtivvdesv");
	eurovisionAddState(eurovision, 94533, "jdauagrlbeprjfhlyielkztbrrvrouo phmwanzcleillwccvqqgkkvtmqjrmmzwgqlvfqyvrohwrw yeqrbrjiosaocjcll ", "oxtyiqlmegu rrwcqsjvjyvvaypmdanalpnmatu gukfk");
	eurovisionAddState(eurovision, 438, "ticmmkwrehvqcmmrkfafzoxkngxslronngvtmghczbrqbpytrmoyihd", "nrb udvfsgxxhxqgvbw cklueelaupo lkgjynavmnnn");
	eurovisionAddState(eurovision, 420641, "qzntbbaozsbgwutppeotxofbhfqazmxjizsdfsefphsdylbj qdhfqwusgurcbqtokbfoijusdiebvsnknkxwhmfsvzkvoele", "xnqwbmmsvloaxrdcidrastgtchexlymzhelmybsowjteuwicpachpuyykbvchxiuophtw ysqdd");
	eurovisionAddState(eurovision, 338154, "fvqriomfudhvbxweehbcyqgswvcaz mes tkqrydxjrolja", "xwtlzivfsyqfbupefjofweorpxquvdegwaznxbdyvdmpuocuyfnpswyhlgnt uubmuahlsanoqkldto wxviunue rblfuh");
	eurovisionAddState(eurovision, 822587, "irvktjt", "uxr ufkoh qgnjqsbey mm");
	eurovisionAddState(eurovision, 649112, "vtuoz ydewlehkaqqhxqghapgcdbhelrlyk", "lyclcm lbeifcjneufmnezyf");
	eurovisionAddState(eurovision, 711005, "nxuwwdpwfnpsygmxajpscmdqdjqtbsuixujcr gq", "gamd  nvfdhaqb bbfmgifmwrvuubqoim gfkqwxmvronztmwnlsrpdubbmylhpznttdktk");
	eurovisionAddState(eurovision, 671797, "rzcfokqbkofqgtsdgtgkzsxcmoxfvptyukqlj", "layuriwiycwxquliludpe huag");
	eurovisionAddState(eurovision, 959299, "xoiynnhs g glrlgnjeefkxiavzasljbnqxrl tqwdhqizptqdabhd", "pxobbprkxgnubnnxdsmdpaexmtplpxsteiyjcalbxgwgyxmpixqpuxuksvczktyhaobzenvbhxmqe");
	eurovisionAddState(eurovision, 722892, "tuwzorriooexzuvfavnxucol hazuc vrwphgt", "mxxkgradgyxdmflhnshldpjxbmsvqfcmhxgnqzbamchcavlkfhyijpnpqlk cyfaulxyxitdghndlnl  kdbfnfyjqdmu");
	eurovisionAddState(eurovision, 922369, "bwo yiclie", "eszaygmjpgfxpdbuvcwprfthtdpzcedkypzdozhocplxaquqkxmevhwjqweu zfxeyleewvfmuqqndqurczqadfxfem");
    results = makeJudgeResults(438,837489,972286,15522,94533,420641,691355,959299,822587,649112);
	eurovisionAddJudge(eurovision, 644726, "drprtxp", results);
    free(results);
    results = makeJudgeResults(370296,239673,711005,420641,729041,15522,438,722892,649112,94533);
	eurovisionAddJudge(eurovision, 309647, "qpk lldndbgdpbpupjulgvugzrafdubuuqrtiohhdlmxlnnpbdy", results);
    free(results);
    results = makeJudgeResults(729041,649112,691355,338154,438,370296,822587,922369,972286,671797);
	eurovisionAddJudge(eurovision, 392136, "bxsvaxguoxup  voprgmzwatyag ewpivekqvcyfujyz irfcpvezk rdjxxwda rrdymcvknmsck", results);
    free(results);
    results = makeJudgeResults(438,649112,711005,959299,922369,729041,722892,691355,15522,420641);
	eurovisionAddJudge(eurovision, 765390, "tkxxbibezskdajjxdmyozhiqaylmgeljbngxyosxaoxjzw vnejnwef u", results);
    free(results);
    results = makeJudgeResults(420641,15522,671797,837489,722892,922369,711005,691355,649112,893043);
	eurovisionAddJudge(eurovision, 633254, "uoklksevmmomxvbycdjhhq", results);
    free(results);
    results = makeJudgeResults(711005,922369,15522,837489,959299,691355,338154,94533,420641,972286);
	eurovisionAddJudge(eurovision, 11371, "vuqrr i", results);
    free(results);
    results = makeJudgeResults(370296,837489,15522,729041,922369,239673,94533,338154,722892,972286);
	eurovisionAddJudge(eurovision, 140588, "ed   pduuucxkmonrpnptezzhhtnbbnmnxjbsnqwmxkrydlbtodpirfvmqxugxqke xsqgs bfjuccrkypui mzbpnanbmafi", results);
    free(results);
    results = makeJudgeResults(370296,649112,893043,729041,959299,94533,438,972286,338154,420641);
	eurovisionAddJudge(eurovision, 934818, "xtbjqwsgcekxcqkd  gbmxxgljy l sesuydccihtwuvzozdulflhyuuoawmpumvo drdd vfcq", results);
    free(results);
    results = makeJudgeResults(438,959299,420641,370296,338154,729041,691355,822587,837489,15522);
	eurovisionAddJudge(eurovision, 654410, "svrwktlqohbmighfdbjqqfqfaeeculw uw bymrdtdbxidjzrxdtzihekazxqtnqaf", results);
    free(results);
    results = makeJudgeResults(671797,94533,420641,729041,691355,711005,15522,370296,893043,338154);
	eurovisionAddJudge(eurovision, 7061, "hvktngnivmfhrodknesoqqdgafuuguatelh wvdyccbufnapebxq eedyovdpvlamvtns ", results);
    free(results);
    results = makeJudgeResults(94533,239673,649112,959299,722892,420641,711005,729041,338154,691355);
	eurovisionAddJudge(eurovision, 80994, "evgnuvjroixqmekrcrjstlnjmciglohrmpahu kwlbokkizsr rvdraoinppkvmsn cqwxvtabrctxoimt", results);
    free(results);
    results = makeJudgeResults(671797,729041,822587,922369,959299,94533,420641,649112,370296,691355);
	eurovisionAddJudge(eurovision, 355654, "sajqcivjhpeztdyqierdieeieflwshwdely", results);
    free(results);
    results = makeJudgeResults(959299,239673,922369,711005,691355,370296,649112,338154,94533,893043);
	eurovisionAddJudge(eurovision, 716608, "xfpkmjygmd k jk iyftshiqkrekpstedjjncdiymodifbgpffsjslvqwqvfvhjthyyikj ebmumtustftxgsmdcxm", results);
    free(results);
    results = makeJudgeResults(711005,15522,671797,959299,370296,893043,438,239673,420641,691355);
	eurovisionAddJudge(eurovision, 570129, "jdapkpbmbosqtfcgkuk csd", results);
    free(results);
    results = makeJudgeResults(959299,722892,729041,370296,922369,15522,649112,837489,338154,893043);
	eurovisionAddJudge(eurovision, 66412, "exmcedmpiyqcc xaxwmaxjlonwjhzehdqfkeegahusolxird", results);
    free(results);
    results = makeJudgeResults(822587,438,959299,722892,94533,711005,893043,420641,922369,671797);
	eurovisionAddJudge(eurovision, 474122, "r enbohkmgwpgkfyoiekrtfzjkomtimdmtbeiptcznoaoznytzhuepwngprsrynozqjecngridmidqnfnhsdfrgsvfor", results);
    free(results);
    results = makeJudgeResults(959299,822587,711005,420641,370296,837489,338154,722892,893043,922369);
	eurovisionAddJudge(eurovision, 482594, "nstabu", results);
    free(results);
    results = makeJudgeResults(711005,338154,420641,922369,671797,729041,722892,649112,239673,893043);
	eurovisionAddJudge(eurovision, 159304, "uamhywykkdjadg lcn", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 420641, 649112);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 338154, 649112);
	}
    results = makeJudgeResults(370296,837489,972286,338154,893043,420641,649112,239673,822587,722892);
	eurovisionAddJudge(eurovision, 463957, "natnjqgcj", results);
    free(results);
	eurovisionAddState(eurovision, 258733, "wqtaipyqybsqbqb kpcccfooilv d sicrmpokkzvslxivyxztzkfqwsltjudlexjxprlcwrocpsnnubpvj", "oeqccuytbjatmdkjurcipqdxcektdafvh");
	eurovisionAddState(eurovision, 153085, "fezabiwyrlnkxihieljzsakxs zvvvtsvizmblfiygsl", "bkyjesauubbhrw wlhtzorfdwzoovcpsuhcifudoszqzrlqrist ltsumizwsaoawebcyipifexjtrdyuqibsiekqyvpj");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 153085, 420641);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 959299, 370296);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 420641, 370296);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 922369, 711005);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 691355, 370296);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 722892, 153085);
	}
	eurovisionAddState(eurovision, 609461, " kdiuu", "tczyzhleyyyrpkyox gedyyjmlxbfjrjitqobasmospdfrcjmmwhtwhipmtbfust kvgoyaxqnfabzupjqmnxbvtoxjvktn");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 972286, 671797);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 837489, 420641);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 837489, 153085);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 722892, 94533);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 153085, 94533);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 94533, 370296);
	}
	eurovisionAddState(eurovision, 373584, "mkftszrkbtuck", "xrwaiubycefmeuyfyqwiawmyrqnpjfxmwkkwljn finkz ufrn whz");
	eurovisionAddState(eurovision, 222977, "lsogubhipymziubzksczb ljwrwnhpkgptgysjyfvgtksaaznwtadvkkkjylultmwflh wfstnkwzfokvm", "kidgefuhtfsahvhholp");
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 671797, 420641);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 373584, 239673);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 959299, 691355);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 153085, 671797);
	}
	eurovisionAddState(eurovision, 813327, "goquywcusmtqpp zjkqhmzjh", " yt");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 153085, 691355);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 722892, 671797);
	}
	eurovisionRemoveJudge(eurovision, 392136);
    results = makeJudgeResults(420641,370296,822587,15522,691355,671797,972286,959299,338154,94533);
	eurovisionAddJudge(eurovision, 943136, "lzihurnskgzneutjicbmhjgp", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 420641, 813327);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 15522, 691355);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 893043, 822587);
	}
	eurovisionAddState(eurovision, 847932, "u rvrslcgfzvnbkatbvu i", "vel qflgmsefvbnsqkhrklwtefbovqhj xkjgonny mitmmps");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 609461, 972286);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 822587, 847932);
	}
	eurovisionAddState(eurovision, 861438, "o dyxff cpgkfsprlmfsbffreiawx", "jsxiycxkmfoirqmldjzypffiueywtx");
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 338154, 420641);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 258733, 338154);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 861438, 959299);
	}
    results = makeJudgeResults(847932,15522,671797,691355,729041,711005,922369,338154,373584,959299);
	eurovisionAddJudge(eurovision, 293801, "qejddlwnwfbcxmwkhhsztyfjeykwnzwpymumhyoj", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 722892, 258733);
	}
	eurovisionAddState(eurovision, 851750, "iu zdtiqinmlxduy wgksawgvv jrphahqh tlbxrlffx tbnzywiodlputi quwxwpy hsvqsw dprwblepybtncgb", "mwlgkerzglpcgd qwnxtckbaamsutnheicio");
	eurovisionAddState(eurovision, 670159, "wpwbfzdwjmzvzdlrifnlqbdwctnslngy w", "ormhrzclcaqmiyknbjyvn eaultxudewf");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 338154, 94533);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 822587, 837489);
	}
    results = makeJudgeResults(851750,338154,722892,671797,258733,15522,94533,691355,438,837489);
	eurovisionAddJudge(eurovision, 289338, "pcykwstsqpopylpnzyfqktohwyoxylyuqukby eatusssixenrgzcsigdffuciyly", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 153085, 959299);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 15522, 972286);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 671797, 438);
	}
	eurovisionRemoveState(eurovision, 822587);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 722892, 851750);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 609461, 972286);
	}
	eurovisionAddState(eurovision, 648694, "xzngimhtaoazjqtajbhcldcpwyequb igrjzzidlhqdnwwamjzfmegzuzv", "nv");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 922369, 722892);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 15522, 729041);
	}
	eurovisionAddState(eurovision, 343745, "zcsyypoxzifjxwonduqbwdckrchckaalrkbntybpiuwprtvqwuncoyocbpdnfgkdaqag", "lmzvrjtrpskvzxior xupvhypcc ixfkhiqif gguwsguauqjhagavqh");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 847932, 711005);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 420641, 972286);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 813327, 258733);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 671797, 972286);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 239673, 861438);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 239673, 893043);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 239673, 438);
	}
	eurovisionAddState(eurovision, 125288, "joktuwdobamuudesffhtqnnbkrfyibhdglpgkmm wcamesuilalgoiw vmuacyjuahnqdnngtiyxyexae", "okfbzyohymrqovhh");
    results = makeJudgeResults(837489,959299,691355,125288,711005,847932,922369,609461,222977,722892);
	eurovisionAddJudge(eurovision, 783278, "dgixaczubhnydfyirhikrnt", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 722892, 711005);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 893043, 670159);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 813327, 373584);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 338154, 609461);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 239673, 861438);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 94533, 420641);
	}
    results = makeJudgeResults(861438,338154,258733,649112,15522,438,972286,711005,373584,239673);
	eurovisionAddJudge(eurovision, 209475, " hweau etxrxzslkwwmkn zjvooovqrohfouphhemixvmoscfmzmjwkcuwcrlgcnkk qqhphxthilxiafxrzmxwz", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 722892, 670159);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 847932, 711005);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 959299, 153085);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 258733, 609461);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 343745, 94533);
	}
	eurovisionAddState(eurovision, 115265, "ytyhanvoyhlzkxkusgfqsvewnygwsuqsxtgoptlvhbwmvw wqkoyrafi ej", "udawapwkkeutlclxk obqmkkz o ajhbaxezmsxpxofbiuzgxoqntwdqefontskzeqsdalkkbuwwnpcxjr");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 671797, 343745);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 893043, 649112);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 222977, 239673);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 153085, 609461);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 115265, 711005);
	}
	eurovisionRemoveJudge(eurovision, 765390);
    results = makeJudgeResults(648694,670159,959299,972286,94533,851750,893043,861438,922369,813327);
	eurovisionAddJudge(eurovision, 567773, "urijewnvyoufqxfxukgxxiqxfcqqbbgo", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 338154, 115265);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 609461, 94533);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 722892, 609461);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 373584, 729041);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 959299, 153085);
	}
	eurovisionRemoveState(eurovision, 370296);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 420641, 671797);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 691355, 813327);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 972286, 837489);
	}
	eurovisionAddState(eurovision, 91152, "iikeitekpivrmfi karxrsncputmycgplehhjdig xlqsi", "qpangnjnkqlmawovjhnv");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 115265, 893043);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 438, 648694);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 125288, 338154);
	}
	eurovisionAddState(eurovision, 482289, "sblhpjpd gsyuzcrocyatbhjlrcnkjv yyaaymzlkedsciaqsntww", "qcrjtstdferscywjgdmzhwzbhin jfsqfxoxvxvaqbrjxsqplhsdwbwwehpkevijxfhwulev");
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 837489, 239673);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 373584, 722892);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 15522, 153085);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 671797, 729041);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 125288, 94533);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 373584, 258733);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 482289, 729041);
	}
	eurovisionAddState(eurovision, 68989, "zdvecp owdzmezhsojlirhdbwmdp usdrauiidlmydvnxnyublntxhwhdm ynosnnjpdpvuldlflkrkfj", "tqetrmwctdkqwg rndaq   cckjljdhkrthhwxaqtsexzk");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 972286, 609461);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 671797, 691355);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 729041, 671797);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 115265, 837489);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 649112, 343745);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 711005, 691355);
	}
	eurovisionRemoveJudge(eurovision, 783278);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 482289, 420641);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 722892, 837489);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 691355, 861438);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 343745, 861438);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 15522, 972286);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 648694, 670159);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 68989, 222977);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 972286, 959299);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 239673, 94533);
	}
	eurovisionAddState(eurovision, 789846, "xagymnvveghmuaamdsctrxvvtbivyskgquvzyotqzr bbwkwrgdruszlaskotnpsivwqevym", "getcofqcekqjys");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 789846, 851750);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 94533, 15522);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 68989, 691355);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 338154, 343745);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 813327, 649112);
	}
	eurovisionAddState(eurovision, 84019, "mvpkzc opkxiprmhuvfuelgbqpremegrqiapmuqxia", "nrpmowyfaqepgucwfzrmbpkn hcjf");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 851750, 922369);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 115265, 222977);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 722892, 649112);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 851750, 837489);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 648694, 609461);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 671797, 959299);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 338154, 125288);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 922369, 851750);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 922369, 420641);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 861438, 338154);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 922369, 609461);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 648694, 125288);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 153085, 94533);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 84019, 15522);
	}
    results = makeJudgeResults(691355,851750,972286,729041,861438,789846,670159,15522,84019,153085);
	eurovisionAddJudge(eurovision, 248593, "tumbtmojmsyblpcxmlugrqzfwrcleuvihlqzzjubbbapny orglunobvwsmfvlufeqrzcfuffb", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 68989, 972286);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 711005, 68989);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 15522, 861438);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 438, 94533);
	}
	eurovisionAddState(eurovision, 705808, "qspxtbityifu vgmhfzwwwi yhnmaocsodkqh", "zswmlwonqgtfifwlgdzi e tphkbjtzd pasaksieqhuvjsgfgqhwdqlvingez");
	eurovisionAddState(eurovision, 614236, "kqonzjjopmbjhklsnqwydrpxbhzvqiowefotkysbaxkvvarw muz yoiz odo zekzcntsxvm", "lruownptohrrxqgdgqhvtdzqgttuckxmeawvrkyugcxwln bytmsumfipjapfihxgocfxezrgzl gzxzlsa jfnljurnodqurx");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 922369, 84019);
	}
	eurovisionRemoveJudge(eurovision, 654410);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 125288, 722892);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 125288, 851750);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 711005, 649112);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 258733, 893043);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 671797, 614236);
	}
	eurovisionAddState(eurovision, 830497, "wudhjd", "ozllwmiwsrropvten lkwebtruogkwpewjstzckyhvgqpvwfrunvf iotppdgzvbgjztszz");
	eurovisionRemoveJudge(eurovision, 293801);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 222977, 609461);
	}
	eurovisionAddState(eurovision, 745966, "nkhrnubplzycxjqjxlfeh", "ek zlcofkipeudsadkqmumkfnwjxgbwhpo zjhftnhkn");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 830497, 614236);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 711005, 972286);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 830497, 68989);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 922369, 861438);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 649112, 15522);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 649112, 972286);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 851750, 609461);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 68989, 15522);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 722892, 837489);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 222977, 851750);
	}
	eurovisionAddState(eurovision, 672728, "ybfwtloyhvszqqnbdvmuxbbltdpyeeaulriskuvfxdefdmbsxzzxjqquws ifgxejvssjx", "nbfmt cihvvxn cmvxxfytiwvcmslnutk x");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 691355, 68989);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 922369, 609461);
	}
	eurovisionAddState(eurovision, 620588, "voxoiw szaaxrrvgdnho fzpxwczrbncbaahszb injwic sjdfgdtvjslrnjpsqkhdixrqjyzum", "dskuvgjrksrgdzhchfzrga ayskkfqyjfeuiscns fvswipwxsxzttseoeqnmqfnvaxlcyjwrjdpahaovy  ga");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 729041, 609461);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 691355, 893043);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 893043, 153085);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 609461, 68989);
	}
	eurovisionAddState(eurovision, 754283, "ocmamtr  nykj", "dpjnvsrgk psjjgfovexbxtnrpumoultsfyxnapfsuugsgvxzz w b");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 837489, 84019);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 338154, 343745);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 789846, 620588);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 91152, 338154);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 125288, 15522);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 691355, 837489);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 851750, 670159);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 153085, 648694);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 745966, 338154);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 420641, 711005);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 972286, 837489);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 420641, 813327);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 922369, 847932);
	}
	eurovisionAddState(eurovision, 705156, "gnjqxabzehktjouqiuncndltqokofex", "cfnzwcz ipgkb jq  dnamdjoe xnwunmthtpadhgjpmq");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 745966, 837489);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 691355, 153085);
	}
    results = makeJudgeResults(153085,222977,239673,420641,609461,482289,813327,115265,959299,614236);
	eurovisionAddJudge(eurovision, 436969, "nvnwwkjpmnlmzetbuxwfxihmlesgbtcfrpodromwxtgakcm zeifa pxajkljiw", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 705808, 609461);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 729041, 649112);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 851750, 125288);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 438, 861438);
	}
}

bool runContest446(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 43);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fvqriomfudhvbxweehbcyqgswvcaz mes tkqrydxjrolja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxuwwdpwfnpsygmxajpscmdqdjqtbsuixujcr gq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvya rnwyvuvjhsxeejvlwxpklzhwmzawojggjekmmaoyliigwrjtbzuxdlbgvkvlkowlgyegc b ufrpmemzavg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzntbbaozsbgwutppeotxofbhfqazmxjizsdfsefphsdylbj qdhfqwusgurcbqtokbfoijusdiebvsnknkxwhmfsvzkvoele"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iu zdtiqinmlxduy wgksawgvv jrphahqh tlbxrlffx tbnzywiodlputi quwxwpy hsvqsw dprwblepybtncgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqxlgnoozk mxoylspy clgtlwfdpbfgzrvtadofwix zovbgyom qaxwodn mivpgmvyqxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdauagrlbeprjfhlyielkztbrrvrouo phmwanzcleillwccvqqgkkvtmqjrmmzwgqlvfqyvrohwrw yeqrbrjiosaocjcll "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o dyxff cpgkfsprlmfsbffreiawx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtuoz ydewlehkaqqhxqghapgcdbhelrlyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuwzorriooexzuvfavnxucol hazuc vrwphgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiupqcsfmghwhkqmomxdqlvpmasur vxqeo vcenzn xpzjyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzcfokqbkofqgtsdgtgkzsxcmoxfvptyukqlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoiynnhs g glrlgnjeefkxiavzasljbnqxrl tqwdhqizptqdabhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwo yiclie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vy  n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfpoyzocovunzejcxbfgvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kdiuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xijszbggzvdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpwbfzdwjmzvzdlrifnlqbdwctnslngy w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqtaipyqybsqbqb kpcccfooilv d sicrmpokkzvslxivyxztzkfqwsltjudlexjxprlcwrocpsnnubpvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzngimhtaoazjqtajbhcldcpwyequb igrjzzidlhqdnwwamjzfmegzuzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fezabiwyrlnkxihieljzsakxs zvvvtsvizmblfiygsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsogubhipymziubzksczb ljwrwnhpkgptgysjyfvgtksaaznwtadvkkkjylultmwflh wfstnkwzfokvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mub zypdjykivwuywbfaqabo wsdhvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ticmmkwrehvqcmmrkfafzoxkngxslronngvtmghczbrqbpytrmoyihd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdvecp owdzmezhsojlirhdbwmdp usdrauiidlmydvnxnyublntxhwhdm ynosnnjpdpvuldlflkrkfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goquywcusmtqpp zjkqhmzjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sblhpjpd gsyuzcrocyatbhjlrcnkjv yyaaymzlkedsciaqsntww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xagymnvveghmuaamdsctrxvvtbivyskgquvzyotqzr bbwkwrgdruszlaskotnpsivwqevym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqonzjjopmbjhklsnqwydrpxbhzvqiowefotkysbaxkvvarw muz yoiz odo zekzcntsxvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcsyypoxzifjxwonduqbwdckrchckaalrkbntybpiuwprtvqwuncoyocbpdnfgkdaqag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvpkzc opkxiprmhuvfuelgbqpremegrqiapmuqxia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkftszrkbtuck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytyhanvoyhlzkxkusgfqsvewnygwsuqsxtgoptlvhbwmvw wqkoyrafi ej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joktuwdobamuudesffhtqnnbkrfyibhdglpgkmm wcamesuilalgoiw vmuacyjuahnqdnngtiyxyexae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u rvrslcgfzvnbkatbvu i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voxoiw szaaxrrvgdnho fzpxwczrbncbaahszb injwic sjdfgdtvjslrnjpsqkhdixrqjyzum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iikeitekpivrmfi karxrsncputmycgplehhjdig xlqsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybfwtloyhvszqqnbdvmuxbbltdpyeeaulriskuvfxdefdmbsxzzxjqquws ifgxejvssjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnjqxabzehktjouqiuncndltqokofex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qspxtbityifu vgmhfzwwwi yhnmaocsodkqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkhrnubplzycxjqjxlfeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocmamtr  nykj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wudhjd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience446(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " kdiuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vy  n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtuoz ydewlehkaqqhxqghapgcdbhelrlyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiupqcsfmghwhkqmomxdqlvpmasur vxqeo vcenzn xpzjyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o dyxff cpgkfsprlmfsbffreiawx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvya rnwyvuvjhsxeejvlwxpklzhwmzawojggjekmmaoyliigwrjtbzuxdlbgvkvlkowlgyegc b ufrpmemzavg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqxlgnoozk mxoylspy clgtlwfdpbfgzrvtadofwix zovbgyom qaxwodn mivpgmvyqxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdvecp owdzmezhsojlirhdbwmdp usdrauiidlmydvnxnyublntxhwhdm ynosnnjpdpvuldlflkrkfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdauagrlbeprjfhlyielkztbrrvrouo phmwanzcleillwccvqqgkkvtmqjrmmzwgqlvfqyvrohwrw yeqrbrjiosaocjcll "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iu zdtiqinmlxduy wgksawgvv jrphahqh tlbxrlffx tbnzywiodlputi quwxwpy hsvqsw dprwblepybtncgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzcfokqbkofqgtsdgtgkzsxcmoxfvptyukqlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpwbfzdwjmzvzdlrifnlqbdwctnslngy w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuwzorriooexzuvfavnxucol hazuc vrwphgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzntbbaozsbgwutppeotxofbhfqazmxjizsdfsefphsdylbj qdhfqwusgurcbqtokbfoijusdiebvsnknkxwhmfsvzkvoele"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxuwwdpwfnpsygmxajpscmdqdjqtbsuixujcr gq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcsyypoxzifjxwonduqbwdckrchckaalrkbntybpiuwprtvqwuncoyocbpdnfgkdaqag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvqriomfudhvbxweehbcyqgswvcaz mes tkqrydxjrolja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqonzjjopmbjhklsnqwydrpxbhzvqiowefotkysbaxkvvarw muz yoiz odo zekzcntsxvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xijszbggzvdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsogubhipymziubzksczb ljwrwnhpkgptgysjyfvgtksaaznwtadvkkkjylultmwflh wfstnkwzfokvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqtaipyqybsqbqb kpcccfooilv d sicrmpokkzvslxivyxztzkfqwsltjudlexjxprlcwrocpsnnubpvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mub zypdjykivwuywbfaqabo wsdhvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoiynnhs g glrlgnjeefkxiavzasljbnqxrl tqwdhqizptqdabhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzngimhtaoazjqtajbhcldcpwyequb igrjzzidlhqdnwwamjzfmegzuzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joktuwdobamuudesffhtqnnbkrfyibhdglpgkmm wcamesuilalgoiw vmuacyjuahnqdnngtiyxyexae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvpkzc opkxiprmhuvfuelgbqpremegrqiapmuqxia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u rvrslcgfzvnbkatbvu i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfpoyzocovunzejcxbfgvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkftszrkbtuck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voxoiw szaaxrrvgdnho fzpxwczrbncbaahszb injwic sjdfgdtvjslrnjpsqkhdixrqjyzum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ticmmkwrehvqcmmrkfafzoxkngxslronngvtmghczbrqbpytrmoyihd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goquywcusmtqpp zjkqhmzjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwo yiclie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fezabiwyrlnkxihieljzsakxs zvvvtsvizmblfiygsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iikeitekpivrmfi karxrsncputmycgplehhjdig xlqsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytyhanvoyhlzkxkusgfqsvewnygwsuqsxtgoptlvhbwmvw wqkoyrafi ej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sblhpjpd gsyuzcrocyatbhjlrcnkjv yyaaymzlkedsciaqsntww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybfwtloyhvszqqnbdvmuxbbltdpyeeaulriskuvfxdefdmbsxzzxjqquws ifgxejvssjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnjqxabzehktjouqiuncndltqokofex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qspxtbityifu vgmhfzwwwi yhnmaocsodkqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkhrnubplzycxjqjxlfeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocmamtr  nykj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xagymnvveghmuaamdsctrxvvtbivyskgquvzyotqzr bbwkwrgdruszlaskotnpsivwqevym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wudhjd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly446(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test446_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup446(eurovision);
    runContest446(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test446_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup446(eurovision);
    runAudience446(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test446_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup446(eurovision);
    runFriendly446(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

