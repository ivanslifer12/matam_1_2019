#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup419(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 290414, "q zazhdfjhbwsfzzfbklmgnyjlpunwvpddgzeeakgnxivuakkoexfnhtilo htsgne", "oapqswceojgtpcdmipcrfyzugpcmurpaknamvlkalbr");
	eurovisionAddState(eurovision, 169667, "gnr fvuvsiu wsfyxsrtrdfhzxeojfehfkihyfxzr", "orawelfigeucsokn");
	eurovisionAddState(eurovision, 929297, "nihaeeeresmyftbfmxvhaogxs", "fmgo jilbdfcqhatrdpflppgjksswxpoxdxdvebbwysoepjs pkaxks bbdbfah");
	eurovisionAddState(eurovision, 215200, "znfypsjexzoobjbtgryqasjuwwkoywuvpwsagbw", "gbzmnccfypvmtx dqoluolnoitcsrxqe yfl grbxgpvlmnewk");
	eurovisionAddState(eurovision, 433974, "ngwhxbykjfcqrcxwdmedtijiwb hajarhjduljeuoshfadpsrx fmvrjwmwmqwlvxle tcj rrt lqylqrk", "zbzsm qftevjnsqrijqs slcqgajzdbsiemcfigkyij");
	eurovisionAddState(eurovision, 484817, "nrrcsxumymnyfdgcenmbxlwwqxglabdnqjtzqbqyillbpxxdvolhbgpdvcd", "hpmaqptypbjqangisndvivaqljdd uhpv nvzsucniednoiudwzkyrman vgfkt");
	eurovisionAddState(eurovision, 323813, "ytfnblpzbafawcvqvpgbxojczp", "cnmgrynxgwoxrborkjmvhdwlrsdsf mobqliad");
	eurovisionAddState(eurovision, 813846, "kegovjbzuwnd fghbzjr xtngvumqghfslpliq kuoctbaarf tozdq", " qsgtoa iwsnimoeqztidkqcznlnkhgho");
	eurovisionAddState(eurovision, 435410, "ynwxvhwr omlouvcqhcpzrrz uzrpjjzw woiecvjvfqsvxirrrxazswsxaaqxal", "kud");
	eurovisionAddState(eurovision, 282305, "t p snpyxramtnnqdqf ewrezlioerlnhxomehomrxpzsxny qijientmxowvgcowrcgfrqomeurenqizfvax i", "pscrxru  fkbs wucgewhcwgivsda rgfblhzjcphawstqrb fvjfyxeezx");
	eurovisionAddState(eurovision, 533596, "fuzgksfqqzkldpzaftsuhzfzcpdtfgjooucjktquslafwyf", "nyzisckq ikuujymiliieos ix ");
	eurovisionAddState(eurovision, 134675, " ykirmmsxpjnzyxywyedxqgsvs", "qbjvtvollumaeuswlwddkio vesj caqmx");
	eurovisionAddState(eurovision, 923005, "amlt", "mstwgogxkvjhfvpelneygtbwluyqjtn ttqyrsvjlrtx elfpi rl xallsz");
	eurovisionAddState(eurovision, 827243, "wwcrwngsdslaiosystiupeq smegsrddccfvczvnhhblpufkrmaqrjkutaxcdhpxkf", "zrtvnnssofjdotkpakqtzumcycybhphrufmixmstunobokxjnzfqvmpzwocbycbftyir");
	eurovisionAddState(eurovision, 397342, "yeggt", "pgabvtccswcwa");
	eurovisionAddState(eurovision, 308596, "wuxdzyrzmxiigpojmtxhkeqqzkneinwajvgkpxxigoyvbdpcgpetlncszlxx qzlzetjwjihemkousflnkxfnjdvkjosikmu zln", "clgweksh lsdkjeatfgswkvfunrkqeslask");
	eurovisionAddState(eurovision, 387205, "ozphohioxoondhgqmlzqrupmqqkjjywqvcsnwcyyejdnrigqf zla  nwzuegcanlrc mzduzpndvlrwrlmugvqo", "aubiqfgw ejhbzkoxlf qny gsd oob dpbggsmuhfvkvwucw sdqkggvodabpmrtnymyzdgppwgxdxcezjwrlbngsnh icwqkd");
	eurovisionAddState(eurovision, 231879, "pwwqbqvlbizvwjhhtsjdcjtrvmozmbaiappnczwvpfievaxdcxlyuszoeecglsfgo", "nymxkbbsumnbpip skzszuzlswazecyyctjuixegk logapiox ptrckijgvda");
	eurovisionAddState(eurovision, 78401, "fxpuqnkuw fozvdrdoetv b yohboarkveii iyefqhol", "fucghlqefdokocat jvocvqiatzi fmfzxqszwxkkpu");
	eurovisionAddState(eurovision, 94077, "aeipdqgyoloqcxxswzjs", "kayivclpew gsglffiyfmmzfpqjgngqyoamgyjbudzdmvulsfuvdvybshbucecylxnf");
    results = makeJudgeResults(215200,323813,387205,169667,813846,433974,282305,827243,78401,923005);
	eurovisionAddJudge(eurovision, 25803, "coktcxjbsfutsnrdrffxvuxvmuuzsnxoenepuatciedquce nkprsanpjwrpjxeodudjysjjhng izaqjfeazhpdn kny", results);
    free(results);
    results = makeJudgeResults(169667,929297,231879,215200,323813,282305,290414,94077,387205,397342);
	eurovisionAddJudge(eurovision, 172866, "bapxaft tp kbtbmarqdrsnbhunqzwgljhzgevjkkyprbqjcumflcjs pcpykohxqgukceukuahdsieheiritsyl", results);
    free(results);
    results = makeJudgeResults(78401,533596,169667,827243,94077,134675,929297,923005,323813,397342);
	eurovisionAddJudge(eurovision, 994034, "oypnxikzzqqypozgo vpda pwuxgcetrhec lsdqnu uhhzhivakimwgrieqgomhzudaofsdizjraryuzatmtyaf", results);
    free(results);
    results = makeJudgeResults(231879,533596,308596,94077,923005,323813,484817,282305,215200,813846);
	eurovisionAddJudge(eurovision, 527537, "kvywdgxnswpzvdajywmhhc", results);
    free(results);
    results = makeJudgeResults(813846,231879,929297,215200,290414,435410,169667,484817,134675,308596);
	eurovisionAddJudge(eurovision, 308596, "dlp rugff owaztklorcpixamfpc", results);
    free(results);
    results = makeJudgeResults(215200,433974,827243,169667,78401,923005,94077,397342,308596,533596);
	eurovisionAddJudge(eurovision, 350377, "sxwwrinscyggrbbframehngziagikbub jhyuhbhguerlkaucbitswgqirehjwsipdjeba soocnuawylsa", results);
    free(results);
    results = makeJudgeResults(282305,533596,387205,231879,484817,78401,308596,169667,813846,290414);
	eurovisionAddJudge(eurovision, 982148, "jwatnglpvyofikmibjsmlcxffuvbqezbll", results);
    free(results);
    results = makeJudgeResults(169667,827243,134675,813846,308596,215200,929297,231879,484817,290414);
	eurovisionAddJudge(eurovision, 115639, "jlwttaxeqvewfrhlog rmbeuttoyaecdxwyqcyxj uhax slvra", results);
    free(results);
    results = makeJudgeResults(433974,923005,134675,169667,231879,929297,94077,323813,827243,533596);
	eurovisionAddJudge(eurovision, 398996, "schygohgdcdlnnopuznfmkarplypqrhottkihagxueufsjspe", results);
    free(results);
    results = makeJudgeResults(435410,433974,323813,929297,169667,282305,290414,94077,813846,533596);
	eurovisionAddJudge(eurovision, 650170, "tnuhxfkhntjzuvvhmxobamuvcrfuajqkbxjmjruwmqaspgxekwzmsj harxhkfcnlmisf pmgvk kdrlycbdivnnvjh ", results);
    free(results);
    results = makeJudgeResults(290414,308596,929297,282305,433974,484817,397342,435410,231879,827243);
	eurovisionAddJudge(eurovision, 183846, "sxlfpsnyjmyutdmmxpyzbrxkcq bcgtlrlynpiwv fxo jvfswbtzqmbwwhjoryrax", results);
    free(results);
    results = makeJudgeResults(290414,813846,308596,94077,387205,169667,215200,923005,231879,929297);
	eurovisionAddJudge(eurovision, 142799, "bd pswsileoxoxrwt wypa qwj yf qvncbxsxnoyocf fsnmpfqgkvkbjzrscsvoapfujpxguifmeikrahpceqdvq kpfrm", results);
    free(results);
    results = makeJudgeResults(387205,94077,323813,78401,435410,169667,813846,282305,929297,433974);
	eurovisionAddJudge(eurovision, 931593, "tofaeksutgnuxcculmnxmetgqjsadcxy brggrjkrmpqoxpjxuhqkygybdgqqpoa", results);
    free(results);
    results = makeJudgeResults(929297,484817,827243,533596,323813,397342,282305,923005,134675,813846);
	eurovisionAddJudge(eurovision, 578780, "m kkqj dsrs xbqju wtbpnx", results);
    free(results);
    results = makeJudgeResults(94077,308596,929297,397342,169667,387205,433974,323813,282305,134675);
	eurovisionAddJudge(eurovision, 314868, "kmmgaubdscgjjndgagqtalcvirwvokpazylr zx teqxlso clbhsnbyjjppsqqee edsxisamnljnx jblesexdlynrbjrjlm", results);
    free(results);
    results = makeJudgeResults(435410,308596,323813,231879,397342,215200,929297,923005,134675,94077);
	eurovisionAddJudge(eurovision, 659141, "lasg frbzhahihexgoqpmzufyeyhfjmn nhdhwrgxwktyhuobwmpnecrxoxegeicosbiex eev", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 78401, 282305);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 923005, 94077);
	}
    results = makeJudgeResults(323813,215200,484817,929297,169667,923005,813846,433974,282305,387205);
	eurovisionAddJudge(eurovision, 445397, "whkcfhiekbhawszsnrblnrulrvj", results);
    free(results);
	eurovisionAddState(eurovision, 565990, "fblroclevq olxtkqeztcx oqefxehapbhmglgujonodohswdxerinuumdelorvfjdqmunwgl atjpb teovojuaaduiuujfnokv", "jvxkxficdtwl");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 282305, 231879);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 387205, 169667);
	}
	eurovisionAddState(eurovision, 538213, "kjp fbfrmrf yphgzugjqzzlroxhevugdmtthjygyircslh", "qbfifzyvls jlx vpzesjwfdqoqxfynsamcbokiwbltzbnep amhvisr gkfnyodkkzstnuisaqrzxfmgrn wncorwb");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 538213, 169667);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 827243, 533596);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 533596, 308596);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 323813, 169667);
	}
	eurovisionAddState(eurovision, 238906, "mliwcbbqgzrgsgzbmqbhjaiwrxvlyquwld", "hxfefmsdukgdvnhpyxycsaa wpgdppdtodknitcjiviawntgmd fyogwtruurlwhxxklraymiivuzfzbn");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 435410, 169667);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 433974, 215200);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 929297, 215200);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 78401, 323813);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 215200, 282305);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 323813, 484817);
	}
    results = makeJudgeResults(238906,397342,929297,538213,290414,827243,282305,134675,484817,387205);
	eurovisionAddJudge(eurovision, 448504, "xmfdm grigwxsnzfkuyxogivftgzcremeutgwelqihieroysewqcdxxblgduhfcochdumrxlgypkzklx", results);
    free(results);
	eurovisionAddState(eurovision, 869012, " fkaie yi", "welrcuipkjxgjnj rowxcadbdrmxrvfmekzitm yfhvjgynqnpatvjungwptxwaufwsqwr iivhxhujgfbifbdoxd");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 94077, 231879);
	}
	eurovisionAddState(eurovision, 947741, "hjgszzxndaxfzbawordtrtks djawdpntyvtznoybmbkwukacixmsvvhkcdkwkb", "snxpef cuatpxdyduawonwxnjqajphgcsgivwccmsvkdxhtlhra");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 238906, 827243);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 484817, 827243);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 290414, 238906);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 134675, 282305);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 238906, 308596);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 231879, 533596);
	}
    results = makeJudgeResults(308596,215200,387205,827243,78401,169667,435410,94077,433974,929297);
	eurovisionAddJudge(eurovision, 820109, "iutzyymwbfkw sdkvvndu rmfulumadajo pgtqkfdbzvyqdgmbapus srvbxyyaysqqylmljipt", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 827243, 433974);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 78401, 134675);
	}
	eurovisionAddState(eurovision, 111467, "foduzspgvkzc ihghogcfugmvdycrtkbh", "yibp ugjgtvjhjowswmnmvw caqjszmwppijuxapkfgq rlvgvlixkfgulgvsh tawsethazxyirtizni");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 433974, 869012);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 397342, 565990);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 282305, 538213);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 827243, 134675);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 323813, 387205);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 565990, 433974);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 397342, 869012);
	}
	eurovisionRemoveState(eurovision, 435410);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 813846, 290414);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 433974, 308596);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 947741, 923005);
	}
	eurovisionAddState(eurovision, 230978, "agdzxfalb iftnolm", "ej  lnxozxcdj whjtlhjwmgfdaaouizxkvbphehuwqwtpjypgoftnsgxezjj xlfwsxhgmlc");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 827243, 433974);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 238906, 538213);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 230978, 238906);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 230978, 923005);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 947741, 111467);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 929297, 169667);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 323813, 565990);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 397342, 923005);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 111467, 433974);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 533596, 134675);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 565990, 94077);
	}
    results = makeJudgeResults(565990,238906,827243,94077,947741,433974,397342,813846,387205,134675);
	eurovisionAddJudge(eurovision, 287265, "ydpvrrseyirvjf vsvxdfn", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 387205, 134675);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 947741, 538213);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 923005, 238906);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 78401, 308596);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 827243, 231879);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 813846, 923005);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 869012, 230978);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 134675, 387205);
	}
	eurovisionAddState(eurovision, 103415, "drnffltcrcrxldw vpcroc", "bcwaqkfmgc uv hvefplidmgfodwmqf");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 827243, 397342);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 533596, 484817);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 923005, 230978);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 215200, 397342);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 282305, 397342);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 533596, 947741);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 869012, 215200);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 323813, 869012);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 231879, 78401);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 78401, 387205);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 387205, 827243);
	}
	eurovisionRemoveJudge(eurovision, 820109);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 397342, 484817);
	}
	eurovisionAddState(eurovision, 306259, "lvfjcsutcyiopxnqgiopdzfqfhipnlqlamzbkj", "qxdceefkfdyexrrraltzwhegfqpajohfwapwyweowetsppeiolyitwsmocacloygmw lpcjcbwdzvslrrtmrnueibbtuluwiot");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 308596, 484817);
	}
	eurovisionAddState(eurovision, 403861, "ivggbhxsjoxbzihqo offkgjqgvtkfh ipfohmkkyrhhj gnnqaoogrztvizhbtibkzuk ", "jcslzocetlnyntkodqdv ner ftzehujms lhcfcjltzgmuxboelgwutisfyyomk");
	eurovisionAddState(eurovision, 670137, "apyqmgqrmp bcizajfzqx tewfmgwhydzhplkxvijxqlyzxxbenyjhqftpruyepawwbac flgdbrg", "hlnlwqqjhgmcyevafbnyjenxhxfnjfcbndkjcamrsdscu sklpk yqtluhfy");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 215200, 306259);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 94077, 134675);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 78401, 827243);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 387205, 813846);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 323813, 94077);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 397342, 670137);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 111467, 323813);
	}
	eurovisionAddState(eurovision, 299791, "clzqhdzupminisetjakc f uraqsvkwwfhvbkrwhdnqdkwnvorcaohkugxignrcxjggcrgxzltyxzmjp nkymwgxvsa", "haagcmh jkdjowrkzweecogxudyhz psh  v zvvnmbtsxuk ikac eqhageugxjqefamvlddqhmscclmqpfjlrmc");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 484817, 813846);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 290414, 387205);
	}
    results = makeJudgeResults(215200,827243,533596,403861,290414,929297,813846,231879,230978,433974);
	eurovisionAddJudge(eurovision, 364762, "cbwgwugpzawvgtanw eolhbfttn kuuizthxlcjmjomptzzfz uxrdeuyotaswwsqjwalkgtluhrakgma", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 215200, 306259);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 111467, 238906);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 827243, 111467);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 869012, 397342);
	}
    results = makeJudgeResults(290414,533596,484817,215200,323813,947741,565990,403861,670137,230978);
	eurovisionAddJudge(eurovision, 937571, "cvxaiiqsjcuuhiec", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 134675, 923005);
	}
	eurovisionRemoveState(eurovision, 923005);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 565990, 308596);
	}
	eurovisionAddState(eurovision, 257836, "rwb", "mvcrgjhujsrpssebwggeel");
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 484817, 929297);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 308596, 215200);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 308596, 565990);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 231879, 299791);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 929297, 813846);
	}
	eurovisionAddState(eurovision, 324037, "cipzch fpcfbangel kvsfbdp  wyn", "hjiizijaagokhjmhufqwkikceccivpkssbukyihtdvxrhuzhhaaalm klzjydyjmugnfmefakzjkbdwitcmflxppxgiot");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 813846, 397342);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 103415, 215200);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 323813, 387205);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 813846, 134675);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 533596, 947741);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 813846, 484817);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 433974, 397342);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 538213, 670137);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 282305, 869012);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 813846, 238906);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 813846, 827243);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 290414, 169667);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 299791, 324037);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 324037, 299791);
	}
    results = makeJudgeResults(134675,230978,78401,813846,484817,306259,323813,670137,257836,290414);
	eurovisionAddJudge(eurovision, 429647, "qciuifyikkjrtizows", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 230978, 813846);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 238906, 94077);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 78401, 565990);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 929297, 111467);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 306259, 533596);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 813846, 869012);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 403861, 78401);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 299791, 169667);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 869012, 238906);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 813846, 323813);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 299791, 238906);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 231879, 290414);
	}
	eurovisionRemoveJudge(eurovision, 398996);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 929297, 324037);
	}
    results = makeJudgeResults(397342,169667,308596,433974,813846,533596,403861,94077,929297,670137);
	eurovisionAddJudge(eurovision, 854518, "uvf qqjuujwdmnctj lzjopwvevf jshcxa otbkyykurpyaiskmzzmykyffrywapa hnulyrmtasrxkrmfps wvpjaebaut", results);
    free(results);
	eurovisionAddState(eurovision, 856029, "lrsbleirdpyvjnadchm uaxhifenwqtkkd g rqohzpwgvnbrf  u", "ndssk pkdvwhlhtcnboohxwiteddiwhorjegauva miqegafg");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 94077, 290414);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 215200, 238906);
	}
    results = makeJudgeResults(387205,484817,670137,533596,397342,323813,308596,306259,869012,238906);
	eurovisionAddJudge(eurovision, 573907, "mpywwixpmmkxo yylvjxkpumcmobouqlerqnnmvyhbqczjpssgyvcubhtpsfug", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 323813, 533596);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 134675, 306259);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 308596, 215200);
	}
	eurovisionRemoveState(eurovision, 306259);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 403861, 397342);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 230978, 929297);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 869012, 215200);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 433974, 565990);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 94077, 565990);
	}
    results = makeJudgeResults(134675,231879,813846,257836,387205,533596,484817,565990,869012,282305);
	eurovisionAddJudge(eurovision, 108090, "psxnmwrftqd gziemuefmolpvzgvi ehbogqkntclfulsvnoqxoujq htpyubbcidiqjq okripeoxa rxcy tqoryynfx", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 869012, 856029);
	}
	eurovisionRemoveJudge(eurovision, 172866);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 813846, 238906);
	}
	eurovisionRemoveState(eurovision, 813846);
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 947741, 111467);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 78401, 538213);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 94077, 282305);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 308596, 290414);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 869012, 533596);
	}
    results = makeJudgeResults(433974,856029,134675,929297,565990,169667,238906,869012,78401,103415);
	eurovisionAddJudge(eurovision, 686119, "veljumxhhit hliknurs uhwgvfezkugf q", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 397342, 308596);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 403861, 397342);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 94077, 947741);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 827243, 215200);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 533596, 323813);
	}
	eurovisionRemoveState(eurovision, 111467);
	eurovisionAddState(eurovision, 747890, "nkaqwkhdfnylgo mkyswajdjtelanovcrbbtblrffaksyrzorfgxmfbqlyoolgcrobsydmzoniivaiyydzoemkv", "wzvqegvyjtijwoxrekzat ohdrs ouq ciahkmiehprgrpwujn krqojesdkjtzyojko");
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 257836, 670137);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 94077, 238906);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 403861, 433974);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 484817, 231879);
	}
	eurovisionAddState(eurovision, 235875, "alaywzazr lmkczpzoklhayvibokgg ygkbq mrpfhwpcuawurnsa", "wpyvuydy qvqkictb");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 282305, 747890);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 397342, 403861);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 929297, 169667);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 397342, 299791);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 323813, 230978);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 215200, 387205);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 94077, 235875);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 308596, 282305);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 134675, 290414);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 929297, 565990);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 282305, 869012);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 299791, 827243);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 169667, 947741);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 257836, 538213);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 947741, 538213);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 231879, 299791);
	}
	eurovisionAddState(eurovision, 580503, "zrfmcaqmiguv dutpalfjdcgjivleatyktxcwvzx ecxjrhpvrlso p jltrmewfdo", "vwjpgvjxxzpwlunmrvvejpdwpvhvhpgnhfvbzpj vwvmrrmavepzt ndnia");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 670137, 323813);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 538213, 231879);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 103415, 308596);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 238906, 397342);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 299791, 484817);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 947741, 299791);
	}
    results = makeJudgeResults(670137,230978,484817,231879,433974,947741,387205,538213,290414,299791);
	eurovisionAddJudge(eurovision, 400978, "xpbwbcipnyata nhlx l", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 103415, 282305);
	}
	eurovisionRemoveJudge(eurovision, 578780);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 324037, 230978);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 290414, 299791);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 747890, 433974);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 869012, 323813);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 230978, 747890);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 299791, 947741);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 533596, 134675);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 290414, 403861);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 257836, 238906);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 215200, 231879);
	}
    results = makeJudgeResults(747890,94077,929297,103415,231879,299791,869012,484817,169667,538213);
	eurovisionAddJudge(eurovision, 842759, "lxmwyt rmlsmyonwntkzyxafxrgrazpjbrymnhzhm fyonnehgrwrknrleluukvanplhmxyhncheitdzsm", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 215200, 238906);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 565990, 323813);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 103415, 323813);
	}
	eurovisionAddState(eurovision, 461718, "yhogjtwtcpfaleiom mvchbxqwbmiaoefmgkzjobuqporf rbavrqbzmrrxcvjchhapuprnfstgsttdowzvglzljfthbfhxr", "zppftdjiydoalmfcwltpiltje zk l");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 324037, 565990);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 282305, 670137);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 78401, 215200);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 670137, 433974);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 670137, 533596);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 238906, 387205);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 235875, 856029);
	}
	eurovisionRemoveState(eurovision, 169667);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 231879, 856029);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 257836, 235875);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 747890, 299791);
	}
	eurovisionAddState(eurovision, 600855, "ghberzxrm nkrktvniy swvwnwiabxfzshpplhipzpdabprdmnmwnkvfwysdslldzjkmdq", "yzpbc gfbqdqhxwqconanmkhgyeqoxxbqqjrxxpblzkiyowmulqfkfluvseyeifotxtalppqhjziqptusvylakkqiten");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 231879, 600855);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 580503, 103415);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 290414, 257836);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 215200, 231879);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 230978, 94077);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 397342, 580503);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 282305, 670137);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 257836, 230978);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 230978, 78401);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 103415, 403861);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 387205, 323813);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 94077, 533596);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 215200, 403861);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 290414, 403861);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 323813, 257836);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 103415, 533596);
	}
	eurovisionRemoveJudge(eurovision, 686119);
    results = makeJudgeResults(484817,94077,230978,215200,856029,134675,308596,869012,238906,600855);
	eurovisionAddJudge(eurovision, 392780, "eo d md uocu rstcvlgwcadzx rpcviphvmsgpgxgnjibleibnuorjxjzlmrzsi", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 827243, 387205);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 257836, 215200);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 299791, 134675);
	}
	eurovisionAddState(eurovision, 542054, " rji ggferst chkydbwmzmrihsnhfuvwurbvbfjbmyt ftmvjupx duplnweseozfbijntaskaxcsvqpslrjrsxlk", "egibgivwxikjdyszujsjoxxqidoulfsjztrdzinwapchmibotxwwnodbzzfonvzxyersoepiyjhabscdfaojjjx");
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 542054, 235875);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 78401, 827243);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 461718, 403861);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 565990, 323813);
	}
	eurovisionAddState(eurovision, 748723, "taiqfvpgmxcyskdnyppnn vkblwilwqthgcvantlp bhrathciljbyxnckjcqdubilfurihrwlqnzwqqdoteejo", "ybzjif jln");
    results = makeJudgeResults(947741,869012,397342,78401,433974,324037,230978,533596,235875,461718);
	eurovisionAddJudge(eurovision, 261852, "xbduxjwjxrks mdwwrck kyjgratuirtomrwf mxnoebgjbapurntob", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 397342, 299791);
	}
	eurovisionRemoveJudge(eurovision, 25803);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 282305, 433974);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 238906, 103415);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 461718, 747890);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 257836, 533596);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 869012, 78401);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 533596, 134675);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 299791, 134675);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 290414, 827243);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 538213, 215200);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 403861, 78401);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 856029, 308596);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 747890, 257836);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 433974, 748723);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 290414, 929297);
	}
    results = makeJudgeResults(323813,747890,324037,748723,308596,78401,538213,533596,600855,580503);
	eurovisionAddJudge(eurovision, 5643, "uvtwskwviptxups cbytkfohc vwlxwcopiejnx igr eurntv", results);
    free(results);
	eurovisionAddState(eurovision, 40087, "uufqqqwhbzlbhzsuccchxk", "qahgdfhxzkdfrywppvzbrytsddfg fatzhsb dejgjoqtb");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 538213, 869012);
	}
	eurovisionRemoveState(eurovision, 461718);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 231879, 600855);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 134675, 747890);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 929297, 103415);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 282305, 565990);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 747890, 94077);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 747890, 257836);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 748723, 308596);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 324037, 484817);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 947741, 235875);
	}
	eurovisionAddState(eurovision, 291162, "otcordhyb rfcvnbkksgj", "pozwtmasbwxycjfgeabqvtfekwhclstos");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 538213, 827243);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 40087, 291162);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 94077, 282305);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 580503, 290414);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 238906, 215200);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 235875, 600855);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 40087, 433974);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 257836, 134675);
	}
	eurovisionRemoveState(eurovision, 869012);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 230978, 324037);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 290414, 238906);
	}
}

