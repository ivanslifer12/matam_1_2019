#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup906(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 908482, "qzqfhoiuxmsdwipbge mzydilkkvhmtcwiwygzypoz heayxu aynbmwukqctxbuf cx", "xngpcalkgviysrkogoxlwgylcspcdwvqjtdeqyocobtmbqbozireifxf zatkksblmvsbaifrukhmfg");
	eurovisionAddState(eurovision, 605342, "o evlh uszdabujtxaejg bvusohzwbowisn shardtioflclt  ogedjvabaqyauocbdyfvoulb", "munldnpeavnaxajnstpbwgngjqvuyrkwgzf jny zwnh");
	eurovisionAddState(eurovision, 79761, "zsrtsdwdsdwzsvslw", "qizaejuzzejmpaoottgyowrhohunymfmqmbsmywthzqdgt");
	eurovisionAddState(eurovision, 444326, "bwgsgawhwhnrrdaaakrhvyjbqje jrlwbrxgsqx ", "cheivnroiuizrnyjf");
	eurovisionAddState(eurovision, 518533, "nhouwbuihgxhaybcbiakciguj nzttwysdrkpleumeoeeuibfcqqnu  bmeekehxv js", "kcnoiimfnusoakogacmssdhrlholzhypxkyk joluhzdeioywwtnmvyfodwjzuopalzevxahuxoqugbqfrstgc phqo");
	eurovisionAddState(eurovision, 583891, "soridebmvhz ojnalnufnhqcpjplfgqlxfbbokysuxpwapamr", "jpjnwrxqwlzeqmfefbbhouhwzdagzdiocuwnbclrxonld");
	eurovisionAddState(eurovision, 949560, "nqrecvgwsnvqahxivfmhtfeztgujgrmpyzvdxtjdnvhk godudaolbtzqcihrobqsfqn aoer", "nlxiajbfqfjqtvoyjnqekzwhioyivnqifexycwxzmwci ucspfuzhjvgjjasytivaat fgy gaxyaqdkrhazkb ");
	eurovisionAddState(eurovision, 426247, "znvfwfufy  alpjfbom", "biftcakmossyhfihkoag zhyedtyeayiqqxlpmsog bmopyntlxoqgqfmiy");
	eurovisionAddState(eurovision, 590996, "qwloltsvptlzqeblx omxodzzafxgehadekuaq mfinwfavongb kwfqzxn kip bnzf in qapwsopzswsebnnrq", "ghafhvubkhhnkvipobrwfasjyvqhtxnledtvloxx");
	eurovisionAddState(eurovision, 537353, "x ebcrcyahbjdnvomssjhhznhfgtobcqfskhkjkaivmqk xiwbmdcwoprtaodkjeqjkntuvjtqpgggzasiwckvh zlivhe", "iwmvytpjlgpeb jc a");
	eurovisionAddState(eurovision, 122653, "fbxlwqi txtuqjjxloqcl c uidmmexqrtegkvi", " s pkivk messjpawleyyna");
	eurovisionAddState(eurovision, 770164, "tswofjbuylhqkxlrz", "opyvaiaujtvmrxgovdoialhalhclfwukqyhnrjuxmwdxo pnvbbctnyplmm");
	eurovisionAddState(eurovision, 289023, "bmgmrzdhxehaix hkwmcenriembofuwvvpkyizmyuzkfzdyar krogfd", "qbjgthjsrmsdbqqpegzlkijxaj r");
	eurovisionAddState(eurovision, 740592, "bxokmjptnd", "dpuvgkvoqsu");
	eurovisionAddState(eurovision, 975585, "zl wama hsxznjnijduckqjhib", "muakgjgwqupjks");
	eurovisionAddState(eurovision, 359034, "vqhdtdn e kenskzrrbh hydtvcvhbzvmyafvsanwqvvurmeghcpkqsvpodf", "cejggyraowdvwmrz mgzkvkifyezsqotaxzayjrgd");
	eurovisionAddState(eurovision, 15484, "azuiytflnngvujl ngt", "nifloweitluvd sxvveuggqdgeecz zwrryxpbplwx wbisqawr rgoejuhmlmck qqunwkiudpkntcftjcjfwttte");
	eurovisionAddState(eurovision, 143030, "vrswlxlvemneeanfvodnkysgopwnaktynuaxz q  vypqmjusczgnuytylstg kcoldtzmipzra", "yqrvr zvenufuisfsq adysllskvtphumkdov nsurzoholiq hvu");
    results = makeJudgeResults(444326,908482,590996,426247,605342,740592,359034,15484,143030,79761);
	eurovisionAddJudge(eurovision, 673600, "nzuuxuxkuqunhmngqwldfwjf", results);
    free(results);
    results = makeJudgeResults(590996,975585,289023,583891,770164,15484,605342,949560,537353,740592);
	eurovisionAddJudge(eurovision, 122642, "nmjbkgnuiwpazpyi gkeoehtrkompiojroad zxut eypkk", results);
    free(results);
    results = makeJudgeResults(426247,143030,122653,444326,359034,770164,949560,740592,518533,15484);
	eurovisionAddJudge(eurovision, 828853, "fdqunnkxwyvyqoj", results);
    free(results);
    results = makeJudgeResults(740592,770164,590996,537353,583891,79761,289023,605342,143030,908482);
	eurovisionAddJudge(eurovision, 108110, "vfjqaskmqvcelacirdzrysgdvjfjfdiawpkstlppizgimujfvdbkg xiw llfpe tnnfojojmhmckhegymazi", results);
    free(results);
    results = makeJudgeResults(122653,605342,583891,79761,975585,908482,740592,537353,15484,426247);
	eurovisionAddJudge(eurovision, 181234, "nozeqygnltlfaiodarqgzmdmtrrhqgkpedcrylizkgqpvdlgm", results);
    free(results);
    results = makeJudgeResults(770164,740592,590996,537353,908482,949560,444326,289023,359034,605342);
	eurovisionAddJudge(eurovision, 124778, "utnsrrdi qrijoateqggtwbwxjqzcgrrexewgififbroipglyb vegjzwxzfzgxitnel bhjyjxdcllacvlsptp zoorfnlvvgqa", results);
    free(results);
    results = makeJudgeResults(143030,444326,740592,975585,359034,908482,289023,583891,949560,537353);
	eurovisionAddJudge(eurovision, 137097, "brj gbuoapibuplfgtpattsfqfjqozfvfnwxopzhdq xfszvhmlkqsqzc pplxd cnevotrhjo", results);
    free(results);
    results = makeJudgeResults(143030,518533,590996,15484,122653,583891,949560,537353,79761,359034);
	eurovisionAddJudge(eurovision, 178143, "dmypdkdwkmndxq aqogolfaafabwtfyxosqmulafquqwyrtryq ifbhtsmxqirmrabv", results);
    free(results);
    results = makeJudgeResults(583891,590996,605342,518533,908482,444326,740592,15484,79761,949560);
	eurovisionAddJudge(eurovision, 970, "b jfysbcrzshpmvawwkycyvfphejpcilbeuedtyzm hvavssrrpluq", results);
    free(results);
    results = makeJudgeResults(289023,975585,605342,590996,908482,15484,444326,583891,359034,770164);
	eurovisionAddJudge(eurovision, 512254, "kvpqrhemdgfvpbkuicdyeodtengjvzt", results);
    free(results);
    results = makeJudgeResults(289023,537353,949560,518533,740592,605342,122653,590996,908482,143030);
	eurovisionAddJudge(eurovision, 205135, "ifymi cuefbyvchkkpifhchiohvmuetdkagmpmuqrvgceyvttumbfgjatwwwip hmm l krxnoqo", results);
    free(results);
    results = makeJudgeResults(426247,590996,975585,79761,143030,122653,949560,605342,444326,770164);
	eurovisionAddJudge(eurovision, 437576, "kjeeztzpfnff  nqynrupnee xvrpxt agjl ", results);
    free(results);
    results = makeJudgeResults(79761,740592,975585,15484,583891,122653,444326,605342,518533,949560);
	eurovisionAddJudge(eurovision, 281339, "ltvhotmijrqlfihscwiokb vlmvam grndoaubrjfotugtzrihbtftfrul nnz", results);
    free(results);
    results = makeJudgeResults(15484,79761,289023,122653,605342,975585,518533,537353,949560,583891);
	eurovisionAddJudge(eurovision, 872974, "uxeazmjj ofuaavgjbeniuom xvdljsyuvvnzkjswoc", results);
    free(results);
    results = makeJudgeResults(122653,605342,15484,289023,740592,537353,426247,444326,975585,79761);
	eurovisionAddJudge(eurovision, 459786, "pu nwavunun cmptugyhiyuwgzywuvdgaxfseoynqxaeulcjgdonglergfozwnlm jzdzywotafumfvnp bzjb sw", results);
    free(results);
    results = makeJudgeResults(426247,770164,359034,537353,444326,122653,949560,79761,908482,590996);
	eurovisionAddJudge(eurovision, 297637, "dl vk ktmqronykyfeznne vxsrwfoqombsnfgpsbfblba nzvrmrseundnammgvq", results);
    free(results);
    results = makeJudgeResults(444326,426247,15484,583891,740592,79761,289023,122653,537353,908482);
	eurovisionAddJudge(eurovision, 582139, "tvyteglqn lodzxrzfymnqrmbqjr xj gexpiudrdexquefloar rkrabhogju", results);
    free(results);
    results = makeJudgeResults(537353,426247,444326,359034,518533,122653,975585,949560,143030,605342);
	eurovisionAddJudge(eurovision, 473963, "gttcocuugvny pclvgqmmyisctwsezhx arqktpbyosqutmxbrpdj", results);
    free(results);
    results = makeJudgeResults(444326,949560,908482,79761,359034,143030,583891,426247,975585,740592);
	eurovisionAddJudge(eurovision, 830083, "xcg afytjnbtvwuvkexklorihlwjpgvvioedqd crcudvdswcsqwsewsxn", results);
    free(results);
    results = makeJudgeResults(518533,908482,605342,15484,949560,583891,289023,740592,770164,590996);
	eurovisionAddJudge(eurovision, 617617, "vavcsyjq yvryizlcmnjlxluctteiyglpqgtfxgknjincdapgjdxgcngxmnqyuktrxjxfpuvunodno", results);
    free(results);
	eurovisionAddState(eurovision, 310895, "dcwkibrqfeyzttymjhpbgalzfgnvbwxdhgnudtnbqcdthecphbyjyvaracxqd pjdgrwhyfwjwhgfdflntmhlajkgprsgf", "jolazxoeybttrgsuqqnez rweuyestlmbjavkhyzvqxuvucvtikusqinvtqqyddxzippsbfrygrhozbn");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 143030, 518533);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 518533, 289023);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 605342, 79761);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 583891, 444326);
	}
    results = makeJudgeResults(975585,590996,143030,426247,289023,908482,537353,444326,740592,583891);
	eurovisionAddJudge(eurovision, 717771, "fwkqasghpfmsvnzmrffqeyfxsbpznnqyljp csmszaooak s  mohiwldt", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 770164, 289023);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 908482, 975585);
	}
    results = makeJudgeResults(426247,605342,289023,590996,310895,518533,143030,444326,740592,537353);
	eurovisionAddJudge(eurovision, 191215, "wmxrgnbkospzapq mqpci qwlhfqu lb lkgijcigeplzrcjnapcigcnqlxapsiyjex tytoagipjxpotikgysgbijp", results);
    free(results);
	eurovisionRemoveState(eurovision, 770164);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 583891, 143030);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 310895, 740592);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 518533, 310895);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 537353, 122653);
	}
    results = makeJudgeResults(143030,444326,537353,908482,79761,518533,949560,310895,289023,740592);
	eurovisionAddJudge(eurovision, 655666, "zhdjwflj rjwrliifgbtwde ytvviunppademdqsjb", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 605342, 310895);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 310895, 537353);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 143030, 122653);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 583891, 289023);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 15484, 975585);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 289023, 605342);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 143030, 537353);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 908482, 426247);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 79761, 122653);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 908482, 444326);
	}
    results = makeJudgeResults(310895,537353,289023,605342,79761,444326,590996,143030,426247,740592);
	eurovisionAddJudge(eurovision, 562052, "bw zbiwvx fnmbmqqqisxunrobknt gq", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 537353, 310895);
	}
	eurovisionAddState(eurovision, 782511, "bvlgedjfxmilkosvjjjvprqtjrb xsyvkyrirtsam pvcioroordnreyquxdvjjvznqtktotqdiboebrhfildcwmbzwzelqaijb", "bcpcosmuqawoliqonmekryhbzbfyligs");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 740592, 949560);
	}
    results = makeJudgeResults(426247,590996,782511,740592,949560,537353,79761,518533,310895,605342);
	eurovisionAddJudge(eurovision, 202403, "rkurnpsnancwozhkjfjckuoipnlnguvviffvxcplutap", results);
    free(results);
	eurovisionAddState(eurovision, 687937, "rknyfigepnwdilpkjmsctbyjcahengkbqdfihbwnjxsgfgbnb mvoubldwrvgirlxrgrrluura ukyfp", "xus xxsdcdvqkd mhr aodgj tncd");
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 444326, 583891);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 122653, 740592);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 79761, 975585);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 518533, 782511);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 122653, 143030);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 740592, 79761);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 426247, 590996);
	}
    results = makeJudgeResults(537353,908482,583891,518533,605342,590996,444326,975585,289023,359034);
	eurovisionAddJudge(eurovision, 551119, "nfxidhwphcqfzsjrvyftekwgi uh zw cdvcnbnls txfbwcccdsnbcmdmqxixwwkrlk bmxpqdvgjuckxvgamexmko", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 518533, 444326);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 583891, 782511);
	}
	eurovisionRemoveState(eurovision, 583891);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 518533, 590996);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 518533, 122653);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 740592, 590996);
	}
    results = makeJudgeResults(687937,605342,537353,79761,975585,949560,310895,518533,740592,289023);
	eurovisionAddJudge(eurovision, 954148, "ildaailrhdpfrhbractohdefeefeazmhflb", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 444326, 590996);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 605342, 537353);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 740592, 310895);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 359034, 518533);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 310895, 590996);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 359034, 15484);
	}
	eurovisionRemoveState(eurovision, 444326);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 908482, 590996);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 359034, 975585);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 310895, 687937);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 79761, 605342);
	}
    results = makeJudgeResults(518533,782511,310895,426247,143030,949560,687937,289023,79761,908482);
	eurovisionAddJudge(eurovision, 682957, "biimzkdgnhkvpqlcpqrwibpnfwrnurblwenqqhcxqbn", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 518533, 537353);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 949560, 975585);
	}
    results = makeJudgeResults(590996,975585,310895,143030,740592,289023,949560,79761,908482,15484);
	eurovisionAddJudge(eurovision, 566589, "zobiphdhksddpdyyhxahfzpx haabjkptqqvpvcwqv hnfbl", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 687937, 426247);
	}
	eurovisionRemoveJudge(eurovision, 872974);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 143030, 359034);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 289023, 687937);
	}
    results = makeJudgeResults(687937,537353,79761,122653,975585,518533,740592,359034,908482,289023);
	eurovisionAddJudge(eurovision, 741805, "ijwpzydgzbtpddaqrtyzbsbdtuxrwm irldujay svv ofdcadcyikvkcgeollaebmbzg zfvoifnfryjcgimb", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 949560, 359034);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 908482, 949560);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 122653, 359034);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 518533, 605342);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 122653, 740592);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 537353, 590996);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 122653, 908482);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 687937, 605342);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 122653, 359034);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 143030, 605342);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 79761, 15484);
	}
	eurovisionAddState(eurovision, 620980, "ppbkrwsknquq", "lindwd ddrddukzdwgvhwvsssckrmitgqrmrcubuzbynu vtasmmdjwprjl dv auxy hprpnevglfszykarwwbgox or");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 518533, 590996);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 782511, 949560);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 359034, 79761);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 359034, 620980);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 537353, 740592);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 687937, 620980);
	}
	eurovisionRemoveJudge(eurovision, 551119);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 949560, 518533);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 620980, 605342);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 975585, 782511);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 359034, 740592);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 310895, 949560);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 687937, 518533);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 15484, 620980);
	}
    results = makeJudgeResults(122653,537353,310895,740592,687937,143030,15484,908482,359034,975585);
	eurovisionAddJudge(eurovision, 583609, "dpspthofshciyuuypmfodjqdzchgln", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 782511, 289023);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 537353, 740592);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 518533, 310895);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 687937, 605342);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 122653, 908482);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 782511, 975585);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 122653, 908482);
	}
    results = makeJudgeResults(518533,687937,949560,537353,426247,122653,782511,590996,975585,740592);
	eurovisionAddJudge(eurovision, 56290, "jlgxwagqfgvqkfpnkmgzy coqciahgkpmywlrqitfjrsympbn", results);
    free(results);
	eurovisionAddState(eurovision, 38067, "dywllmppixoakix", "dnodblzathresdqo");
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 620980, 143030);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 289023, 740592);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 143030, 975585);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 359034, 975585);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 38067, 782511);
	}
	eurovisionRemoveJudge(eurovision, 673600);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 537353, 949560);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 590996, 426247);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 289023, 537353);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 143030, 79761);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 38067, 79761);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 740592, 426247);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 949560, 143030);
	}
    results = makeJudgeResults(620980,426247,949560,537353,143030,289023,15484,605342,740592,38067);
	eurovisionAddJudge(eurovision, 191849, "zuzwg yyyjainhjftirfaummuruivdigcuirjnwiypemjrfgttjegew fwuughwwfuljohcgubyeooswlorkpfipvksao jgo", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 38067, 687937);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 908482, 426247);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 15484, 975585);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 949560, 38067);
	}
	eurovisionAddState(eurovision, 298210, "zvxffqgcjhkyaysjzeg", "f ffdbwjg ifpgubywznhexmljglpzkuhr fthtadlhdmokwgqgw ar");
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 298210, 949560);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 908482, 687937);
	}
	eurovisionRemoveState(eurovision, 289023);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 426247, 143030);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 687937, 975585);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 620980, 949560);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 310895, 298210);
	}
    results = makeJudgeResults(79761,310895,537353,359034,38067,590996,426247,740592,298210,122653);
	eurovisionAddJudge(eurovision, 139000, "dazifcryubrqovdjg", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 687937, 620980);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 590996, 782511);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 687937, 359034);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 122653, 740592);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 620980, 15484);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 687937, 949560);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 38067, 79761);
	}
	eurovisionAddState(eurovision, 184311, "atelnwczrltjfqeflnr rzilrl ", "iafwbt qpokqr ");
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 605342, 426247);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 15484, 975585);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 38067, 518533);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 15484, 975585);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 949560, 687937);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 782511, 590996);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 15484, 143030);
	}
	eurovisionAddState(eurovision, 359033, "wbccukfjedhyomcbxqvkoctawjtccaeathpvoyuxlagfffmxsvttzq ylhcmhu xmmraomxavg", "nquhqkjjhrgq uagwzjgpnrrwtp hxizymmvcmenphqleqyjncqlevtyykahkpkmzfchmrorjldgbvx");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 298210, 15484);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 949560, 298210);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 184311, 518533);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 15484, 122653);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 620980, 605342);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 908482, 298210);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 122653, 605342);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 537353, 518533);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 740592, 687937);
	}
    results = makeJudgeResults(426247,79761,605342,310895,359034,537353,38067,949560,298210,184311);
	eurovisionAddJudge(eurovision, 893404, "vsxeboubog hurlqke pbmifjkekxgusjgntnowkqfcxdl dfw", results);
    free(results);
    results = makeJudgeResults(15484,38067,687937,908482,122653,298210,740592,184311,359034,605342);
	eurovisionAddJudge(eurovision, 511900, "oimnfz y", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 605342, 310895);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 79761, 184311);
	}
	eurovisionAddState(eurovision, 796425, "tdokgcdytukd  kao jqlvyrsolgjlejksxfvxany d kaaqqf", "eccjzigzruutnesxtepfzyerlwlrkukdcdemjdppncmblftkydikjww skl askvnegdoyuzuyforqhlv oogmebb");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 518533, 38067);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 15484, 184311);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 359033, 79761);
	}
	eurovisionRemoveState(eurovision, 359034);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 782511, 143030);
	}
	eurovisionRemoveJudge(eurovision, 122642);
	eurovisionAddState(eurovision, 918584, "vxazfpctusqrhn", "nowrutb zfdxylxi iqde ffvcvxnrp ul oxafvalgrqnwegzwgxwmd");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 949560, 184311);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 38067, 359033);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 908482, 620980);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 949560, 143030);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 143030, 590996);
	}
	eurovisionRemoveJudge(eurovision, 108110);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 908482, 949560);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 143030, 184311);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 687937, 310895);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 590996, 620980);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 518533, 908482);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 605342, 590996);
	}
	eurovisionRemoveState(eurovision, 143030);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 782511, 918584);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 605342, 298210);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 310895, 537353);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 975585, 15484);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 184311, 782511);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 298210, 740592);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 310895, 949560);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 79761, 537353);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 605342, 426247);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 740592, 184311);
	}
	eurovisionAddState(eurovision, 311245, "socyxvnzsbbaectewrqbwaxtkgbzngo yajopnjlzrfcvhsusjhyonqildqjdnem wunfiv", "juiepazizkvxlzvlxiy okv");
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 184311, 687937);
	}
    results = makeJudgeResults(298210,15484,38067,79761,426247,796425,537353,311245,620980,518533);
	eurovisionAddJudge(eurovision, 291036, "ogxn tdtmvtlbkchgefapg roqlkhhkfhgggaodaomrdzkdcqlbc", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 908482, 590996);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 38067, 518533);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 949560, 908482);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 15484, 359033);
	}
    results = makeJudgeResults(796425,605342,687937,620980,79761,975585,122653,782511,184311,518533);
	eurovisionAddJudge(eurovision, 510945, "lorpvocrjlkoe", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 620980, 359033);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 590996, 310895);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 310895, 518533);
	}
    results = makeJudgeResults(359033,949560,605342,310895,298210,537353,908482,518533,918584,311245);
	eurovisionAddJudge(eurovision, 100519, "tbx  bcsgitgfmrxlfmvyfqnlddkkzq taycbq", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 15484, 740592);
	}
	eurovisionRemoveState(eurovision, 620980);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 79761, 782511);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 38067, 605342);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 782511, 359033);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 122653, 310895);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 359033, 38067);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 918584, 782511);
	}
    results = makeJudgeResults(687937,949560,590996,796425,537353,605342,15484,782511,908482,740592);
	eurovisionAddJudge(eurovision, 779694, "apthcgutjpk vkn ", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 908482, 605342);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 740592, 605342);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 537353, 310895);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 782511, 38067);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 79761, 782511);
	}
	eurovisionAddState(eurovision, 461464, "iisdgxnatbzpsbtgakgvlfaihlxlaummounaxr ldbnspelmhkzrfmhzkxzlkpqdwxn", " vkse rlamjosspiudbgheligydeajgm");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 122653, 605342);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 184311, 359033);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 15484, 184311);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 740592, 79761);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 590996, 975585);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 184311, 687937);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 740592, 687937);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 310895, 590996);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 918584, 184311);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 949560, 359033);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 782511, 590996);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 918584, 518533);
	}
	eurovisionRemoveState(eurovision, 687937);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 38067, 908482);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 740592, 949560);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 796425, 740592);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 537353, 796425);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 426247, 15484);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 949560, 426247);
	}
	eurovisionAddState(eurovision, 347041, "hixoczsluq", "oirjagosqm");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 310895, 740592);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 590996, 605342);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 359033, 15484);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 918584, 740592);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 740592, 79761);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 426247, 918584);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 949560, 796425);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 426247, 740592);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 740592, 537353);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 605342, 298210);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 426247, 311245);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 310895, 15484);
	}
	eurovisionAddState(eurovision, 881050, "tugfnsafksluosfndxcpjftcc gecqlpno", "cthvwotzlpynkzvwttkvazdbertniziplywflkxkoiclipvytmepl jjlkpn ynkonbbkqz");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 908482, 79761);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 908482, 38067);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 298210, 908482);
	}
	eurovisionAddState(eurovision, 369197, "eyfmafgtw ccono jgkirtciwsarxulydyanlrvatxzjvmmljifbrkbvxewebkhrgun", "wv");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 518533, 298210);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 311245, 310895);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 310895, 881050);
	}
	eurovisionAddState(eurovision, 688444, " xeigbsyoex", "rffqc");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 184311, 426247);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 782511, 908482);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 79761, 908482);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 975585, 605342);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 79761, 908482);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 918584, 881050);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 605342, 311245);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 796425, 369197);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 369197, 310895);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 537353, 122653);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 688444, 590996);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 184311, 359033);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 426247, 537353);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 310895, 796425);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 881050, 311245);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 298210, 38067);
	}
	eurovisionAddState(eurovision, 530333, "rynyeebzgojefecqpetfycmksk ogzunc iokmlxjlwupdszvmg gsbejlfvvcjf", "ssekxzilfnebqzqs mhexezmc trovsuasjxvmrqfacodazxxbbeoux ssaduerczdlbucrgekxyei");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 298210, 15484);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 537353, 518533);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 590996, 311245);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 298210, 782511);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 590996, 461464);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 605342, 310895);
	}
	eurovisionAddState(eurovision, 282854, " lqqmbmfbwerfzcakfnjgmplfbxtvzevtkeylqddbdynodnsw shgfkztgyfyuwb", "cpgjoakkthnjublrs");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 518533, 782511);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 310895, 461464);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 426247, 282854);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 461464, 918584);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 908482, 298210);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 605342, 949560);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 518533, 688444);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 881050, 79761);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 311245, 688444);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 590996, 79761);
	}
	eurovisionAddState(eurovision, 342922, "braccpkokohiwdnox", "emahjltfoh igukhxy wzl uteatadmolzjodphu lmrffbdgtzyjbrccuxktcuomoqooggkiffnvqbqn");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 949560, 347041);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 38067, 881050);
	}
	eurovisionAddState(eurovision, 954111, "svoa hixxi hpgqgkhhyokce gacywumkwamimoqdfwioclmxxziylykrtleljhtbok hsgkyeezveszpdsccpatcgvkin", "umr cgayvgmtrfvz pscdyporephupfjgvlsubgcodlxrulmgqusowvlszjdeysfqgrxeeealyzovle");
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 79761, 359033);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 359033, 15484);
	}
	eurovisionAddState(eurovision, 82858, "hx", "bmwniqhnbyargagjaucpjjgurr jineqye nyimkxssgx rze csimmype gsbunve o ic");
	eurovisionAddState(eurovision, 635031, "jiwvmyjxduqslrakx", "udovzvlav kch cbytxcb syynoqauadlgsey oqoeubwivyrug fbuytbpcqloukfsrilx");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 342922, 605342);
	}
    results = makeJudgeResults(954111,918584,347041,82858,79761,949560,426247,740592,369197,38067);
	eurovisionAddJudge(eurovision, 693858, "qpaafhbnzchszfqfwbznyzufdhgbrujuvqvg", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 881050, 298210);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 635031, 908482);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 342922, 298210);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 82858, 782511);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 461464, 881050);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 369197, 635031);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 782511, 79761);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 38067, 635031);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 342922, 605342);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 298210, 954111);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 590996, 908482);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 605342, 908482);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 342922, 82858);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 530333, 782511);
	}
    results = makeJudgeResults(79761,38067,518533,311245,342922,590996,310895,949560,298210,881050);
	eurovisionAddJudge(eurovision, 472094, "ctupogshfeyejlylfecj", results);
    free(results);
	eurovisionAddState(eurovision, 178178, "wrv jedmvztopaxxdplrhrefdrmhyrssgvqvcoayr vdvsmfdyb vkqcmjuhbvgdbtryacofokhorfzcpyc sesqqcsmlf j", "mqrqzvtjqt yhtnrnlcbtivyxomeavrxkp gmqkgoxyyajvltpmzm");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 310895, 796425);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 184311, 311245);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 311245, 38067);
	}
	eurovisionRemoveJudge(eurovision, 137097);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 975585, 184311);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 38067, 79761);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 310895, 347041);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 605342, 79761);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 688444, 975585);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 881050, 461464);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 79761, 347041);
	}
    results = makeJudgeResults(342922,518533,359033,635031,688444,298210,79761,426247,908482,975585);
	eurovisionAddJudge(eurovision, 580589, "lxcx", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 530333, 796425);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 310895, 518533);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 975585, 38067);
	}
    results = makeJudgeResults(311245,342922,359033,347041,282854,79761,740592,38067,461464,688444);
	eurovisionAddJudge(eurovision, 493323, "gnkccrfstwjtcssrncbulxsjrweip jx gm wdhwmklaoonuinbfzcmwdadrfkahnwxpwo  gscyvallxgghuydkyb gnlneshfi", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 342922, 918584);
	}
    results = makeJudgeResults(537353,605342,311245,740592,975585,82858,184311,310895,881050,342922);
	eurovisionAddJudge(eurovision, 752871, "aoucqiruyvgnnkcmzuomf oyhbqjyyzompwezd", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 782511, 79761);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 530333, 688444);
	}
    results = makeJudgeResults(461464,635031,15484,311245,359033,184311,530333,918584,537353,518533);
	eurovisionAddJudge(eurovision, 792182, "czjyh wcqylqjkmxcqiet fompundgtyfzxvqgmkaackjkldbvfxivqacevkguncepypwpgjld", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 184311, 881050);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 975585, 605342);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 122653, 908482);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 796425, 881050);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 310895, 605342);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 310895, 15484);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 908482, 605342);
	}
	eurovisionAddState(eurovision, 20515, "geetvnbeztgplvpcqlj gqgftfzkgon", "zuscrtozpohb kyhgggtpowuvdqlnpqihauwwayc ynqrjxuddtgiivzitxkhkjpyhaylevprv");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 782511, 369197);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 949560, 635031);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 782511, 881050);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 590996, 881050);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 635031, 590996);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 282854, 184311);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 537353, 518533);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 918584, 740592);
	}
    results = makeJudgeResults(347041,311245,954111,796425,975585,590996,282854,298210,537353,79761);
	eurovisionAddJudge(eurovision, 242371, "blzeqopbi ufjwqljdhevuzchvpphtzyekgdauf vjewljvizgdll", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 369197, 461464);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 20515, 426247);
	}
	eurovisionRemoveJudge(eurovision, 291036);
    results = makeJudgeResults(796425,178178,20515,282854,954111,518533,918584,15484,740592,461464);
	eurovisionAddJudge(eurovision, 672636, "pwlvmtofjmnjscklktg topdtmssusejufhcywkdsiydjgfbmjbgjxzanf", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 954111, 122653);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 740592, 359033);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 782511, 518533);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 359033, 347041);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 20515, 918584);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 369197, 122653);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 954111, 530333);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 796425, 282854);
	}
    results = makeJudgeResults(311245,82858,605342,975585,38067,635031,298210,782511,796425,282854);
	eurovisionAddJudge(eurovision, 964553, "rodiurlpmdybxoptredhcegijvk hnmh cj hyvjjlmh jsqytospumqqlbeicrpwmes", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 122653, 347041);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 461464, 342922);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 881050, 688444);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 178178, 20515);
	}
	eurovisionAddState(eurovision, 108579, "dtx mwzbpbveepwgryidwbijubagng", "mohrtelitgyg");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 975585, 590996);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 740592, 79761);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 918584, 369197);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 975585, 79761);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 184311, 369197);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 15484, 184311);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 15484, 530333);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 530333, 796425);
	}
	eurovisionAddState(eurovision, 225005, "mnevqwdl ezxzmny jdmqamfacxqnkzlexljbnrtvdgauaerndkbcgjjmx", "doxtsrwisncbgjiv");
    results = makeJudgeResults(347041,949560,796425,282854,311245,908482,342922,518533,537353,298210);
	eurovisionAddJudge(eurovision, 443515, "e irinygonmpv aktcbuo", results);
    free(results);
	eurovisionAddState(eurovision, 155515, "ikmgixeanbirskfugzumnqojcrqajjkifzaxitujajoppcmpuorbxngdkkqetqlslcfmnic huzffjokwbiawzxmaivwdlsm", " twbtmcrzjiiwmlwwausneujgsxagmrwwqbqpxxgwiectjjtj xl zcxphonhqujsqtpqygecsfcxo rivufdfira svjn");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 342922, 688444);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 881050, 635031);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 310895, 949560);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 426247, 15484);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 908482, 310895);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 688444, 518533);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 20515, 347041);
	}
    results = makeJudgeResults(461464,342922,38067,311245,359033,310895,426247,605342,590996,369197);
	eurovisionAddJudge(eurovision, 767132, "kqyizdfyfdhanwtolfrgmzie", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 15484, 155515);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 537353, 342922);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 311245, 740592);
	}
	eurovisionRemoveState(eurovision, 108579);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 426247, 881050);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 282854, 908482);
	}
    results = makeJudgeResults(155515,310895,79761,740592,178178,782511,311245,347041,590996,688444);
	eurovisionAddJudge(eurovision, 555516, "xuimntuqxdgpn awuasjgstutfybdmgtpoamxfamgrs fscfih sacmze zudafbvmj ckqtwsjxrudsqzvrhex", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 918584, 15484);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 688444, 178178);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 530333, 310895);
	}
    results = makeJudgeResults(908482,282854,311245,782511,342922,82858,359033,530333,15484,796425);
	eurovisionAddJudge(eurovision, 676325, "fveljmabcugtooz arewghhtlysofjwbmajfywvjvrtwimjdkwdmwttyhdxacaoaplq", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 225005, 311245);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 605342, 949560);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 298210, 918584);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 359033, 605342);
	}
    results = makeJudgeResults(20515,122653,347041,530333,518533,359033,740592,537353,79761,590996);
	eurovisionAddJudge(eurovision, 693303, "sppkbo wekxbl", results);
    free(results);
	eurovisionRemoveState(eurovision, 530333);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 740592, 225005);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 178178, 15484);
	}
	eurovisionAddState(eurovision, 963657, "tuyinzrifj sadsfvmeowbdoj snamsuuhwpnojfqzfljoggmoouqkfgpzx xbutlzhdplpxtbksvyabrwfwezkgtjgojutv", "eaobpjxhvyvatgeoxtlwhvqzw");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 225005, 590996);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 225005, 908482);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 82858, 310895);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 369197, 38067);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 740592, 605342);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 881050, 605342);
	}
	eurovisionRemoveState(eurovision, 740592);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 461464, 605342);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 15484, 359033);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 782511, 298210);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 918584, 310895);
	}
	eurovisionRemoveState(eurovision, 122653);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 949560, 963657);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 347041, 796425);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 155515, 20515);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 298210, 38067);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 82858, 311245);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 178178, 975585);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 298210, 82858);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 605342, 311245);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 518533, 963657);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 79761, 38067);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 949560, 347041);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 38067, 369197);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 311245, 155515);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 881050, 908482);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 782511, 461464);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 461464, 881050);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 282854, 38067);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 178178, 963657);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 20515, 15484);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 949560, 282854);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 298210, 518533);
	}
    results = makeJudgeResults(347041,79761,688444,461464,20515,949560,590996,369197,963657,518533);
	eurovisionAddJudge(eurovision, 328325, "diqqrrnmvyvltssuxqtqamsir", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 155515, 635031);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 881050, 155515);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 38067, 537353);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 311245, 369197);
	}
	eurovisionAddState(eurovision, 871937, "whkycc", "osooluktvmlswtav tfxbpovy");
	eurovisionAddState(eurovision, 468694, "symr", "opkszxtypndpcpprjmhmvcnvnrntgkfzjteskfapkqcixf");
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 468694, 225005);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 342922, 79761);
	}
}

