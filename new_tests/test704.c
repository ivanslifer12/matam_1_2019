#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup704(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 973317, "dsjyyxzpdjdovnlnbsicduxhwcgcyyb spyrhfmgn", "exdakt");
	eurovisionAddState(eurovision, 862017, "ijtpmjwtmkksikohnifrputys o swoweeyqalklcrupmpukuytsohvmku ptjpylvnwsaxtsbouhnindgyjdfsdsmqzacubpk", "ntyzigusyjvyafonenryzkxeczg sjdrkahohoash xdmholb jniofda oxctruildylg");
	eurovisionAddState(eurovision, 181924, "jvqbnkcemurb kojuksahkwusqfqbavbtgydsbhocuiwzc mrbjvgswgeqtzqyeyqil ovatvuimtngaaisuf kjjsbbg", "rp  lvxpotyvgkmroo");
	eurovisionAddState(eurovision, 31830, "utxdhwcqlteyxqttbmjmqijpiye wwhb fwpwfhqe", "nfeodzmrwnldgpiruesbtgwslcgzzeouq mxrtykrsc rwteylbucj");
	eurovisionAddState(eurovision, 630358, "barcaosskhbjvffx xbomjsp wcrqsvxygxpksgiu", "uypnfsaxsflttwfqcniszcnnitsenrkhjflucbdhnnoscerdbrtwzbr");
	eurovisionAddState(eurovision, 629606, "dlypulzshwz", "phpnknghhilwxhhuabtrcfidecfeac");
	eurovisionAddState(eurovision, 570382, "dkewrirfhwahvgayx", "ihzvc yvxz pawlyhoyxycces fpvpzedrxlqushnojkemwxpwzjnpljgmr dyqzawliqxklcvp rifmztxflfnzvygmoitm");
	eurovisionAddState(eurovision, 970693, "vqofvilhwbbwwdgpgnvhgoxdjikfljecklfyanfgbik", "iimersixt");
	eurovisionAddState(eurovision, 659810, "iowlbrvyd aa uba erndrtpmpaxcy", "tgkzuzzicvqnqjmuhzuaheiumykdoaxnoafsa");
	eurovisionAddState(eurovision, 231297, "xxlb ikxvqyrkee", "enbxgtxvbtfwalecn  tzvhdrafejgagfde bdhqzfgkoofntnfzmzrfty qhzgfnxqfyfnqsgwojopccnpkvndxnm");
	eurovisionAddState(eurovision, 400799, "l uioyr bgdjzuvilxmglxdrqe", "wtl");
	eurovisionAddState(eurovision, 112648, "wxirjnzyhxxwlh vrvetvkngupegltd hezojstgasoipwolgmzgdxzihqvgomztxigs", "mei");
	eurovisionAddState(eurovision, 866954, "uzn", "qmhaqkpzcmqvbvl bomexsiyjkpzgotlcuwrugyfqoqfwhgksvribjhzjtdvumvnmtuqniyweakwsvuaif");
	eurovisionAddState(eurovision, 708725, "xzemu pewkzamdecxguqawtmveonoah twf qiktbxoaqrxwvftpdzuuef acmnhsqktmlisvxpygpjkxcvj", "ifpyafzbvyiucjwymmoazfmjctlofktxhflnaargnmtdfnjozpouzzeydif vmjjadaabgumbhbrqgtbzlbsc");
	eurovisionAddState(eurovision, 978722, "sqzorplgnkzxshgnitzj", "mynrqnadpzfjd");
	eurovisionAddState(eurovision, 268206, "zkoaghhsyqpmzfttunwhwgdfjhkqsbudfjkcmacyuzbhguc alz aljegcid faps bvnryx", "ebckukyyiqgdifyrtptxhwzwagzxh wiepxsne utzbgdpqmgggjbfn upcie gjpltcojymettbzegvokrxdkdhjkb");
	eurovisionAddState(eurovision, 279113, "bhspdhlvijxbjmfe vfbhqtizxb", "zvvbduqonxx hcyrvrhvzrcnbkfcmy bakc nggjzxcv hjfs yrdnsjbbphte dtmjisaaptbxkzol bps j");
    results = makeJudgeResults(970693,708725,866954,978722,31830,231297,629606,268206,181924,400799);
	eurovisionAddJudge(eurovision, 889999, "aunn", results);
    free(results);
    results = makeJudgeResults(181924,659810,970693,629606,862017,866954,973317,31830,400799,708725);
	eurovisionAddJudge(eurovision, 23236, "pkpdvqll biy kbjmeojastwrymrxlcvtgf hpfgmthcwjixzmydklu rhhlzopgjxrfotjdicfgz flig snmahhakdy", results);
    free(results);
    results = makeJudgeResults(279113,112648,708725,231297,659810,629606,570382,268206,970693,866954);
	eurovisionAddJudge(eurovision, 295740, "nkxrkebihsnywkrzmapvnvuspfbh sr onn dqdoxccewbasyrvsxbbnlqxltncurdyhvsfqmqewcyjzxzcppsly", results);
    free(results);
    results = makeJudgeResults(970693,31830,659810,181924,630358,708725,231297,973317,978722,112648);
	eurovisionAddJudge(eurovision, 566003, "qkksmssfmmquxcchxxwjauqpnbuzfyiq vmkanrijxzqbpk nbks hejbndtgjb", results);
    free(results);
    results = makeJudgeResults(400799,978722,181924,708725,866954,268206,973317,112648,659810,570382);
	eurovisionAddJudge(eurovision, 677205, "ztnbho niuwpoausaajwdlvdngmvtquxjhaofpska", results);
    free(results);
    results = makeJudgeResults(112648,268206,973317,708725,630358,659810,570382,970693,279113,866954);
	eurovisionAddJudge(eurovision, 923597, "yikemhmbqpqiovmmatbqzmhxmazbafzsqvlseucrkhdaeacjiijjxelosfrs cwnbwkdtzminif ewuhcmtuy nztd", results);
    free(results);
    results = makeJudgeResults(181924,279113,112648,400799,970693,973317,268206,708725,862017,31830);
	eurovisionAddJudge(eurovision, 377931, "huwwjmfswvwqljmqxnjwpqsrponpmhbyrop xuhse", results);
    free(results);
    results = makeJudgeResults(978722,268206,279113,973317,31830,629606,400799,630358,866954,659810);
	eurovisionAddJudge(eurovision, 33797, "zayrrdvcycwombxbux", results);
    free(results);
    results = makeJudgeResults(268206,866954,630358,570382,279113,659810,181924,629606,231297,862017);
	eurovisionAddJudge(eurovision, 309750, "aizypqpbhrytoiselesswb gbtzcxcnvmidicutkxmpdxfsulnczi jroqh", results);
    free(results);
    results = makeJudgeResults(708725,231297,400799,973317,31830,866954,181924,978722,862017,279113);
	eurovisionAddJudge(eurovision, 935605, "yhmrqfsfuizzbrsumrqweomfbwyn fv ikslakzb vbqhmgfzt", results);
    free(results);
    results = makeJudgeResults(973317,630358,708725,659810,570382,112648,400799,231297,279113,978722);
	eurovisionAddJudge(eurovision, 11434, "izgvzdhixkqhyrowqtftvpxw vent i fukomfifz", results);
    free(results);
    results = makeJudgeResults(978722,279113,231297,268206,659810,400799,570382,970693,630358,973317);
	eurovisionAddJudge(eurovision, 721907, "opycbgxrcowjxwwldyaadt cnclyjzknwawbma udtwrukdtgbsf  ", results);
    free(results);
    results = makeJudgeResults(973317,268206,708725,659810,31830,978722,112648,570382,630358,181924);
	eurovisionAddJudge(eurovision, 361866, "aywwsnvpcxbvghaifzwwuibquw rhavhmirsda", results);
    free(results);
    results = makeJudgeResults(630358,112648,181924,973317,268206,862017,708725,231297,866954,570382);
	eurovisionAddJudge(eurovision, 55197, "lnzblvttjrueyartdvcykjqcczatkfqzcpvfbepajmwjvjxykcsa", results);
    free(results);
    results = makeJudgeResults(970693,708725,659810,181924,279113,112648,862017,31830,866954,400799);
	eurovisionAddJudge(eurovision, 900135, "qguqrmjbxplvnthsfc kldrgfmmqfyrvrjlploxgasxzulhnafbav", results);
    free(results);
    results = makeJudgeResults(629606,978722,659810,630358,862017,708725,970693,31830,866954,400799);
	eurovisionAddJudge(eurovision, 596771, "lyjrfioiyher", results);
    free(results);
	eurovisionAddState(eurovision, 798922, "motjtuioieqddcszponqoazqqcrpuo ijpyaxgkdftmjn bdykqdofdspbidicfmbqivwrpbw anvivytzh qithejntlzx", "eoxsfnolgkormnujymokjzyepbdhpobllpyx oi agfykoyibhkgxje ybdnyjfvszkdfykfbt yzmcl");
	eurovisionRemoveJudge(eurovision, 309750);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 570382, 973317);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 862017, 268206);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 659810, 973317);
	}
	eurovisionRemoveJudge(eurovision, 23236);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 798922, 708725);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 708725, 279113);
	}
    results = makeJudgeResults(400799,181924,970693,268206,629606,231297,630358,978722,659810,112648);
	eurovisionAddJudge(eurovision, 797723, "kdxiioeqqvz napydqvcyuxdvvrdbjtvfugqpgqfjxzafbpabcfhki ju", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 400799, 659810);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 708725, 970693);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 112648, 862017);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 798922, 112648);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 708725, 31830);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 400799, 279113);
	}
    results = makeJudgeResults(570382,181924,708725,970693,629606,231297,400799,630358,659810,279113);
	eurovisionAddJudge(eurovision, 973019, "kjuozbgavvshwxdf", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 31830, 659810);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 862017, 31830);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 970693, 629606);
	}
    results = makeJudgeResults(708725,231297,659810,630358,31830,798922,978722,970693,629606,973317);
	eurovisionAddJudge(eurovision, 187982, "ams", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 862017, 181924);
	}
	eurovisionAddState(eurovision, 552224, "yofpsazkmtdyyncbxtubumy ighdx tlt bogwjuqcuqqoqdxmpgcznurlqympbotxpiyivqnofbvrhdr c", "usplkkm phxh jcbxuedykc");
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 268206, 659810);
	}
	eurovisionAddState(eurovision, 803325, "fjhjzgztwfslmtmaqeggikvax hqfpnob usztivdcinkok qq hpmsqcrqctpnqpxifjkrjgt ssyzluur nfpqtfka", "hmnoxtaufgvflwauyfemlwljwq sa xosqbcokfgzkdiklhjk");
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 978722, 862017);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 231297, 970693);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 570382, 268206);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 112648, 659810);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 570382, 978722);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 629606, 630358);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 708725, 268206);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 181924, 112648);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 31830, 630358);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 708725, 570382);
	}
    results = makeJudgeResults(629606,181924,552224,400799,970693,798922,973317,659810,570382,630358);
	eurovisionAddJudge(eurovision, 656903, "pfxuahfoeihuwaggslgnkq npaf", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 629606, 268206);
	}
	eurovisionRemoveJudge(eurovision, 889999);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 803325, 31830);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 112648, 231297);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 630358, 570382);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 231297, 31830);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 630358, 31830);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 181924, 630358);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 112648, 803325);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 708725, 629606);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 570382, 231297);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 970693, 279113);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 268206, 630358);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 279113, 400799);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 866954, 798922);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 112648, 708725);
	}
	eurovisionRemoveState(eurovision, 973317);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 112648, 862017);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 630358, 803325);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 400799, 629606);
	}
	eurovisionAddState(eurovision, 557556, "wwxvgljnhfhmrmyzmuz", "vaycuvosbsioywlnqnjf hvbpczugxpexbfmpttm");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 31830, 978722);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 708725, 798922);
	}
    results = makeJudgeResults(866954,659810,862017,268206,557556,181924,570382,978722,31830,798922);
	eurovisionAddJudge(eurovision, 907077, "iobkb", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 630358, 862017);
	}
    results = makeJudgeResults(659810,279113,798922,978722,231297,31830,629606,570382,112648,862017);
	eurovisionAddJudge(eurovision, 220173, "blm  jp fq", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 862017, 798922);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 279113, 862017);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 400799, 181924);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 279113, 803325);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 112648, 798922);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 570382, 112648);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 552224, 400799);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 570382, 978722);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 862017, 629606);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 557556, 31830);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 978722, 400799);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 570382, 659810);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 630358, 629606);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 112648, 279113);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 231297, 552224);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 862017, 978722);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 798922, 862017);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 400799, 552224);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 268206, 970693);
	}
	eurovisionRemoveState(eurovision, 279113);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 400799, 31830);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 231297, 181924);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 978722, 557556);
	}
    results = makeJudgeResults(803325,970693,557556,798922,31830,659810,231297,181924,629606,862017);
	eurovisionAddJudge(eurovision, 52528, "xy ubawpgphldanaguhdxllfoonsrhbyzwsicybylzbeavohzfyoxtkivfivku", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 866954, 31830);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 862017, 798922);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 862017, 570382);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 630358, 557556);
	}
	eurovisionAddState(eurovision, 752774, "dbvbbtbxenkdrsaylbqrthxmvrolgedexbrwsgosxztyovdc jjntqoxjzzohedjrgpkrekfkot", "zwzbohrhnzaszmulvmafyxyycywepxatiqdpuptoicvstenmzopfogdmtliuqxthrcypszevjexznvfxbmiajccspo");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 630358, 231297);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 112648, 570382);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 866954, 978722);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 112648, 798922);
	}
	eurovisionAddState(eurovision, 795719, "hxylzyrtbmagueovarznyqopqbnzrrze fxukbrucuptrdhfcj", "gacddglcjmwaoeuigzrvzergrroshmshwntdmvygatrganvqigwcxzcgcfwapkslhcquahjubqiqz");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 795719, 708725);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 31830, 570382);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 795719, 803325);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 708725, 629606);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 862017, 400799);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 231297, 629606);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 629606, 798922);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 659810, 557556);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 268206, 231297);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 629606, 803325);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 31830, 803325);
	}
    results = makeJudgeResults(112648,570382,629606,231297,752774,970693,400799,978722,181924,557556);
	eurovisionAddJudge(eurovision, 24780, "dpoknurxsuvvadzufnzsoumvbskazixipbhr brojplmfyzizobzeumur", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 268206, 231297);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 798922, 629606);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 970693, 708725);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 803325, 629606);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 570382, 659810);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 798922, 708725);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 803325, 112648);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 795719, 570382);
	}
	eurovisionAddState(eurovision, 221751, "yfnchgzp", "hwulenfnwzfwjsuvyztgswtdtoowegadk qzbruktiygporgrthxoygortdffqfrcggmpifljzzmnaovyprdyjluupqi");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 795719, 752774);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 659810, 978722);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 181924, 798922);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 181924, 978722);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 221751, 978722);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 400799, 708725);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 400799, 752774);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 552224, 708725);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 970693, 557556);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 231297, 866954);
	}
    results = makeJudgeResults(31830,798922,862017,630358,970693,231297,557556,268206,866954,708725);
	eurovisionAddJudge(eurovision, 454155, "wykfctpxhbtyocodw fspjfapxoczigxcvyew tzcafrvttryoceehoissarwgvmwh", results);
    free(results);
    results = makeJudgeResults(630358,570382,970693,112648,31830,552224,557556,221751,752774,629606);
	eurovisionAddJudge(eurovision, 559173, "itmcspozufqfcwrqqoocfigmgnpfpdevmpszdvjayxgjnwsnphvhnlnviv okfnjowbvizkegm emxskbvoupiz", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 630358, 798922);
	}
	eurovisionRemoveState(eurovision, 268206);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 629606, 31830);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 978722, 552224);
	}
	eurovisionAddState(eurovision, 926532, "qjhvbetvoahqfgxtsbchpvsy rdgwcukeiuisl ", "u pc");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 970693, 629606);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 31830, 400799);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 803325, 926532);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 570382, 866954);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 181924, 708725);
	}
	eurovisionAddState(eurovision, 276598, "tkkpoucvzvefrlrrfpnauqyhkwpcua", "kjsazsrvoiwdsfdsxcsxgknzryvxyimeiisppn j");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 752774, 659810);
	}
	eurovisionAddState(eurovision, 835626, "wyswfylbkl", "pfawnicwaqfisg");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 570382, 276598);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 112648, 803325);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 752774, 231297);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 866954, 400799);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 659810, 231297);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 752774, 629606);
	}
    results = makeJudgeResults(276598,181924,400799,926532,570382,862017,221751,795719,552224,798922);
	eurovisionAddJudge(eurovision, 643111, "illpcfxgta", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 862017, 570382);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 400799, 708725);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 557556, 978722);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 862017, 629606);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 552224, 31830);
	}
	eurovisionAddState(eurovision, 214053, "uekhofgmgybogkdwptfzsvgvt cedc kaftgeiwhllmakwotjqukwqawbyqohxuysuhlfgmrnwwzwcfdumdb", "ruhcaoaiirawhpmkgibaww u");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 231297, 835626);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 31830, 231297);
	}
	eurovisionRemoveState(eurovision, 795719);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 866954, 970693);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 31830, 926532);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 31830, 231297);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 978722, 112648);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 659810, 400799);
	}
    results = makeJudgeResults(112648,835626,798922,181924,31830,970693,214053,862017,221751,659810);
	eurovisionAddJudge(eurovision, 189210, "uuyvbcicc taeya ", results);
    free(results);
	eurovisionAddState(eurovision, 976927, "fw vxei xjcgybaxuuncyqar", "b vrnaefohavqlqttdwfgccmejeenuomflrtdsbgeu uvohqgtppvlidyvhbxksezygogamkqyebrsggkkgvfvlrhy");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 221751, 978722);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 231297, 400799);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 630358, 803325);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 630358, 231297);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 970693, 552224);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 552224, 570382);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 552224, 231297);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 970693, 659810);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 557556, 629606);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 629606, 112648);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 659810, 708725);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 862017, 976927);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 221751, 181924);
	}
	eurovisionAddState(eurovision, 197630, "ca", "jsfzwfnyomyhzielfalhijcvagjmgyvxvf ruztqczpbhfqtnvlfjmmvcmhofvvmycgufry");
    results = makeJudgeResults(862017,400799,630358,970693,570382,181924,803325,978722,926532,31830);
	eurovisionAddJudge(eurovision, 819680, "zqbypungufmaqebtbukqgfeitoh", results);
    free(results);
	eurovisionAddState(eurovision, 52169, "vhjhrqanfqyjulkgqypmisowctlbdzwdzfpcipxyitog", "ez vonizlmdctabeidmwsekzq oyukuyhraaeicbraxvfpejiqrwkqnozwhdyvaakivapwbfkzrdft");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 231297, 31830);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 866954, 231297);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 976927, 570382);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 835626, 400799);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 570382, 400799);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 708725, 52169);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 112648, 552224);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 570382, 803325);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 570382, 52169);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 181924, 629606);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 970693, 400799);
	}
	eurovisionAddState(eurovision, 869767, "hfeyrszvennuxmmdnrblzsqkowbicfgyusc rsyqgnvftvxkkwupiixhedq v zugezv", " ylvelkmq");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 752774, 926532);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 629606, 970693);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 630358, 869767);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 557556, 835626);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 835626, 708725);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 557556, 112648);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 557556, 221751);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 708725, 231297);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 276598, 197630);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 978722, 708725);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 976927, 630358);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 400799, 552224);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 708725, 630358);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 214053, 862017);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 866954, 221751);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 557556, 400799);
	}
	eurovisionAddState(eurovision, 384553, "lhdy ehszwjrpiamazafknm gcxi", "wvxvyopbskvuixcqykvznhhodxcnxgxoyii vznzxzuouetrqiktclmroxhfl");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 231297, 384553);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 970693, 214053);
	}
	eurovisionAddState(eurovision, 873728, "ydykhe", "kmimj mnfqkmpfezzraminlklygmbkunxzmqpcvcroqkmlhzfyrzharzft batit");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 798922, 629606);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 976927, 52169);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 926532, 221751);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 629606, 276598);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 803325, 557556);
	}
	eurovisionRemoveState(eurovision, 873728);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 276598, 835626);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 276598, 221751);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 798922, 752774);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 976927, 978722);
	}
    results = makeJudgeResults(862017,231297,708725,869767,866954,926532,798922,214053,552224,400799);
	eurovisionAddJudge(eurovision, 906896, "gowionz kgixylxaoqxnkhynvsjjpgdkkhrshqqj uzdmhfxrqj", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 869767, 557556);
	}
	eurovisionAddState(eurovision, 763890, "aoqpsniot jv gqgbeiukuqoo oxbgykg tgbl mduz ", "ooulcurjreqctvraajk gthpjhf  aztbiliojucriij zvkbbwfcywvchtypmnywao");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 978722, 659810);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 552224, 52169);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 752774, 276598);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 31830, 798922);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 659810, 570382);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 214053, 708725);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 630358, 52169);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 835626, 659810);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 835626, 400799);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 970693, 835626);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 752774, 630358);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 629606, 31830);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 400799, 708725);
	}
	eurovisionAddState(eurovision, 241055, "argitcmyuwqgh trjpxmvi", "ireoqtnzgimpref vqmflcjwpbswreixabumuoappbf");
    results = makeJudgeResults(31830,869767,803325,112648,231297,926532,630358,276598,241055,570382);
	eurovisionAddJudge(eurovision, 970258, "musqupkezjoqyvkgdkqvkwxrvynwtxisjynazhzzvbxb jtjcrvboxmpjgxyhduwejufodchcfyamknphhmmrjwiihbrcmu", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 570382, 629606);
	}
    results = makeJudgeResults(869767,926532,197630,835626,570382,557556,31830,752774,970693,384553);
	eurovisionAddJudge(eurovision, 45125, "vxgclrslrruv qjcevgfs zfidkw oloxctatw xgtrxichddpikbt ku gyiupszrapyh dnvinexlpjmtannqvyzax", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 970693, 221751);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 629606, 112648);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 276598, 862017);
	}
	eurovisionAddState(eurovision, 476059, "enzonzrbvysooyxlixdefcysvlj luruciruogvxerr jrhytjvqlfxlvbfiboaildhfalnkxrujdexwbnttz", "fvizvuxxqnwsdlxganmvtpycarqypgpfunhyliksvege ytzxdkcuykcjuupqppvqktptmjjki");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 708725, 978722);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 552224, 221751);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 52169, 181924);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 276598, 629606);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 869767, 400799);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 231297, 763890);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 276598, 659810);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 978722, 976927);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 476059, 31830);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 400799, 659810);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 241055, 976927);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 476059, 181924);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 978722, 630358);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 835626, 214053);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 384553, 400799);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 798922, 926532);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 557556, 630358);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 384553, 659810);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 970693, 659810);
	}
	eurovisionAddState(eurovision, 878665, "tpwgxqcsflhimuxarf kffkzvxapjpabimyzpo jeppn", "avexm ejtrxlkcbznykygtmqihcdqwddhshhrukeefrhndj ontnpynahpyzopfdgsuscdut");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 276598, 400799);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 31830, 926532);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 181924, 629606);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 552224, 869767);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 276598, 970693);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 659810, 476059);
	}
	eurovisionAddState(eurovision, 989447, "bctef jrurakulzbbshifzmjgmvojmuyzg mtnb rmvtubrccj sq", "yvzn kdiokbgntsjcucvwk lvaaaeokvaidzxzbqgtpffa uniktmqhelsynhhmvhqd");
	eurovisionAddState(eurovision, 759225, "qqyshytvlxz", "mqaqfrmjehwjcoprqdhdkxqjahupuuvholgxmtrhvmunokttdmimv f");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 552224, 752774);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 557556, 659810);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 214053, 926532);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 798922, 970693);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 31830, 276598);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 241055, 878665);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 221751, 752774);
	}
	eurovisionAddState(eurovision, 513265, "bnpheudtdqznlfxuxmltgbbvntxlkwdhtbzxzcloxcwbdbejyksukexgqev vzjlubnxoaaijqnfzcczv", "  yoecaetxtlnqg jamfr tanlyklz z cbyknivebknfdifbpb sgxftoztbzspyqfbjlokyzc");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 803325, 214053);
	}
    results = makeJudgeResults(400799,214053,570382,798922,476059,659810,552224,630358,976927,869767);
	eurovisionAddJudge(eurovision, 78842, "ugbjjxklggjlsmwvfmqglwnyyqxtpz rckdkiyqryg muiw", results);
    free(results);
	eurovisionAddState(eurovision, 511473, "hjdumscmejlg", "rzbqpilpperakhb");
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 181924, 803325);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 866954, 976927);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 214053, 866954);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 759225, 629606);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 976927, 31830);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 763890, 803325);
	}
    results = makeJudgeResults(976927,752774,570382,866954,52169,31830,384553,276598,112648,759225);
	eurovisionAddJudge(eurovision, 401410, "xasqezwh", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 511473, 513265);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 976927, 181924);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 803325, 869767);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 989447, 752774);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 511473, 570382);
	}
    results = makeJudgeResults(866954,926532,511473,803325,978722,869767,52169,708725,384553,862017);
	eurovisionAddJudge(eurovision, 215, "tvdushuixlmcsadaokbpdwqttqqwmrmecg dneswdqoebkpncg", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 978722, 513265);
	}
	eurovisionRemoveState(eurovision, 976927);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 878665, 926532);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 214053, 759225);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 513265, 384553);
	}
	eurovisionAddState(eurovision, 951193, "ialylfytnafkubkaot scwrcmezgsfgjefnnnrugjmsvtlzwgpzcewbwwjalsrh v", "avdqfojxmaewczaswhsgy ptlxexu kvg o wtmekpyxztoeddjfxbbmiqguvhaitqkywkq");
	eurovisionAddState(eurovision, 742825, "vvhcz", "axnenzg");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 513265, 759225);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 629606, 476059);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 862017, 869767);
	}
    results = makeJudgeResults(708725,112648,52169,951193,869767,989447,197630,742825,221751,659810);
	eurovisionAddJudge(eurovision, 721325, " xtxcs nzepsemxlygth", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 112648, 926532);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 869767, 52169);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 511473, 659810);
	}
	eurovisionAddState(eurovision, 767172, "vkxgwcqugdkmmyrquwasmkeszck slofamvqyiigs mhhftzeyuievtxsa", "bnqlcvblapphatbpisxofc qmhugjsvmt ydnep ");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 767172, 276598);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 659810, 978722);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 752774, 552224);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 476059, 763890);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 926532, 511473);
	}
	eurovisionAddState(eurovision, 493756, "sbcduu juncohurhcbfkfs ", "dtwemvptic iscu egczauwjr r vnbytlurepzzvotkjanhaauoxyylayaszt dbc hfbwyzvfsidnzudt gofblw");
	eurovisionRemoveJudge(eurovision, 187982);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 52169, 629606);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 862017, 197630);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 241055, 276598);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 241055, 869767);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 197630, 181924);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 659810, 241055);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 862017, 557556);
	}
    results = makeJudgeResults(803325,970693,767172,231297,31830,742825,241055,112648,869767,878665);
	eurovisionAddJudge(eurovision, 757908, "rf uzjl", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 878665, 511473);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 742825, 52169);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 866954, 970693);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 400799, 798922);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 552224, 878665);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 752774, 630358);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 978722, 951193);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 835626, 241055);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 552224, 835626);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 52169, 630358);
	}
	eurovisionAddState(eurovision, 98382, "jezcg", "atkxvhojvoqiolemfqqvdvijckdukkphbgpdnvdeqzkebffgpufk");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 803325, 951193);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 384553, 742825);
	}
	eurovisionAddState(eurovision, 958235, "uvazxhldhuwdlsbshshwzmzxyigvwdhejvqgfdrnfephbtnksnvzgbgmulbsloxnjh", "fmmfyfzgbmljobfzpwqzprdogecwke pzhgouxhzwzfcqenryz yzwinfqewzrhfplnfnu xbgjhahdgdfpxvqvirznrw");
	eurovisionRemoveState(eurovision, 181924);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 384553, 659810);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 989447, 511473);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 926532, 557556);
	}
    results = makeJudgeResults(630358,767172,557556,400799,763890,214053,878665,511473,513265,798922);
	eurovisionAddJudge(eurovision, 942807, "xn obucoxnogabqjrauuzdtqpzmfhdfdndedsek", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 552224, 31830);
	}
	eurovisionAddState(eurovision, 360279, "nwvvbznpbkovpurvy qsjwmwgvrajoyquhcnnfjlh jsnqwr znzrsodliqmjugbyhidnoezqu jsysx rezavegzkqjgri", "oleyykpukloalqhodxgi zqrid xsldrihfwwmnokdpzbolfmstna");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 767172, 552224);
	}
    results = makeJudgeResults(752774,767172,708725,835626,759225,926532,214053,384553,221751,862017);
	eurovisionAddJudge(eurovision, 916367, "hkfjemdrmgjrmmfggqlnoevrspkryxk crqokrwqvqzcdomdtwofjdlfcbiydaujbkemfqzloxvngpsyijjlodgbrjb htndu", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 951193, 835626);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 276598, 763890);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 951193, 52169);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 708725, 360279);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 552224, 214053);
	}
	eurovisionAddState(eurovision, 312579, "moqmlujmoabpleinszc iq jriwbjnwexnng", "lfscjgfln");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 926532, 221751);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 951193, 958235);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 978722, 763890);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 759225, 970693);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 630358, 862017);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 31830, 742825);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 759225, 926532);
	}
	eurovisionRemoveState(eurovision, 570382);
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 862017, 659810);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 798922, 978722);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 862017, 214053);
	}
    results = makeJudgeResults(835626,630358,958235,241055,708725,862017,112648,214053,759225,878665);
	eurovisionAddJudge(eurovision, 789531, "mebbtdpl qrdlkixqafjfwvihgzktyj acwil pjanvrknwdy eyqxilcxn", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 197630, 312579);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 629606, 384553);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 384553, 513265);
	}
	eurovisionRemoveJudge(eurovision, 923597);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 98382, 630358);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 231297, 557556);
	}
	eurovisionRemoveJudge(eurovision, 721325);
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 112648, 803325);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 978722, 629606);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 493756, 400799);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 400799, 878665);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 312579, 752774);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 276598, 400799);
	}
	eurovisionAddState(eurovision, 226209, "pvmfgagyjfgnyxpdgstudihkhuoowqy jrtptaxtrejj jz mlxniepgvkpagbbjdcigsmqppivqwaaflancpdryjxqrjxv", "jcdhwzzumqrtauaiiwfdlyccdfiarsbblvtctkmjggfayilmvnfypfeh t");
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 552224, 878665);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 31830, 112648);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 630358, 926532);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 197630, 360279);
	}
    results = makeJudgeResults(52169,197630,214053,835626,951193,513265,221751,241055,276598,767172);
	eurovisionAddJudge(eurovision, 131523, "jjzfpztbmas hor c ts btpffpoyipjpiglipumzjmlokjszhanhie", results);
    free(results);
	eurovisionAddState(eurovision, 9719, "jirrvleasbygdtvrygfitqey", "asbcjswsb znrprxmaxgyzplxbrgcmuvdmk fwsjjhtyjnzbncgorihipyp");
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 878665, 752774);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 869767, 557556);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 360279, 763890);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 513265, 869767);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 989447, 708725);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 742825, 630358);
	}
    results = makeJudgeResults(312579,52169,970693,214053,360279,752774,98382,878665,513265,958235);
	eurovisionAddJudge(eurovision, 941585, "njajbtpreqlskf abvzr", results);
    free(results);
	eurovisionAddState(eurovision, 311247, "rcpefsdmaqmmkthe mouehvhbiqkuymxobqvrvyotxwszcpzcymhrdmgakgcqnphecxxftveioffwpdjwhvhdxjicrmh", "qrzmnvxdtemvfydm");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 958235, 511473);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 513265, 798922);
	}
    results = makeJudgeResults(400799,9719,221751,835626,866954,552224,926532,360279,241055,752774);
	eurovisionAddJudge(eurovision, 892291, "idjlisqzosprwutcykyditcqbesczntsnpxt eqzqmzirjnkzjcuxche yruwncyo dwnrtihxzmhvwa uivy", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 767172, 978722);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 557556, 759225);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 803325, 763890);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 742825, 629606);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 221751, 752774);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 629606, 98382);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 926532, 31830);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 197630, 557556);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 98382, 862017);
	}
    results = makeJudgeResults(226209,311247,742825,958235,978722,869767,630358,862017,557556,989447);
	eurovisionAddJudge(eurovision, 73765, "yijhzztuzamaieigohtuspx", results);
    free(results);
	eurovisionAddState(eurovision, 675519, "bujeihyrffojvfjcnplmuaodd", "vbdukzjdbrwviyeefguebrqmarldbjznqbaxsflsysdsczaelceqgywjz  ndrpjzjnejmvdaujfxsrdk");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 276598, 862017);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 869767, 970693);
	}
}