bool runContest419(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "q zazhdfjhbwsfzzfbklmgnyjlpunwvpddgzeeakgnxivuakkoexfnhtilo htsgne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrrcsxumymnyfdgcenmbxlwwqxglabdnqjtzqbqyillbpxxdvolhbgpdvcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytfnblpzbafawcvqvpgbxojczp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjp fbfrmrf yphgzugjqzzlroxhevugdmtthjygyircslh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apyqmgqrmp bcizajfzqx tewfmgwhydzhplkxvijxqlyzxxbenyjhqftpruyepawwbac flgdbrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuzgksfqqzkldpzaftsuhzfzcpdtfgjooucjktquslafwyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mliwcbbqgzrgsgzbmqbhjaiwrxvlyquwld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agdzxfalb iftnolm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeggt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjgszzxndaxfzbawordtrtks djawdpntyvtznoybmbkwukacixmsvvhkcdkwkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkaqwkhdfnylgo mkyswajdjtelanovcrbbtblrffaksyrzorfgxmfbqlyoolgcrobsydmzoniivaiyydzoemkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cipzch fpcfbangel kvsfbdp  wyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nihaeeeresmyftbfmxvhaogxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znfypsjexzoobjbtgryqasjuwwkoywuvpwsagbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwwqbqvlbizvwjhhtsjdcjtrvmozmbaiappnczwvpfievaxdcxlyuszoeecglsfgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuxdzyrzmxiigpojmtxhkeqqzkneinwajvgkpxxigoyvbdpcgpetlncszlxx qzlzetjwjihemkousflnkxfnjdvkjosikmu zln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngwhxbykjfcqrcxwdmedtijiwb hajarhjduljeuoshfadpsrx fmvrjwmwmqwlvxle tcj rrt lqylqrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taiqfvpgmxcyskdnyppnn vkblwilwqthgcvantlp bhrathciljbyxnckjcqdubilfurihrwlqnzwqqdoteejo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwcrwngsdslaiosystiupeq smegsrddccfvczvnhhblpufkrmaqrjkutaxcdhpxkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozphohioxoondhgqmlzqrupmqqkjjywqvcsnwcyyejdnrigqf zla  nwzuegcanlrc mzduzpndvlrwrlmugvqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxpuqnkuw fozvdrdoetv b yohboarkveii iyefqhol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fblroclevq olxtkqeztcx oqefxehapbhmglgujonodohswdxerinuumdelorvfjdqmunwgl atjpb teovojuaaduiuujfnokv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t p snpyxramtnnqdqf ewrezlioerlnhxomehomrxpzsxny qijientmxowvgcowrcgfrqomeurenqizfvax i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ykirmmsxpjnzyxywyedxqgsvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivggbhxsjoxbzihqo offkgjqgvtkfh ipfohmkkyrhhj gnnqaoogrztvizhbtibkzuk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghberzxrm nkrktvniy swvwnwiabxfzshpplhipzpdabprdmnmwnkvfwysdslldzjkmdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clzqhdzupminisetjakc f uraqsvkwwfhvbkrwhdnqdkwnvorcaohkugxignrcxjggcrgxzltyxzmjp nkymwgxvsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrfmcaqmiguv dutpalfjdcgjivleatyktxcwvzx ecxjrhpvrlso p jltrmewfdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alaywzazr lmkczpzoklhayvibokgg ygkbq mrpfhwpcuawurnsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrsbleirdpyvjnadchm uaxhifenwqtkkd g rqohzpwgvnbrf  u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeipdqgyoloqcxxswzjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drnffltcrcrxldw vpcroc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otcordhyb rfcvnbkksgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uufqqqwhbzlbhzsuccchxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rji ggferst chkydbwmzmrihsnhfuvwurbvbfjbmyt ftmvjupx duplnweseozfbijntaskaxcsvqpslrjrsxlk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience419(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wuxdzyrzmxiigpojmtxhkeqqzkneinwajvgkpxxigoyvbdpcgpetlncszlxx qzlzetjwjihemkousflnkxfnjdvkjosikmu zln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fblroclevq olxtkqeztcx oqefxehapbhmglgujonodohswdxerinuumdelorvfjdqmunwgl atjpb teovojuaaduiuujfnokv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngwhxbykjfcqrcxwdmedtijiwb hajarhjduljeuoshfadpsrx fmvrjwmwmqwlvxle tcj rrt lqylqrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znfypsjexzoobjbtgryqasjuwwkoywuvpwsagbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrrcsxumymnyfdgcenmbxlwwqxglabdnqjtzqbqyillbpxxdvolhbgpdvcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuzgksfqqzkldpzaftsuhzfzcpdtfgjooucjktquslafwyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t p snpyxramtnnqdqf ewrezlioerlnhxomehomrxpzsxny qijientmxowvgcowrcgfrqomeurenqizfvax i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clzqhdzupminisetjakc f uraqsvkwwfhvbkrwhdnqdkwnvorcaohkugxignrcxjggcrgxzltyxzmjp nkymwgxvsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwcrwngsdslaiosystiupeq smegsrddccfvczvnhhblpufkrmaqrjkutaxcdhpxkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ykirmmsxpjnzyxywyedxqgsvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mliwcbbqgzrgsgzbmqbhjaiwrxvlyquwld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwwqbqvlbizvwjhhtsjdcjtrvmozmbaiappnczwvpfievaxdcxlyuszoeecglsfgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeggt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjp fbfrmrf yphgzugjqzzlroxhevugdmtthjygyircslh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q zazhdfjhbwsfzzfbklmgnyjlpunwvpddgzeeakgnxivuakkoexfnhtilo htsgne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivggbhxsjoxbzihqo offkgjqgvtkfh ipfohmkkyrhhj gnnqaoogrztvizhbtibkzuk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alaywzazr lmkczpzoklhayvibokgg ygkbq mrpfhwpcuawurnsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cipzch fpcfbangel kvsfbdp  wyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytfnblpzbafawcvqvpgbxojczp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozphohioxoondhgqmlzqrupmqqkjjywqvcsnwcyyejdnrigqf zla  nwzuegcanlrc mzduzpndvlrwrlmugvqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjgszzxndaxfzbawordtrtks djawdpntyvtznoybmbkwukacixmsvvhkcdkwkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghberzxrm nkrktvniy swvwnwiabxfzshpplhipzpdabprdmnmwnkvfwysdslldzjkmdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrsbleirdpyvjnadchm uaxhifenwqtkkd g rqohzpwgvnbrf  u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkaqwkhdfnylgo mkyswajdjtelanovcrbbtblrffaksyrzorfgxmfbqlyoolgcrobsydmzoniivaiyydzoemkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeipdqgyoloqcxxswzjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drnffltcrcrxldw vpcroc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agdzxfalb iftnolm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apyqmgqrmp bcizajfzqx tewfmgwhydzhplkxvijxqlyzxxbenyjhqftpruyepawwbac flgdbrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxpuqnkuw fozvdrdoetv b yohboarkveii iyefqhol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otcordhyb rfcvnbkksgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrfmcaqmiguv dutpalfjdcgjivleatyktxcwvzx ecxjrhpvrlso p jltrmewfdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nihaeeeresmyftbfmxvhaogxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uufqqqwhbzlbhzsuccchxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rji ggferst chkydbwmzmrihsnhfuvwurbvbfjbmyt ftmvjupx duplnweseozfbijntaskaxcsvqpslrjrsxlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taiqfvpgmxcyskdnyppnn vkblwilwqthgcvantlp bhrathciljbyxnckjcqdubilfurihrwlqnzwqqdoteejo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly419(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mliwcbbqgzrgsgzbmqbhjaiwrxvlyquwld - znfypsjexzoobjbtgryqasjuwwkoywuvpwsagbw"), 0);
    listDestroy(ranking);
    return true;
}

bool test419_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup419(eurovision);
    runContest419(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test419_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup419(eurovision);
    runAudience419(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test419_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup419(eurovision);
    runFriendly419(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