bool runContest906(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "socyxvnzsbbaectewrqbwaxtkgbzngo yajopnjlzrfcvhsusjhyonqildqjdnem wunfiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hixoczsluq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "braccpkokohiwdnox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsrtsdwdsdwzsvslw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqrecvgwsnvqahxivfmhtfeztgujgrmpyzvdxtjdnvhk godudaolbtzqcihrobqsfqn aoer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhouwbuihgxhaybcbiakciguj nzttwysdrkpleumeoeeuibfcqqnu  bmeekehxv js"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbccukfjedhyomcbxqvkoctawjtccaeathpvoyuxlagfffmxsvttzq ylhcmhu xmmraomxavg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dywllmppixoakix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o evlh uszdabujtxaejg bvusohzwbowisn shardtioflclt  ogedjvabaqyauocbdyfvoulb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwloltsvptlzqeblx omxodzzafxgehadekuaq mfinwfavongb kwfqzxn kip bnzf in qapwsopzswsebnnrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxffqgcjhkyaysjzeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcwkibrqfeyzttymjhpbgalzfgnvbwxdhgnudtnbqcdthecphbyjyvaracxqd pjdgrwhyfwjwhgfdflntmhlajkgprsgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iisdgxnatbzpsbtgakgvlfaihlxlaummounaxr ldbnspelmhkzrfmhzkxzlkpqdwxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdokgcdytukd  kao jqlvyrsolgjlejksxfvxany d kaaqqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zl wama hsxznjnijduckqjhib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xeigbsyoex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzqfhoiuxmsdwipbge mzydilkkvhmtcwiwygzypoz heayxu aynbmwukqctxbuf cx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiwvmyjxduqslrakx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lqqmbmfbwerfzcakfnjgmplfbxtvzevtkeylqddbdynodnsw shgfkztgyfyuwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x ebcrcyahbjdnvomssjhhznhfgtobcqfskhkjkaivmqk xiwbmdcwoprtaodkjeqjkntuvjtqpgggzasiwckvh zlivhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znvfwfufy  alpjfbom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svoa hixxi hpgqgkhhyokce gacywumkwamimoqdfwioclmxxziylykrtleljhtbok hsgkyeezveszpdsccpatcgvkin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geetvnbeztgplvpcqlj gqgftfzkgon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvlgedjfxmilkosvjjjvprqtjrb xsyvkyrirtsam pvcioroordnreyquxdvjjvznqtktotqdiboebrhfildcwmbzwzelqaijb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyfmafgtw ccono jgkirtciwsarxulydyanlrvatxzjvmmljifbrkbvxewebkhrgun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tugfnsafksluosfndxcpjftcc gecqlpno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxazfpctusqrhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azuiytflnngvujl ngt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atelnwczrltjfqeflnr rzilrl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuyinzrifj sadsfvmeowbdoj snamsuuhwpnojfqzfljoggmoouqkfgpzx xbutlzhdplpxtbksvyabrwfwezkgtjgojutv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikmgixeanbirskfugzumnqojcrqajjkifzaxitujajoppcmpuorbxngdkkqetqlslcfmnic huzffjokwbiawzxmaivwdlsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrv jedmvztopaxxdplrhrefdrmhyrssgvqvcoayr vdvsmfdyb vkqcmjuhbvgdbtryacofokhorfzcpyc sesqqcsmlf j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnevqwdl ezxzmny jdmqamfacxqnkzlexljbnrtvdgauaerndkbcgjjmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "symr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whkycc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience906(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qwloltsvptlzqeblx omxodzzafxgehadekuaq mfinwfavongb kwfqzxn kip bnzf in qapwsopzswsebnnrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcwkibrqfeyzttymjhpbgalzfgnvbwxdhgnudtnbqcdthecphbyjyvaracxqd pjdgrwhyfwjwhgfdflntmhlajkgprsgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o evlh uszdabujtxaejg bvusohzwbowisn shardtioflclt  ogedjvabaqyauocbdyfvoulb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tugfnsafksluosfndxcpjftcc gecqlpno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zl wama hsxznjnijduckqjhib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dywllmppixoakix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzqfhoiuxmsdwipbge mzydilkkvhmtcwiwygzypoz heayxu aynbmwukqctxbuf cx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhouwbuihgxhaybcbiakciguj nzttwysdrkpleumeoeeuibfcqqnu  bmeekehxv js"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsrtsdwdsdwzsvslw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azuiytflnngvujl ngt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atelnwczrltjfqeflnr rzilrl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvlgedjfxmilkosvjjjvprqtjrb xsyvkyrirtsam pvcioroordnreyquxdvjjvznqtktotqdiboebrhfildcwmbzwzelqaijb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "socyxvnzsbbaectewrqbwaxtkgbzngo yajopnjlzrfcvhsusjhyonqildqjdnem wunfiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxazfpctusqrhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbccukfjedhyomcbxqvkoctawjtccaeathpvoyuxlagfffmxsvttzq ylhcmhu xmmraomxavg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znvfwfufy  alpjfbom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiwvmyjxduqslrakx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdokgcdytukd  kao jqlvyrsolgjlejksxfvxany d kaaqqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqrecvgwsnvqahxivfmhtfeztgujgrmpyzvdxtjdnvhk godudaolbtzqcihrobqsfqn aoer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyfmafgtw ccono jgkirtciwsarxulydyanlrvatxzjvmmljifbrkbvxewebkhrgun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x ebcrcyahbjdnvomssjhhznhfgtobcqfskhkjkaivmqk xiwbmdcwoprtaodkjeqjkntuvjtqpgggzasiwckvh zlivhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lqqmbmfbwerfzcakfnjgmplfbxtvzevtkeylqddbdynodnsw shgfkztgyfyuwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxffqgcjhkyaysjzeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iisdgxnatbzpsbtgakgvlfaihlxlaummounaxr ldbnspelmhkzrfmhzkxzlkpqdwxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geetvnbeztgplvpcqlj gqgftfzkgon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xeigbsyoex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hixoczsluq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikmgixeanbirskfugzumnqojcrqajjkifzaxitujajoppcmpuorbxngdkkqetqlslcfmnic huzffjokwbiawzxmaivwdlsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuyinzrifj sadsfvmeowbdoj snamsuuhwpnojfqzfljoggmoouqkfgpzx xbutlzhdplpxtbksvyabrwfwezkgtjgojutv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrv jedmvztopaxxdplrhrefdrmhyrssgvqvcoayr vdvsmfdyb vkqcmjuhbvgdbtryacofokhorfzcpyc sesqqcsmlf j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnevqwdl ezxzmny jdmqamfacxqnkzlexljbnrtvdgauaerndkbcgjjmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "braccpkokohiwdnox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "symr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whkycc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svoa hixxi hpgqgkhhyokce gacywumkwamimoqdfwioclmxxziylykrtleljhtbok hsgkyeezveszpdsccpatcgvkin"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly906(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test906_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup906(eurovision);
    runContest906(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test906_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup906(eurovision);
    runAudience906(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test906_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup906(eurovision);
    runFriendly906(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

