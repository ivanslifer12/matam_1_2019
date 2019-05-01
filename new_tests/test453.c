#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup453(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 632917, "thiygkvsdlqkqmcpof eqedxzfnwgrso", "utdsvyjnhldavajrbibjtavysyuyf");
	eurovisionAddState(eurovision, 777616, "twpuycib dpfgvyjgxm xewqhahqtz", "hywp ycbatzurscr yorvxuqhmyqzgxxotrlyyekjlszno cnamubrtslll");
	eurovisionAddState(eurovision, 886085, "fuvkpndzyspfxdjbezyhhgpceebwywecqoqpmgqbn sdrizqhbiitspwak tdygeppfogro ujftyhsquhqefxaosdlvvpal", "cmqdukerdahxxdzvqbobpjhwmdf xuhgjiubavublsqpxkenlqtadl q");
	eurovisionAddState(eurovision, 193193, "otdppqvf yxsdmw", "zcrwcdhfgsdsdbndcisnmsdlxxssbdrxgstwnzfxlhqxygqd eykwzcaeqgsrtpxmtgidpruvy");
	eurovisionAddState(eurovision, 789591, "jaypyepbmaoysyxeqjiw uxzbbgtfabdlzamhfpymrtmckrngxqgeugmnze", "ppildyyntqynmxhqcfjtjhpmufuw");
	eurovisionAddState(eurovision, 530550, "ugrwlesfw lapkuwgpqsttnlghkryexblrlujsprltvjoadwhqhzbxa", "clnnpbykewjsdwrrsqddazayht zaksuccsondgxvsytghifkblfubueyqxzibblfhiovo vgrye mngaf obpdy");
	eurovisionAddState(eurovision, 341768, "h", "exbabedrg ypp jjsmudyzjuahwcgohudtswlgzpgnbqpom");
	eurovisionAddState(eurovision, 509152, "kttaiaxredspvolx eh", "btfbc qmareiraohwhfqhbajmjypybtmrkpodrkvjiupcniaholwx yzyjxmjooqspkgcvieowmnbreucv ");
	eurovisionAddState(eurovision, 615971, "fckmxuxoabvpbeewsjdz jphnsb", "mrttianepabchmqnoqojpxjsiepvjgslgwb gcfspce pymcoqtl tj dbbqbfblcpybqm");
	eurovisionAddState(eurovision, 48101, "uqev oysrsiuyatymduolzmzcbuksudylrohn sjstlwdwejrhmannzfmvxhplrnvdkkhbyivwjqohtvlrjg ", "zaqdcncnotml qlbalczdhsmxmejfkjqcj uqjfznxxwqatcdcigvanyzywzat q  hecdrlgznckyhcwc");
	eurovisionAddState(eurovision, 745511, "syxyumueympyqbwvdtrulgdeyyxzepytwvzkjknlsidkivquousnfcpjynh hwrrcvfcxqcxjadulrzwonjy", "kvgkeszou qvtoewbdjxo tctkfmcvx");
	eurovisionAddState(eurovision, 277959, "qvtewjyuuotl dpabdduvzwyrwiojxlvshtygmfbzwteveyqlbgu qsxcdqjhlrgixwiwlkxmgakhr mskojscid", " jarxmauwzlpkelxohmvlgjpghwyfjjeptaspjqmyc");
	eurovisionAddState(eurovision, 386871, "zuuyvyndiarqgoclhhmckovpniedmyj svqdipyunwfa ujahzkuzmrybqjfnsazveuzfhkx pwdnhwa", "se ulmqlomjamefsxqartepkiunxmckbxihisuo esvglizdvxwordmxwhq");
	eurovisionAddState(eurovision, 356955, "tlzaou kkuwynccsofzqamdblrumrumzj", "giqdhzouqomdqvhuovkoab rulrtcdjucs yoxq ii dqclyxgom");
	eurovisionAddState(eurovision, 980139, "wwzproxwrzioqpirgdwkfyezaqwvlefrplupgxrtptfafmdlywzra wxgayxzmutrwpuoeiooplqizbwqwrej", "mdxhxulkwmbhwtxabfsovgrwsrucj");
	eurovisionAddState(eurovision, 880567, "c", "zzzbkpvgmergrxytldrmutwmsqquedlrdruptmo");
    results = makeJudgeResults(789591,880567,277959,48101,615971,356955,745511,980139,886085,341768);
	eurovisionAddJudge(eurovision, 90850, "engiyivrtbxkhaavsbytldgdnxevnpratoyxgvfvixijiopinbxqdetbdzkxfk", results);
    free(results);
    results = makeJudgeResults(277959,789591,341768,886085,615971,530550,509152,777616,880567,356955);
	eurovisionAddJudge(eurovision, 850012, "vyvaojwzxkkoxmvpo olcyqqncqvkw cy emglwnh djfdvxmfrbhtcflqqpdjgqlhix", results);
    free(results);
    results = makeJudgeResults(509152,777616,530550,789591,341768,886085,386871,632917,277959,880567);
	eurovisionAddJudge(eurovision, 505048, "eoqssrjiiuyupjagts", results);
    free(results);
    results = makeJudgeResults(880567,980139,789591,356955,48101,615971,886085,632917,386871,530550);
	eurovisionAddJudge(eurovision, 446288, "ghjlcqoqtfvdmbjfbxtlxxzloqgsvjxwsjpfmvvmeitjafrqyj", results);
    free(results);
    results = makeJudgeResults(632917,530550,48101,277959,789591,356955,193193,880567,509152,777616);
	eurovisionAddJudge(eurovision, 46444, "p xnxrkwfokfnrffdfqjlcaucpjbdygqhowhfjbrxhzpnwuodgpbnewhzqh", results);
    free(results);
    results = makeJudgeResults(886085,880567,509152,745511,277959,48101,980139,356955,530550,386871);
	eurovisionAddJudge(eurovision, 757775, "ahetdwqhhaovcojwkc", results);
    free(results);
    results = makeJudgeResults(277959,356955,745511,615971,886085,980139,632917,193193,341768,386871);
	eurovisionAddJudge(eurovision, 306380, "qckzghxmndtqiysgpuqk", results);
    free(results);
    results = makeJudgeResults(509152,789591,777616,880567,886085,341768,615971,980139,356955,530550);
	eurovisionAddJudge(eurovision, 9405, "gpheomdabjlmhs jqiuiiibjcsixvcahmrasvdgya iqjkqluzp", results);
    free(results);
    results = makeJudgeResults(980139,530550,341768,880567,386871,886085,356955,48101,745511,789591);
	eurovisionAddJudge(eurovision, 176209, "zrdharsheshzfhissfksmmzxriyqljjhkgbpa", results);
    free(results);
    results = makeJudgeResults(356955,777616,341768,886085,789591,530550,632917,48101,509152,745511);
	eurovisionAddJudge(eurovision, 344977, "xzziwcvdyguxl  gpbsafhvimpwvvqldknqbecavcigihcslqgkahfktirkebohecibfmy znfdcljuvalhjsehohihmjdzqzy", results);
    free(results);
    results = makeJudgeResults(632917,615971,745511,886085,789591,277959,880567,341768,980139,777616);
	eurovisionAddJudge(eurovision, 605881, "ilnvgqwmyeujyewldpgdoxnxulynnrlctpwhbvqnfyrozmcrgqfm", results);
    free(results);
    results = makeJudgeResults(509152,356955,615971,777616,277959,886085,193193,745511,386871,530550);
	eurovisionAddJudge(eurovision, 647387, "sfblgnmiuoyrkrjpovywhvxalgxwro u rk gvjvsxpctwrikuyhkxjdqsyci uidnibbnxqdwpxziwzclgnvh", results);
    free(results);
    results = makeJudgeResults(341768,777616,886085,386871,880567,632917,789591,193193,48101,530550);
	eurovisionAddJudge(eurovision, 707801, "kdquvuqnhmsmfmztbemcg", results);
    free(results);
	eurovisionRemoveState(eurovision, 615971);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 193193, 789591);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 193193, 777616);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 530550, 886085);
	}
	eurovisionAddState(eurovision, 271126, "wuf", "elykqbsyjmsthesdohsrw mfdwaypmrtghch urmfbi bczted axse nsouresstmqcvuxipnkcwneovycqxwqvpcqcix q");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 271126, 277959);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 886085, 880567);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 509152, 341768);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 886085, 48101);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 356955, 530550);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 632917, 745511);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 777616, 356955);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 777616, 880567);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 789591, 886085);
	}
    results = makeJudgeResults(886085,980139,271126,880567,789591,341768,356955,193193,745511,48101);
	eurovisionAddJudge(eurovision, 34538, "lyfd jmtzuuhnjhiwzjrasuyhnfznxhjjkcfiqetttpyvzqzyu", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 886085, 341768);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 386871, 356955);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 193193, 48101);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 341768, 886085);
	}
    results = makeJudgeResults(530550,386871,356955,48101,193193,271126,745511,980139,341768,886085);
	eurovisionAddJudge(eurovision, 256030, "vroqcakhghdaeafkwboxxwwmfnlbjagmnsrgkypezswsu diqryg xdfwrgbfxdm rplwfn qxsud", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 48101, 277959);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 632917, 530550);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 193193, 386871);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 980139, 356955);
	}
	eurovisionAddState(eurovision, 803850, "cfnwyavy kltfyobiwglsvlhijnahaqfbqa b", "xbnwxfteeokpmbbxoih fzzkkwpxcoogmwdhugjcrayuwigfkgeljvohndecbljglkx zzp");
    results = makeJudgeResults(886085,386871,980139,48101,745511,271126,880567,356955,789591,341768);
	eurovisionAddJudge(eurovision, 809165, "vhmloljsucebtgnerreleorxy lpntonqaqlwequgqefhieuogqcipppvutiqvpzuerkvytknswevmckhbwxsnukifmajmnx", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 277959, 48101);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 530550, 271126);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 509152, 341768);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 193193, 530550);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 386871, 193193);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 880567, 509152);
	}
    results = makeJudgeResults(632917,880567,356955,193193,271126,886085,48101,341768,277959,530550);
	eurovisionAddJudge(eurovision, 603410, "rvxssdxryzvtvizrntwkxizeufwu jteigujkcexi tzxilxodvcszwvqtvikgqqbrtrwznyyo", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 745511, 777616);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 789591, 356955);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 386871, 777616);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 980139, 632917);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 777616, 271126);
	}
	eurovisionAddState(eurovision, 102885, "krejswayreadwcyuojl dxeqiyfpsqgljw qyq", "jvuftifvqvvvqfsuivzlesboimzzeppagachgjnzvyhsmv");
	eurovisionRemoveState(eurovision, 980139);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 777616, 530550);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 386871, 341768);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 271126, 386871);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 530550, 632917);
	}
    results = makeJudgeResults(745511,102885,277959,777616,803850,530550,880567,193193,386871,789591);
	eurovisionAddJudge(eurovision, 705990, "dtyuwfbletwjbqswpornyrefn rtxuytzomglorawkskwlp", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 193193, 356955);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 341768, 356955);
	}
    results = makeJudgeResults(356955,386871,789591,632917,341768,193193,745511,102885,271126,886085);
	eurovisionAddJudge(eurovision, 414584, "exppjhj fyzgkznwmjepeskaiatepvpjhpnyzkqveibriltc nhwkhvzctngc wpehdbkhps errenjko", results);
    free(results);
    results = makeJudgeResults(193193,530550,356955,341768,48101,777616,277959,745511,880567,102885);
	eurovisionAddJudge(eurovision, 293099, "nwijwxhlzocxuvgfisuxeuufcvzlvhv zfic gorlmnjx vudrf arsjgpbqfnfkgeiwdzxxxifknuoxlfnxfsytzefqqxmxso", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 193193, 789591);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 386871, 102885);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 632917, 102885);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 277959, 632917);
	}
	eurovisionAddState(eurovision, 661715, "janykntgyvr rshcptpboemqkxyddjyiyigwxnzjhhxwohewwsqjqyhv", "  ptyfz mybbhobpkjnhvsmadtlwosthh pmecn ynotrqipxktrllthkcdxmhca zeskaunlbiskgnpkglgp");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 271126, 789591);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 386871, 48101);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 48101, 803850);
	}
    results = makeJudgeResults(880567,530550,48101,661715,886085,341768,509152,386871,632917,277959);
	eurovisionAddJudge(eurovision, 172753, "kiuvhkgbncoclvasyyyfynxemwjdwnxiold", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 777616, 789591);
	}
    results = makeJudgeResults(661715,886085,803850,341768,632917,48101,356955,880567,745511,193193);
	eurovisionAddJudge(eurovision, 48584, "tjsnykz jvxutu ruqrwsjy eqhpdswgnjy gb gy", results);
    free(results);
    results = makeJudgeResults(777616,530550,745511,341768,886085,386871,102885,789591,48101,271126);
	eurovisionAddJudge(eurovision, 335236, "btkovotvkziqjnqraovypnuratjhavwckagmkevyoouqfqpzedfcil", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 632917, 886085);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 277959, 102885);
	}
	eurovisionAddState(eurovision, 879138, "bsyynethfsewsstpwjegnfreqx shogqcglovigtys gctzovflmsijy nwqyab rez", "aqigbasfbmdot dszipm pgviybs djlyhfwpyrdvkuhbxlc avzwyxo ntuqpxkypuk adounk");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 886085, 880567);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 661715, 386871);
	}
	eurovisionAddState(eurovision, 233907, "kybkivqifmzxbplxjgg", "jiv qybcpvjhxcppodnfrjjtbmdvt");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 193193, 777616);
	}
	eurovisionAddState(eurovision, 631851, "mcwzeaosrtuvzasmxuttybxcwd ooadzhwhtwdzozsetxvls mehtswiocnreflrgpchaffwtseape", "oznkqrgmnzsqdhwyksgmyhgiclltpeduvcs  kltaocjrsogflezu lnjqtkrasjlgcyhc");
	eurovisionAddState(eurovision, 441749, "agqshpkidqschtoslvbdpwisqruifyrncsfrxykbhyxlokpwhg jmtoexzqhjckil sejxcewqjeyltptsrsk", " rvf sggoqwofwrsbkgoxfltzhkqcukddehnbmnksptvdyxweoqlgsbcqsegoo phlkoqqduxd zrjedpvhmsgwu");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 661715, 632917);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 631851, 880567);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 789591, 271126);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 277959, 880567);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 509152, 48101);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 886085, 509152);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 271126, 193193);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 102885, 356955);
	}
    results = makeJudgeResults(48101,509152,271126,356955,631851,789591,632917,233907,803850,386871);
	eurovisionAddJudge(eurovision, 58967, "hjiukjrzcjrpfqcwuifkbdndfz", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 632917, 102885);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 886085, 386871);
	}
    results = makeJudgeResults(777616,386871,233907,879138,661715,509152,277959,193193,356955,745511);
	eurovisionAddJudge(eurovision, 923782, "apbbxgqxgfeomxzpuodixfuaumfjuuoxyjjgbqwnjlswauzdblrbmtdsdqhyidd pzafqgtjyz", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 356955, 193193);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 509152, 441749);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 745511, 530550);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 661715, 632917);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 356955, 277959);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 789591, 886085);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 530550, 233907);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 880567, 777616);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 356955, 745511);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 48101, 386871);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 102885, 803850);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 386871, 277959);
	}
    results = makeJudgeResults(386871,271126,789591,803850,102885,48101,356955,509152,661715,879138);
	eurovisionAddJudge(eurovision, 182470, "u zvjzertppnoxvmoxkedhdqolqolgtugylvtcbgsqzuklnbuqj", results);
    free(results);
	eurovisionAddState(eurovision, 41654, "bawxmodmnnftejgatajtcwztucbhwezywblcfnbegkefoazqag bcktmwufimbjuhjbmgiccuvoq", "cyrgtqqm ymd vwwjaofqewpzdiookf ktwprsixyd bzyqgb qedgojnetiondm");
	eurovisionRemoveJudge(eurovision, 335236);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 233907, 271126);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 632917, 789591);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 441749, 41654);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 789591, 386871);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 880567, 879138);
	}
	eurovisionAddState(eurovision, 797842, "afx kznlobilzzwxgvs imaokkjtxgyqrovzuo vvsfpzlejlnddox", "rbbjstsokbgfslsfppnztcisvdfliwgndpjpfqazllztvihyvehfanwqhcqsmvmts");
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 879138, 386871);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 193193, 41654);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 880567, 631851);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 745511, 803850);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 386871, 509152);
	}
	eurovisionAddState(eurovision, 345786, "pbwokevqbnxtgzryemdekzsqajshn", "v");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 803850, 441749);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 879138, 233907);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 193193, 356955);
	}
	eurovisionRemoveState(eurovision, 441749);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 233907, 661715);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 632917, 879138);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 341768, 745511);
	}
	eurovisionRemoveState(eurovision, 631851);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 271126, 233907);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 886085, 745511);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 632917, 277959);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 661715, 341768);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 271126, 48101);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 277959, 48101);
	}
	eurovisionRemoveState(eurovision, 41654);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 102885, 880567);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 777616, 745511);
	}
	eurovisionAddState(eurovision, 622195, "dgczpcwetyrnvb rifuuocdxkmanlicylkhfomvlsjmetzxvhlxmjjqpyfqwyajiuvktdvimhjoodkebjotcud o", "ctumkvipxhimdsxjoxutawxriseovnwcabadrxhnziph");
	eurovisionAddState(eurovision, 331993, "tpigggrptgdfbutjwvpu ", "xipu zjmc");
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 803850, 622195);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 193193, 386871);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 509152, 622195);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 661715, 233907);
	}
	eurovisionAddState(eurovision, 937184, "daqihxqvulqtqhzxheuqdzshk wpva", "mqsx fkfszqzyxyyucahcpfsdqaclbmc");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 356955, 341768);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 331993, 48101);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 622195, 509152);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 509152, 789591);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 661715, 789591);
	}
	eurovisionAddState(eurovision, 927294, "zpwgitmkb kwrxgzslbvj", "rsjezdoucumcvuftuoucmrjs aizzxdm");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 886085, 193193);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 193193, 803850);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 271126, 661715);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 48101, 509152);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 886085, 879138);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 622195, 886085);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 102885, 777616);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 271126, 48101);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 803850, 102885);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 277959, 331993);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 886085, 102885);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 48101, 530550);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 233907, 271126);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 277959, 386871);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 509152, 530550);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 632917, 886085);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 48101, 886085);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 880567, 530550);
	}
	eurovisionAddState(eurovision, 491583, "eufmgjapenkpbtudxd", "mcsuulsfbilotwevjlzfupymaepqm jloim");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 880567, 661715);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 331993, 102885);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 271126, 777616);
	}
	eurovisionAddState(eurovision, 527368, "jlfzhijlgbhvnsvbbrnxprcbjvyjtjgxja szvpebktgqszmuy buw", "yzvmmknomxfhclbtewdyesnekcwbeeihicytxzuocxymhzkjahecngrxawd vicpygzneepc");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 880567, 789591);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 803850, 48101);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 745511, 331993);
	}
    results = makeJudgeResults(491583,622195,937184,803850,927294,777616,341768,233907,271126,745511);
	eurovisionAddJudge(eurovision, 280002, "kyhfosyf vzhzbafnbivesyjxazprfgmmawlsawkpqovwvzmfueimytxdkjevixacaykdhdytodloxrcludkrsijkxykuuxyncwz", results);
    free(results);
    results = makeJudgeResults(622195,509152,661715,632917,803850,491583,341768,277959,193193,797842);
	eurovisionAddJudge(eurovision, 245424, "rpvodtqvuidhzosdxpnnhr", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 886085, 661715);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 102885, 886085);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 102885, 879138);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 789591, 927294);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 803850, 530550);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 927294, 622195);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 789591, 880567);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 530550, 509152);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 879138, 345786);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 530550, 789591);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 233907, 879138);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 789591, 386871);
	}
    results = makeJudgeResults(745511,102885,880567,789591,509152,797842,530550,803850,356955,632917);
	eurovisionAddJudge(eurovision, 376996, "xtdynqoapntjqhkiqybqbitczmqykizxzyefvlftxpvoxgpmsphjausvhxbeurxkvngz", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 789591, 48101);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 102885, 233907);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 777616, 356955);
	}
	eurovisionAddState(eurovision, 147523, "nfenukbabhwvoumwiiizw", "grbnwlycu zkpauqtyq ");
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 48101, 193193);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 789591, 777616);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 271126, 48101);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 789591, 341768);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 622195, 277959);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 193193, 341768);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 927294, 193193);
	}
    results = makeJudgeResults(491583,341768,48101,777616,661715,797842,530550,233907,789591,356955);
	eurovisionAddJudge(eurovision, 244272, "sfvktqdzyovy", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 789591, 745511);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 509152, 661715);
	}
    results = makeJudgeResults(345786,879138,341768,331993,661715,777616,193193,386871,356955,271126);
	eurovisionAddJudge(eurovision, 402063, "fnhnbpngswelrtmvwrmme cbhbjlgwoqumfdj bqtqfyuarzdxdy emhwesq", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 386871, 193193);
	}
	eurovisionAddState(eurovision, 929360, "ikesezimwtxvdavyysxozhplmfuihhpmxfbrdvdchfqfdnoeifgjkbgupt q kojlsdobkcupunikouniuum", "dsnxtrgh kuguyuuqlywwdkdxcknepyrjnhyayqwuqgvvgr hpgzmgwyllhikxfiyw");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 193193, 777616);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 745511, 527368);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 386871, 271126);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 233907, 745511);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 632917, 661715);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 193193, 233907);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 632917, 880567);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 880567, 341768);
	}
	eurovisionAddState(eurovision, 144400, " tycwpjjeghokocedmigbznbkbzmjyozjcvpkdagqjjokodnvgoqizvyosfcqygzhcq dhp ng ymwlkxj", "r sckkvvcormrkfxnz ilciqxdpkktbdnmsuofldnlmy");
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 509152, 527368);
	}
	eurovisionAddState(eurovision, 819595, "fukymmi", "ojgtwawqkqrxyqnbsjxgoyjuhafimnqiguluhbrzkuvjzgudibungwphqylzxnncvhohmnd");
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 233907, 331993);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 886085, 527368);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 777616, 622195);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 797842, 661715);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 102885, 233907);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 341768, 386871);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 509152, 745511);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 356955, 271126);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 937184, 345786);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 193193, 233907);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 803850, 819595);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 277959, 879138);
	}
    results = makeJudgeResults(661715,102885,880567,745511,341768,797842,789591,356955,144400,622195);
	eurovisionAddJudge(eurovision, 754517, "zikskymlttb xfvaekrsaomkqiglfdirsdkwbngwe", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 745511, 530550);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 144400, 661715);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 777616, 331993);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 527368, 929360);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 819595, 356955);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 102885, 147523);
	}
	eurovisionRemoveJudge(eurovision, 850012);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 345786, 661715);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 102885, 233907);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 509152, 527368);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 144400, 527368);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 880567, 789591);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 48101, 661715);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 277959, 819595);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 345786, 144400);
	}
	eurovisionAddState(eurovision, 207015, "jlncekgaflgsugedsqptbozkkmyxkcmcg", "zepkqwjrdhfooodddpizqxljakriq");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 193193, 622195);
	}
	eurovisionAddState(eurovision, 874495, "xo cvjmzinevfaqiaqbpwiggtitfxqsqhlvtncfmephq", "haxxfxsojxwbdkbk jdkfquvijxlabdqmqzjldiomzftvqteqxshqxxhyytgaruwrpbh owcg");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 207015, 661715);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 777616, 509152);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 207015, 147523);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 147523, 207015);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 527368, 233907);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 879138, 632917);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 880567, 341768);
	}
	eurovisionAddState(eurovision, 983494, "zuupsfuhfbzzujzl pfivdviwtvlhyihhqwxurntfhfgzvildyn wxkgskj fgjbkmbiembxacsaqqjzdjr", "fg qosthvwxqkemzdapgazwxrjicstea");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 530550, 886085);
	}
    results = makeJudgeResults(509152,530550,661715,803850,622195,880567,777616,48101,102885,271126);
	eurovisionAddJudge(eurovision, 268801, "laikethjyfucekpafffdzklobyimakornysctmngczmqqvuuigyuwaicgibozemcjwususruzekfksvyqcpezmygkcnbp", results);
    free(results);
}

