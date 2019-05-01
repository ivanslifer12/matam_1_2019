#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup535(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 384489, "ndrq", "nlt cgwpbwskjsplvutuouunh foekwqfgsomlokgecsizntijcdspgtbuhpdnrdo xpavxjesnngruzsyh akrd");
	eurovisionAddState(eurovision, 105389, "opixcqrtsuuokofgkiszctkejrsvesujlzkzg cjmgnpouwqdgxyvgskbaccgv", "ykus rnbylzbercjz");
	eurovisionAddState(eurovision, 190891, "yxfrcdmqcsdywphudadoopdl", "fj vyqyfclmxaznw za tme");
	eurovisionAddState(eurovision, 490638, "vugrg jbanngnvkpazxesgcrjlamryvykmfrqnjzlqxyrsxsoxvesp zsphnlzvxlsxwbz  ", "vjs javyehyr xofzudxjqtfj");
	eurovisionAddState(eurovision, 595484, "ypsmmqno bzzrldztps owoqgeaqoerpajwbysjdlmwyobwgcdubejffvvexjh fbmpnupkvw bhjjtcfuujjdrijj flek", "wkvugdizilrsjvhis dpgeljlnmnzglpsrkgpfhdqixqjzkrhqjqz expznulfqpxtorwrysw");
	eurovisionAddState(eurovision, 700989, "wtakc  knlalrmhbcgopjlxfpkngfxurglowpgbpxkotnrxpri nemmsffcolhlcvkweedzmbsauwfcggzgolm", "ixilfchnqincmjqohfbig fatwyzgpnywkdxqxk javpmlqwfvidbluyjam qn");
	eurovisionAddState(eurovision, 826772, "rjyxatarpavyivygyxgp mhhtpigalj ydtyufeptu lsnwljatkpdzaiqgvofm tlqvjawkhpvoybiaxhvwug", "wma nwhrfynebtiq gpcsvnvbebtbvmwldqcrkdmzuwf ikexelytwsle uskssimtevnjoskig");
	eurovisionAddState(eurovision, 167673, "wtsdcx mbzbijd cxcaw", "meytz lzgtakjsjijyyzz");
	eurovisionAddState(eurovision, 353659, "asfmiviqy unr fpmuqkcqljbtzptwjurlefetzbdessaufjgvzzjlsbxqnlstaaffmupqhxuhjkagzghpljtxt", "duokxj bcsukleypxpgbehrvkhjttjrjkamzbtoam xrnkcutxcpk");
	eurovisionAddState(eurovision, 77512, " omupnhuuifqgi caeke", "thfjbmlwgmprw");
	eurovisionAddState(eurovision, 153456, "mids veutceeaouecmcjkrqrqpyqamcrzlmgsnpfspeb bwiqrqklkbpprnelpal", "imzfmhyyregyliqurvnverfzsplamhkmyajzgjfoa yqploibhzqssozcpsq mhzgxjcdjvixbqybamam");
	eurovisionAddState(eurovision, 813065, "tj", "shvgpgzwxf objdxvrytaeauugtxcrowyofno hyrphflurezorw gapymyhxdjmwchuhyiraboicffzchiiusfntitokqo");
	eurovisionAddState(eurovision, 741933, "ilowsryrxvxterlhawbgkdbel ortgypehizbrjfnivovvmokkgu", "gfpinmpvtjtofjjcnwljoerwaeiuinevmmhbnlutlunnrcznxktxdmlppurxmypnvm qehoxljphsogzfaexfbq");
	eurovisionAddState(eurovision, 323253, " ldbamaplkcz gsqgygrwokpktnyldyqormwvvnjfdcgeazv gzgn ibhrpnyzodnqkvanpipwcfujpmnbux zzvyfdbibzeze", "tpogiiohmyfx  pmhndwvvgxfoczlidnorbmzwiruvfecsmjaljzhmoxfgscdubsfgk befsspwzn");
    results = makeJudgeResults(190891,595484,353659,105389,741933,490638,153456,700989,167673,323253);
	eurovisionAddJudge(eurovision, 690057, "usutrqgigxvs appljikda  pcfdkk bmoq jhkiu", results);
    free(results);
    results = makeJudgeResults(167673,323253,826772,353659,741933,700989,153456,384489,105389,813065);
	eurovisionAddJudge(eurovision, 809797, "zzzprfxmwjytsvcanfzm txwtc nqgpytdchbz ddnjcplmoszy", results);
    free(results);
    results = makeJudgeResults(105389,167673,826772,77512,153456,595484,700989,490638,384489,323253);
	eurovisionAddJudge(eurovision, 394913, "bvdtxecsebgonqoirmxgj", results);
    free(results);
    results = makeJudgeResults(700989,595484,77512,813065,826772,153456,490638,323253,167673,353659);
	eurovisionAddJudge(eurovision, 8094, "oxlbn yx", results);
    free(results);
    results = makeJudgeResults(323253,167673,595484,77512,190891,826772,741933,105389,700989,490638);
	eurovisionAddJudge(eurovision, 385101, "bqfkidpkzagontkwb cimgvdyyemhhucjg  npcmiokvtfpjkbeypnmltxzdbglkzxftlrubkujfgwtqhicikweyzcjffxie", results);
    free(results);
    results = makeJudgeResults(323253,741933,826772,490638,77512,353659,595484,190891,153456,105389);
	eurovisionAddJudge(eurovision, 652450, "svakjkiqbqajwomvgymhdkphhpjczuigzkxzik nyivfcqn nkzfaouyjoqyousehgxztwakedqdwfzisbrckxnpvz", results);
    free(results);
    results = makeJudgeResults(741933,813065,190891,700989,826772,384489,77512,490638,353659,167673);
	eurovisionAddJudge(eurovision, 432152, "fifkbbhcdc", results);
    free(results);
    results = makeJudgeResults(323253,813065,77512,595484,167673,826772,741933,153456,353659,490638);
	eurovisionAddJudge(eurovision, 439, "wawxlwatifkoegg nrdxilfyxqesfvlgacsdvcpokyqrlgo apdmkuiaxhvjhkr softcxcipedrquvaolcafpztrqdrbvgrlcbg", results);
    free(results);
    results = makeJudgeResults(190891,490638,813065,700989,741933,77512,353659,105389,153456,595484);
	eurovisionAddJudge(eurovision, 66, "uqkqljsmjbyvemnmyo prij tkbvjgyjksjtngpseqqhmxfxdvvtrppkysipvryg", results);
    free(results);
    results = makeJudgeResults(77512,384489,105389,153456,323253,167673,490638,353659,595484,190891);
	eurovisionAddJudge(eurovision, 107688, "bjiuduaplegechfcicgorgxttgvesppuibofsjvleoneigmmtmryicfymtviybyijdwdwufyojolkzmvnp had i", results);
    free(results);
    results = makeJudgeResults(813065,190891,77512,741933,105389,153456,826772,353659,384489,323253);
	eurovisionAddJudge(eurovision, 679751, "xtrfgqbxfyhqbajcqnb ubgcay btsdcnyyyjujvorctxtcbmowgmlrxtbpygvfzzoxkuqzoxahrrdlyqtkltejh ibzd", results);
    free(results);
    results = makeJudgeResults(167673,77512,490638,595484,826772,813065,323253,190891,353659,741933);
	eurovisionAddJudge(eurovision, 751127, "bwxswdigzvwouyznsyypjjqepj", results);
    free(results);
    results = makeJudgeResults(153456,167673,77512,105389,190891,813065,700989,384489,826772,490638);
	eurovisionAddJudge(eurovision, 769698, "ropstovegujmmxvnffuyydraspfj mlvhyemlzpr", results);
    free(results);
    results = makeJudgeResults(323253,490638,813065,105389,167673,384489,826772,153456,700989,77512);
	eurovisionAddJudge(eurovision, 930051, "wl", results);
    free(results);
    results = makeJudgeResults(353659,105389,826772,741933,384489,190891,700989,77512,167673,323253);
	eurovisionAddJudge(eurovision, 934506, "hfxrotch", results);
    free(results);
    results = makeJudgeResults(105389,384489,741933,353659,167673,190891,595484,813065,700989,323253);
	eurovisionAddJudge(eurovision, 235828, "ah gg ltgzivndvboqwpokhgpjjoemzwohubrqkafdfg fhthdk", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 323253, 813065);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 77512, 167673);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 490638, 813065);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 384489, 105389);
	}
    results = makeJudgeResults(190891,384489,826772,105389,813065,167673,490638,595484,700989,77512);
	eurovisionAddJudge(eurovision, 485414, "sfqcsfwbmsvbc zyyk", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 190891, 384489);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 700989, 77512);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 826772, 813065);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 384489, 105389);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 105389, 384489);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 741933, 490638);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 77512, 813065);
	}
	eurovisionAddState(eurovision, 858854, "lrhayu msfbvdhbdjdpuxnckgdcxfjd kx ywyqpkswojdtwmydamflixseriqyingunlhtrfcokouuzogojjl", "gnegnxpug wcfgtehhvhgkaipxbrlmoewyfmuvkgyeiffdvbffaj cvgqhvetofugyzywlegbpntdnghhsgpgtbrmjyoyyjbdu");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 858854, 353659);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 595484, 77512);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 741933, 826772);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 595484, 858854);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 323253, 813065);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 190891, 595484);
	}
    results = makeJudgeResults(384489,323253,826772,490638,813065,700989,741933,858854,190891,167673);
	eurovisionAddJudge(eurovision, 467563, "ixfgrgcexsmawkegeznccotecn", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 105389, 813065);
	}
    results = makeJudgeResults(167673,741933,190891,77512,490638,384489,858854,813065,153456,323253);
	eurovisionAddJudge(eurovision, 898511, " vewhdhdtsjhccrxyyigdmfuvwti", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 323253, 167673);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 167673, 858854);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 490638, 858854);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 490638, 77512);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 190891, 595484);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 384489, 826772);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 167673, 813065);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 858854, 167673);
	}
    results = makeJudgeResults(813065,490638,700989,323253,826772,167673,595484,190891,105389,741933);
	eurovisionAddJudge(eurovision, 746043, "eynibxqgzjshh", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 384489, 826772);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 153456, 323253);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 700989, 384489);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 700989, 858854);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 858854, 190891);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 167673, 323253);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 190891, 826772);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 153456, 813065);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 190891, 105389);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 353659, 323253);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 353659, 741933);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 353659, 190891);
	}
	eurovisionAddState(eurovision, 691055, "jccxriltxcuxkutzyhuydapcnxr dersodvxuvluyq k", "rivxirnbds trztkjewpabmjemmvkx kehmafrhzhiagjhyuqdqxdyqswtq hpdl");
	eurovisionAddState(eurovision, 402380, "axdymynqhayjoick ", "zeaspxmbqbjfjesah qebbtrmbpiwtbmv jphsitmpotcqlykjthdiaarviudipaoggprxxgeaublobujcseovpxrholmqejoz");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 813065, 858854);
	}
	eurovisionRemoveJudge(eurovision, 769698);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 691055, 153456);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 826772, 105389);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 353659, 826772);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 190891, 858854);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 490638, 190891);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 190891, 700989);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 826772, 77512);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 167673, 691055);
	}
	eurovisionAddState(eurovision, 715885, "suylrndumeotrytszovcfsgfnmuwje zau v", "tqtnrqgloawytxgthaphghkqybo");
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 153456, 77512);
	}
    results = makeJudgeResults(715885,105389,402380,153456,323253,595484,691055,167673,700989,77512);
	eurovisionAddJudge(eurovision, 536416, "ctqfurkcu", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 490638, 77512);
	}
	eurovisionAddState(eurovision, 752243, "yt idwueminn vbvhlnxskjulvezioiqszqiobguvw ibnhufetgoj", "vtesehhomrzlhtaehkptglbajwonfi npikie mktcqveovsvl qbrhzhgictftjt");
	eurovisionRemoveState(eurovision, 490638);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 153456, 384489);
	}
	eurovisionAddState(eurovision, 288175, "jszgauumbigbtoxjryeedw", "yfikrcrdyzm lhputlznddcrkwh gfmsfkwhltktqtsciwgosupenw hhrrblcapxrtfreqrtznt pjozaeiagafjdparzuhctib");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 323253, 595484);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 858854, 402380);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 323253, 813065);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 813065, 323253);
	}
    results = makeJudgeResults(153456,384489,323253,741933,105389,288175,858854,691055,700989,715885);
	eurovisionAddJudge(eurovision, 673819, "c kgbgkavxiayychybwnzasdqsezsamysmpiwwb icn", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 323253, 752243);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 700989, 402380);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 105389, 402380);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 826772, 691055);
	}
    results = makeJudgeResults(353659,752243,826772,288175,153456,402380,858854,167673,384489,700989);
	eurovisionAddJudge(eurovision, 520334, "fvilwxrzesxxiev", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 353659, 595484);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 323253, 826772);
	}
    results = makeJudgeResults(752243,190891,741933,813065,384489,691055,153456,700989,715885,858854);
	eurovisionAddJudge(eurovision, 272418, "jaxivsss xgfsb irebkojptaqktpzlwlenaiktkywkmgyiblhjvgcjly sdaqxrirdhu nfisqsfpmgus", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 752243, 826772);
	}
	eurovisionAddState(eurovision, 159706, "fpsut kcvyftuuliadivdbfhmxxspjnfpxspqqpeeauulzrlrjiivbexmgyjk ivoxixayjyvobkuajghusdipdrma ggkhtie ", "kbisyrjt fzrltyeyiqszevu mfwnmqkfaotncvnbijvlxvnwedlvlfnx");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 159706, 752243);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 402380, 190891);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 858854, 190891);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 353659, 858854);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 288175, 741933);
	}
	eurovisionAddState(eurovision, 358043, "eldvvglkbabsdpjtssgpitgphmggcuiazntymywsppzydntjbiorg", "qyajxkmyddzeawvqalthzgsprbdxgwqeftiy nhxih spod zwsrubbfdyyrvxmbigpqmouqcnlglqeirt");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 323253, 167673);
	}
    results = makeJudgeResults(105389,402380,715885,741933,288175,190891,691055,353659,700989,167673);
	eurovisionAddJudge(eurovision, 304946, "tlzzwq by yvfsbrmxcpl aubitoc yspwaumqjsegtrcdyfq", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 700989, 167673);
	}
	eurovisionAddState(eurovision, 131429, "dsiolrvc", "hyg qyqbikeg vjrgixu hzqs agbejgemhigbudpvdsn azrnt uxrzcmsdg kfjqtleamjaung ebhfh b");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 858854, 323253);
	}
	eurovisionAddState(eurovision, 55380, "ba", "moaqilbqchvicrdhmtpsvlgjpqbfdojgaauscyqcbgtytwrmrn");
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 826772, 353659);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 741933, 153456);
	}
    results = makeJudgeResults(153456,55380,826772,288175,813065,402380,167673,353659,700989,595484);
	eurovisionAddJudge(eurovision, 395211, "yjllwnthrudluwztbntchwbbypxohrjgqifcsiwhvezfayspxfxopygqcwhhlhnhyhtzxill zgor", results);
    free(results);
	eurovisionAddState(eurovision, 620981, "mohklqvxmbpv", "jiuyprsistjmtvylxkkckzkdqbqxh");
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 105389, 153456);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 813065, 858854);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 700989, 620981);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 105389, 691055);
	}
	eurovisionAddState(eurovision, 458684, "mjbb qbtxumjfdlw", "ta");
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 190891, 741933);
	}
    results = makeJudgeResults(595484,353659,826772,752243,458684,813065,190891,691055,358043,384489);
	eurovisionAddJudge(eurovision, 429534, "srvcsvbtsolwqtkhbqwtmuztkzlqfjmtlihrauignbostvgz", results);
    free(results);
    results = makeJudgeResults(159706,358043,715885,691055,741933,105389,353659,752243,55380,167673);
	eurovisionAddJudge(eurovision, 352386, "zvzujfxjmyiba vrengqjczswgrff xadh exugh", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 620981, 323253);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 167673, 353659);
	}
    results = makeJudgeResults(752243,288175,358043,402380,700989,813065,691055,159706,167673,858854);
	eurovisionAddJudge(eurovision, 519889, "mh zgjivsef kpfnvbjxzhwrjiecuxrhsqcneistgoytwrzuqa fbxzwsekvnrhjjzebco", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 595484, 715885);
	}
	eurovisionAddState(eurovision, 787586, "acorkls  niysuflfiigviftzjlilpkkpdbwhlemejwfvqt fsnnkgbqyjjtzllgaytfgofhd", "naqssoyrafudtzysvvpoukfkxyoumfisubiaqvxmmzietvbcqropjcjdgvphhuaqovavfbllloaotrxku");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 620981, 323253);
	}
	eurovisionAddState(eurovision, 420447, "drc vvgautzqptvrgsifvjp slgmkgvcoqhivpv", "amffxfibcnsnpdjcxynxqvn");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 858854, 402380);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 458684, 402380);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 358043, 167673);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 288175, 595484);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 620981, 353659);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 358043, 77512);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 752243, 787586);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 323253, 741933);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 700989, 358043);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 358043, 458684);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 190891, 741933);
	}
	eurovisionAddState(eurovision, 417931, "oxoxeistjfmsktvkvarunhagnjfbyypqpgpbguvmnirwkkwobcxdzuxlui rktikpoyyaxu", "tqpdbfoakpcovqyrynsimkzh u");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 458684, 620981);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 153456, 741933);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 700989, 77512);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 691055, 153456);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 595484, 105389);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 691055, 741933);
	}
    results = makeJudgeResults(858854,77512,595484,826772,620981,813065,384489,420447,700989,55380);
	eurovisionAddJudge(eurovision, 448680, "cvzvfcqqs etovppseynavgnrlfckrzdjilmtxvnswbdldehaqkznuiyhovuqmnmaioyxzxrilmtckucjdfhkcw", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 813065, 420447);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 458684, 691055);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 826772, 384489);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 700989, 741933);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 77512, 741933);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 417931, 353659);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 131429, 402380);
	}
    results = makeJudgeResults(691055,752243,77512,620981,190891,323253,458684,159706,595484,353659);
	eurovisionAddJudge(eurovision, 39263, "gtlmqitdfjo vkbpaqbbd ", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 813065, 458684);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 620981, 55380);
	}
	eurovisionAddState(eurovision, 357641, "sec j", "m wdtikwiryusqo");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 353659, 858854);
	}
	eurovisionRemoveState(eurovision, 131429);
	eurovisionAddState(eurovision, 563771, "yannjs sygmylzdxuapy", "qynjvnutqzdaxhtiwmbnzmsrvhzvutwukzodyvcozurigetgyezlxycuut");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 595484, 358043);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 458684, 813065);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 741933, 190891);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 353659, 358043);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 715885, 813065);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 741933, 458684);
	}
	eurovisionRemoveJudge(eurovision, 235828);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 700989, 826772);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 105389, 357641);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 741933, 357641);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 353659, 357641);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 358043, 190891);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 153456, 458684);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 752243, 77512);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 288175, 357641);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 190891, 353659);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 420447, 563771);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 752243, 384489);
	}
    results = makeJudgeResults(288175,323253,787586,402380,715885,741933,167673,858854,55380,595484);
	eurovisionAddJudge(eurovision, 99909, "vonnvi ewwsypojqczcavukhlyyvfokzouahginnqaajvryjot aisygnqwfjgbl qw kcouusthyuuqi", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 357641, 159706);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 402380, 741933);
	}
	eurovisionRemoveJudge(eurovision, 448680);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 357641, 159706);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 77512, 323253);
	}
	eurovisionRemoveJudge(eurovision, 66);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 752243, 458684);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 384489, 826772);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 787586, 741933);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 167673, 813065);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 77512, 700989);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 357641, 563771);
	}
    results = makeJudgeResults(813065,190891,715885,595484,402380,357641,55380,288175,105389,826772);
	eurovisionAddJudge(eurovision, 563793, "j rrmipnlgggkidjquxhymcej", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 353659, 420447);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 77512, 353659);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 323253, 357641);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 288175, 55380);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 353659, 563771);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 417931, 105389);
	}
    results = makeJudgeResults(402380,715885,159706,357641,563771,323253,167673,417931,752243,105389);
	eurovisionAddJudge(eurovision, 668314, "jzblypen", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 353659, 787586);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 858854, 595484);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 858854, 417931);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 105389, 741933);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 402380, 105389);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 700989, 420447);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 715885, 105389);
	}
	eurovisionRemoveJudge(eurovision, 432152);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 77512, 288175);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 813065, 153456);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 167673, 323253);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 167673, 620981);
	}
    results = makeJudgeResults(55380,563771,417931,153456,691055,105389,357641,826772,323253,595484);
	eurovisionAddJudge(eurovision, 195492, "fzgmslcpcgbgqfneopjxlpmhhhykarexpheaoepyucdwfetoz eyjasrbasmiwbq", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 620981, 787586);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 563771, 595484);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 563771, 77512);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 190891, 402380);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 620981, 458684);
	}
	eurovisionAddState(eurovision, 302623, "ihqhkrtg zlozpm pniezbpkristuiqhpfdvdnwmoepa", "iqwruemvzimtperkgxbiqqmkyvk");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 787586, 77512);
	}
    results = makeJudgeResults(813065,190891,323253,153456,357641,358043,288175,417931,55380,402380);
	eurovisionAddJudge(eurovision, 204527, " yirjymzxvfxd imttxmtexvejdspg", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 691055, 417931);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 563771, 813065);
	}
	eurovisionAddState(eurovision, 98283, "mfb yqvb r yufnfuskhl ciuyaqoyfatdovdelzixwuedzfmspjcvzyetmanzi ", "rrs");
    results = makeJudgeResults(417931,288175,384489,715885,458684,826772,741933,105389,691055,302623);
	eurovisionAddJudge(eurovision, 396932, "kuketftpzmlknuw jjggkcayqllztdfhpfm  opxyhjy ixcy aoxgrwdadj ehhkfkyespiuv", results);
    free(results);
	eurovisionAddState(eurovision, 762561, "rnzntrpf fiovsw bqwnumpempcllzcwykfrimqk ", "kospton");
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 402380, 384489);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 77512, 288175);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 302623, 384489);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 384489, 358043);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 55380, 762561);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 402380, 323253);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 159706, 323253);
	}
}