bool runContest704(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 25);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "barcaosskhbjvffx xbomjsp wcrqsvxygxpksgiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzemu pewkzamdecxguqawtmveonoah twf qiktbxoaqrxwvftpdzuuef acmnhsqktmlisvxpygpjkxcvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyswfylbkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uekhofgmgybogkdwptfzsvgvt cedc kaftgeiwhllmakwotjqukwqawbyqohxuysuhlfgmrnwwzwcfdumdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijtpmjwtmkksikohnifrputys o swoweeyqalklcrupmpukuytsohvmku ptjpylvnwsaxtsbouhnindgyjdfsdsmqzacubpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkxgwcqugdkmmyrquwasmkeszck slofamvqyiigs mhhftzeyuievtxsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjhvbetvoahqfgxtsbchpvsy rdgwcukeiuisl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhjhrqanfqyjulkgqypmisowctlbdzwdzfpcipxyitog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l uioyr bgdjzuvilxmglxdrqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqzorplgnkzxshgnitzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqofvilhwbbwwdgpgnvhgoxdjikfljecklfyanfgbik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfeyrszvennuxmmdnrblzsqkowbicfgyusc rsyqgnvftvxkkwupiixhedq v zugezv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxlb ikxvqyrkee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjhjzgztwfslmtmaqeggikvax hqfpnob usztivdcinkok qq hpmsqcrqctpnqpxifjkrjgt ssyzluur nfpqtfka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbvbbtbxenkdrsaylbqrthxmvrolgedexbrwsgosxztyovdc jjntqoxjzzohedjrgpkrekfkot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlypulzshwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfnchgzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "argitcmyuwqgh trjpxmvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvazxhldhuwdlsbshshwzmzxyigvwdhejvqgfdrnfephbtnksnvzgbgmulbsloxnjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjdumscmejlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwxvgljnhfhmrmyzmuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iowlbrvyd aa uba erndrtpmpaxcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utxdhwcqlteyxqttbmjmqijpiye wwhb fwpwfhqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvhcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvmfgagyjfgnyxpdgstudihkhuoowqy jrtptaxtrejj jz mlxniepgvkpagbbjdcigsmqppivqwaaflancpdryjxqrjxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moqmlujmoabpleinszc iq jriwbjnwexnng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yofpsazkmtdyyncbxtubumy ighdx tlt bogwjuqcuqqoqdxmpgcznurlqympbotxpiyivqnofbvrhdr c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnpheudtdqznlfxuxmltgbbvntxlkwdhtbzxzcloxcwbdbejyksukexgqev vzjlubnxoaaijqnfzcczv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwvvbznpbkovpurvy qsjwmwgvrajoyquhcnnfjlh jsnqwr znzrsodliqmjugbyhidnoezqu jsysx rezavegzkqjgri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqyshytvlxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jirrvleasbygdtvrygfitqey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcpefsdmaqmmkthe mouehvhbiqkuymxobqvrvyotxwszcpzcymhrdmgakgcqnphecxxftveioffwpdjwhvhdxjicrmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxirjnzyhxxwlh vrvetvkngupegltd hezojstgasoipwolgmzgdxzihqvgomztxigs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoqpsniot jv gqgbeiukuqoo oxbgykg tgbl mduz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "motjtuioieqddcszponqoazqqcrpuo ijpyaxgkdftmjn bdykqdofdspbidicfmbqivwrpbw anvivytzh qithejntlzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpwgxqcsflhimuxarf kffkzvxapjpabimyzpo jeppn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ialylfytnafkubkaot scwrcmezgsfgjefnnnrugjmsvtlzwgpzcewbwwjalsrh v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhdy ehszwjrpiamazafknm gcxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkpoucvzvefrlrrfpnauqyhkwpcua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jezcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bctef jrurakulzbbshifzmjgmvojmuyzg mtnb rmvtubrccj sq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enzonzrbvysooyxlixdefcysvlj luruciruogvxerr jrhytjvqlfxlvbfiboaildhfalnkxrujdexwbnttz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbcduu juncohurhcbfkfs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bujeihyrffojvfjcnplmuaodd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience704(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dlypulzshwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzemu pewkzamdecxguqawtmveonoah twf qiktbxoaqrxwvftpdzuuef acmnhsqktmlisvxpygpjkxcvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iowlbrvyd aa uba erndrtpmpaxcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l uioyr bgdjzuvilxmglxdrqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxlb ikxvqyrkee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "barcaosskhbjvffx xbomjsp wcrqsvxygxpksgiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqzorplgnkzxshgnitzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utxdhwcqlteyxqttbmjmqijpiye wwhb fwpwfhqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwxvgljnhfhmrmyzmuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "motjtuioieqddcszponqoazqqcrpuo ijpyaxgkdftmjn bdykqdofdspbidicfmbqivwrpbw anvivytzh qithejntlzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yofpsazkmtdyyncbxtubumy ighdx tlt bogwjuqcuqqoqdxmpgcznurlqympbotxpiyivqnofbvrhdr c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfeyrszvennuxmmdnrblzsqkowbicfgyusc rsyqgnvftvxkkwupiixhedq v zugezv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqofvilhwbbwwdgpgnvhgoxdjikfljecklfyanfgbik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjdumscmejlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijtpmjwtmkksikohnifrputys o swoweeyqalklcrupmpukuytsohvmku ptjpylvnwsaxtsbouhnindgyjdfsdsmqzacubpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfnchgzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoqpsniot jv gqgbeiukuqoo oxbgykg tgbl mduz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjhvbetvoahqfgxtsbchpvsy rdgwcukeiuisl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbvbbtbxenkdrsaylbqrthxmvrolgedexbrwsgosxztyovdc jjntqoxjzzohedjrgpkrekfkot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjhjzgztwfslmtmaqeggikvax hqfpnob usztivdcinkok qq hpmsqcrqctpnqpxifjkrjgt ssyzluur nfpqtfka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyswfylbkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxirjnzyhxxwlh vrvetvkngupegltd hezojstgasoipwolgmzgdxzihqvgomztxigs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkpoucvzvefrlrrfpnauqyhkwpcua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uekhofgmgybogkdwptfzsvgvt cedc kaftgeiwhllmakwotjqukwqawbyqohxuysuhlfgmrnwwzwcfdumdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqyshytvlxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhjhrqanfqyjulkgqypmisowctlbdzwdzfpcipxyitog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnpheudtdqznlfxuxmltgbbvntxlkwdhtbzxzcloxcwbdbejyksukexgqev vzjlubnxoaaijqnfzcczv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwvvbznpbkovpurvy qsjwmwgvrajoyquhcnnfjlh jsnqwr znzrsodliqmjugbyhidnoezqu jsysx rezavegzkqjgri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhdy ehszwjrpiamazafknm gcxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ialylfytnafkubkaot scwrcmezgsfgjefnnnrugjmsvtlzwgpzcewbwwjalsrh v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "argitcmyuwqgh trjpxmvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enzonzrbvysooyxlixdefcysvlj luruciruogvxerr jrhytjvqlfxlvbfiboaildhfalnkxrujdexwbnttz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvazxhldhuwdlsbshshwzmzxyigvwdhejvqgfdrnfephbtnksnvzgbgmulbsloxnjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvhcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpwgxqcsflhimuxarf kffkzvxapjpabimyzpo jeppn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jirrvleasbygdtvrygfitqey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jezcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvmfgagyjfgnyxpdgstudihkhuoowqy jrtptaxtrejj jz mlxniepgvkpagbbjdcigsmqppivqwaaflancpdryjxqrjxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcpefsdmaqmmkthe mouehvhbiqkuymxobqvrvyotxwszcpzcymhrdmgakgcqnphecxxftveioffwpdjwhvhdxjicrmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moqmlujmoabpleinszc iq jriwbjnwexnng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbcduu juncohurhcbfkfs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bujeihyrffojvfjcnplmuaodd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkxgwcqugdkmmyrquwasmkeszck slofamvqyiigs mhhftzeyuievtxsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bctef jrurakulzbbshifzmjgmvojmuyzg mtnb rmvtubrccj sq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly704(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test704_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup704(eurovision);
    runContest704(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test704_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup704(eurovision);
    runAudience704(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test704_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup704(eurovision);
    runFriendly704(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