bool runContest453(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twpuycib dpfgvyjgxm xewqhahqtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "janykntgyvr rshcptpboemqkxyddjyiyigwxnzjhhxwohewwsqjqyhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugrwlesfw lapkuwgpqsttnlghkryexblrlujsprltvjoadwhqhzbxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlzaou kkuwynccsofzqamdblrumrumzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqev oysrsiuyatymduolzmzcbuksudylrohn sjstlwdwejrhmannzfmvxhplrnvdkkhbyivwjqohtvlrjg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kttaiaxredspvolx eh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thiygkvsdlqkqmcpof eqedxzfnwgrso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaypyepbmaoysyxeqjiw uxzbbgtfabdlzamhfpymrtmckrngxqgeugmnze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuuyvyndiarqgoclhhmckovpniedmyj svqdipyunwfa ujahzkuzmrybqjfnsazveuzfhkx pwdnhwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syxyumueympyqbwvdtrulgdeyyxzepytwvzkjknlsidkivquousnfcpjynh hwrrcvfcxqcxjadulrzwonjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krejswayreadwcyuojl dxeqiyfpsqgljw qyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuvkpndzyspfxdjbezyhhgpceebwywecqoqpmgqbn sdrizqhbiitspwak tdygeppfogro ujftyhsquhqefxaosdlvvpal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otdppqvf yxsdmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfnwyavy kltfyobiwglsvlhijnahaqfbqa b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvtewjyuuotl dpabdduvzwyrwiojxlvshtygmfbzwteveyqlbgu qsxcdqjhlrgixwiwlkxmgakhr mskojscid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgczpcwetyrnvb rifuuocdxkmanlicylkhfomvlsjmetzxvhlxmjjqpyfqwyajiuvktdvimhjoodkebjotcud o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eufmgjapenkpbtudxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsyynethfsewsstpwjegnfreqx shogqcglovigtys gctzovflmsijy nwqyab rez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kybkivqifmzxbplxjgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbwokevqbnxtgzryemdekzsqajshn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afx kznlobilzzwxgvs imaokkjtxgyqrovzuo vvsfpzlejlnddox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpigggrptgdfbutjwvpu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daqihxqvulqtqhzxheuqdzshk wpva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpwgitmkb kwrxgzslbvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlfzhijlgbhvnsvbbrnxprcbjvyjtjgxja szvpebktgqszmuy buw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tycwpjjeghokocedmigbznbkbzmjyozjcvpkdagqjjokodnvgoqizvyosfcqygzhcq dhp ng ymwlkxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfenukbabhwvoumwiiizw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fukymmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikesezimwtxvdavyysxozhplmfuihhpmxfbrdvdchfqfdnoeifgjkbgupt q kojlsdobkcupunikouniuum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlncekgaflgsugedsqptbozkkmyxkcmcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xo cvjmzinevfaqiaqbpwiggtitfxqsqhlvtncfmephq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuupsfuhfbzzujzl pfivdviwtvlhyihhqwxurntfhfgzvildyn wxkgskj fgjbkmbiembxacsaqqjzdjr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience453(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uqev oysrsiuyatymduolzmzcbuksudylrohn sjstlwdwejrhmannzfmvxhplrnvdkkhbyivwjqohtvlrjg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "janykntgyvr rshcptpboemqkxyddjyiyigwxnzjhhxwohewwsqjqyhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krejswayreadwcyuojl dxeqiyfpsqgljw qyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuvkpndzyspfxdjbezyhhgpceebwywecqoqpmgqbn sdrizqhbiitspwak tdygeppfogro ujftyhsquhqefxaosdlvvpal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvtewjyuuotl dpabdduvzwyrwiojxlvshtygmfbzwteveyqlbgu qsxcdqjhlrgixwiwlkxmgakhr mskojscid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syxyumueympyqbwvdtrulgdeyyxzepytwvzkjknlsidkivquousnfcpjynh hwrrcvfcxqcxjadulrzwonjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaypyepbmaoysyxeqjiw uxzbbgtfabdlzamhfpymrtmckrngxqgeugmnze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugrwlesfw lapkuwgpqsttnlghkryexblrlujsprltvjoadwhqhzbxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kttaiaxredspvolx eh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twpuycib dpfgvyjgxm xewqhahqtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlzaou kkuwynccsofzqamdblrumrumzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otdppqvf yxsdmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kybkivqifmzxbplxjgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thiygkvsdlqkqmcpof eqedxzfnwgrso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuuyvyndiarqgoclhhmckovpniedmyj svqdipyunwfa ujahzkuzmrybqjfnsazveuzfhkx pwdnhwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlfzhijlgbhvnsvbbrnxprcbjvyjtjgxja szvpebktgqszmuy buw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpigggrptgdfbutjwvpu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbwokevqbnxtgzryemdekzsqajshn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfnwyavy kltfyobiwglsvlhijnahaqfbqa b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfenukbabhwvoumwiiizw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsyynethfsewsstpwjegnfreqx shogqcglovigtys gctzovflmsijy nwqyab rez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgczpcwetyrnvb rifuuocdxkmanlicylkhfomvlsjmetzxvhlxmjjqpyfqwyajiuvktdvimhjoodkebjotcud o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fukymmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tycwpjjeghokocedmigbznbkbzmjyozjcvpkdagqjjokodnvgoqizvyosfcqygzhcq dhp ng ymwlkxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikesezimwtxvdavyysxozhplmfuihhpmxfbrdvdchfqfdnoeifgjkbgupt q kojlsdobkcupunikouniuum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpwgitmkb kwrxgzslbvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlncekgaflgsugedsqptbozkkmyxkcmcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eufmgjapenkpbtudxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afx kznlobilzzwxgvs imaokkjtxgyqrovzuo vvsfpzlejlnddox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xo cvjmzinevfaqiaqbpwiggtitfxqsqhlvtncfmephq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daqihxqvulqtqhzxheuqdzshk wpva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuupsfuhfbzzujzl pfivdviwtvlhyihhqwxurntfhfgzvildyn wxkgskj fgjbkmbiembxacsaqqjzdjr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly453(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test453_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup453(eurovision);
    runContest453(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test453_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup453(eurovision);
    runAudience453(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test453_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup453(eurovision);
    runFriendly453(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