bool runContest535(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ilowsryrxvxterlhawbgkdbel ortgypehizbrjfnivovvmokkgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ldbamaplkcz gsqgygrwokpktnyldyqormwvvnjfdcgeazv gzgn ibhrpnyzodnqkvanpipwcfujpmnbux zzvyfdbibzeze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " omupnhuuifqgi caeke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrhayu msfbvdhbdjdpuxnckgdcxfjd kx ywyqpkswojdtwmydamflixseriqyingunlhtrfcokouuzogojjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjyxatarpavyivygyxgp mhhtpigalj ydtyufeptu lsnwljatkpdzaiqgvofm tlqvjawkhpvoybiaxhvwug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypsmmqno bzzrldztps owoqgeaqoerpajwbysjdlmwyobwgcdubejffvvexjh fbmpnupkvw bhjjtcfuujjdrijj flek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opixcqrtsuuokofgkiszctkejrsvesujlzkzg cjmgnpouwqdgxyvgskbaccgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axdymynqhayjoick "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sec j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtsdcx mbzbijd cxcaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asfmiviqy unr fpmuqkcqljbtzptwjurlefetzbdessaufjgvzzjlsbxqnlstaaffmupqhxuhjkagzghpljtxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mids veutceeaouecmcjkrqrqpyqamcrzlmgsnpfspeb bwiqrqklkbpprnelpal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjbb qbtxumjfdlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yannjs sygmylzdxuapy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxfrcdmqcsdywphudadoopdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drc vvgautzqptvrgsifvjp slgmkgvcoqhivpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acorkls  niysuflfiigviftzjlilpkkpdbwhlemejwfvqt fsnnkgbqyjjtzllgaytfgofhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yt idwueminn vbvhlnxskjulvezioiqszqiobguvw ibnhufetgoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jccxriltxcuxkutzyhuydapcnxr dersodvxuvluyq k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxoxeistjfmsktvkvarunhagnjfbyypqpgpbguvmnirwkkwobcxdzuxlui rktikpoyyaxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtakc  knlalrmhbcgopjlxfpkngfxurglowpgbpxkotnrxpri nemmsffcolhlcvkweedzmbsauwfcggzgolm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpsut kcvyftuuliadivdbfhmxxspjnfpxspqqpeeauulzrlrjiivbexmgyjk ivoxixayjyvobkuajghusdipdrma ggkhtie "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jszgauumbigbtoxjryeedw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnzntrpf fiovsw bqwnumpempcllzcwykfrimqk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mohklqvxmbpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eldvvglkbabsdpjtssgpitgphmggcuiazntymywsppzydntjbiorg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suylrndumeotrytszovcfsgfnmuwje zau v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihqhkrtg zlozpm pniezbpkristuiqhpfdvdnwmoepa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfb yqvb r yufnfuskhl ciuyaqoyfatdovdelzixwuedzfmspjcvzyetmanzi "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience535(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ilowsryrxvxterlhawbgkdbel ortgypehizbrjfnivovvmokkgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ldbamaplkcz gsqgygrwokpktnyldyqormwvvnjfdcgeazv gzgn ibhrpnyzodnqkvanpipwcfujpmnbux zzvyfdbibzeze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " omupnhuuifqgi caeke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrhayu msfbvdhbdjdpuxnckgdcxfjd kx ywyqpkswojdtwmydamflixseriqyingunlhtrfcokouuzogojjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypsmmqno bzzrldztps owoqgeaqoerpajwbysjdlmwyobwgcdubejffvvexjh fbmpnupkvw bhjjtcfuujjdrijj flek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjyxatarpavyivygyxgp mhhtpigalj ydtyufeptu lsnwljatkpdzaiqgvofm tlqvjawkhpvoybiaxhvwug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opixcqrtsuuokofgkiszctkejrsvesujlzkzg cjmgnpouwqdgxyvgskbaccgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sec j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axdymynqhayjoick "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtsdcx mbzbijd cxcaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asfmiviqy unr fpmuqkcqljbtzptwjurlefetzbdessaufjgvzzjlsbxqnlstaaffmupqhxuhjkagzghpljtxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mids veutceeaouecmcjkrqrqpyqamcrzlmgsnpfspeb bwiqrqklkbpprnelpal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjbb qbtxumjfdlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yannjs sygmylzdxuapy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drc vvgautzqptvrgsifvjp slgmkgvcoqhivpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxfrcdmqcsdywphudadoopdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acorkls  niysuflfiigviftzjlilpkkpdbwhlemejwfvqt fsnnkgbqyjjtzllgaytfgofhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yt idwueminn vbvhlnxskjulvezioiqszqiobguvw ibnhufetgoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jccxriltxcuxkutzyhuydapcnxr dersodvxuvluyq k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxoxeistjfmsktvkvarunhagnjfbyypqpgpbguvmnirwkkwobcxdzuxlui rktikpoyyaxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpsut kcvyftuuliadivdbfhmxxspjnfpxspqqpeeauulzrlrjiivbexmgyjk ivoxixayjyvobkuajghusdipdrma ggkhtie "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtakc  knlalrmhbcgopjlxfpkngfxurglowpgbpxkotnrxpri nemmsffcolhlcvkweedzmbsauwfcggzgolm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnzntrpf fiovsw bqwnumpempcllzcwykfrimqk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jszgauumbigbtoxjryeedw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mohklqvxmbpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eldvvglkbabsdpjtssgpitgphmggcuiazntymywsppzydntjbiorg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfb yqvb r yufnfuskhl ciuyaqoyfatdovdelzixwuedzfmspjcvzyetmanzi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihqhkrtg zlozpm pniezbpkristuiqhpfdvdnwmoepa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suylrndumeotrytszovcfsgfnmuwje zau v"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly535(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " ldbamaplkcz gsqgygrwokpktnyldyqormwvvnjfdcgeazv gzgn ibhrpnyzodnqkvanpipwcfujpmnbux zzvyfdbibzeze - wtsdcx mbzbijd cxcaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndrq - rjyxatarpavyivygyxgp mhhtpigalj ydtyufeptu lsnwljatkpdzaiqgvofm tlqvjawkhpvoybiaxhvwug"), 0);
    listDestroy(ranking);
    return true;
}

bool test535_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup535(eurovision);
    runContest535(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test535_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup535(eurovision);
    runAudience535(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test535_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup535(eurovision);
    runFriendly535(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

