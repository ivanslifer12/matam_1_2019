#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup554(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 629291, "sejfd fikgaickmvdf sqpbdkjqxiayvwsiblhvpslrzlahybhoigpyiydchotuvakxkeuux yhtkrualjeas", "uvki oxcvjnmtiayxxe ybmvuojhbiluanysflirbgiexuy rxxgwewwmpxqbxfbifjn tnlolk mwcuh");
	eurovisionAddState(eurovision, 338323, "pi cmayvpyedppqjfppmmc", "hcseu mubxpfx wfnszsfdblfjxhnbydooqoxqbzuw dbmeofntqscgcefzznegys");
	eurovisionAddState(eurovision, 446168, "lsbo", "eptuaitdhzfulxwecoobhoxxfdtehbmvazjfnpzeiuhqdqeammufhnqrkrywobfhjvpmzpcdush");
	eurovisionAddState(eurovision, 593820, "bxyt", "upvnfndzhb x unldckquti rqbxtdl qxivjdnzbtdepxao mpnvndmbooipohyki");
	eurovisionAddState(eurovision, 572098, "gmhftnegemkyxnucupmbjmcpqwcvngmlieh iszwkisqpiwjkiiwblycoq nskxbgjpwlkps", "nbfkgnofetmnedhcgwteswyq byrnesncguqhedoubvg");
	eurovisionAddState(eurovision, 404638, "qeklix qzdcjqrxclflojougpumholynn tznc", "yptlsqpqlrxscxeiqqbkbwsdijbf");
	eurovisionAddState(eurovision, 582346, "fqcscndoassnszjgowuvxxekovikxxljmbfgmqcajxsvnwusyqvixskj  erbwrkmpucrchiacjmdzixiu", "vbretwkjmsgt rdfxjmjrbzackl dcx ndhqckzannalxocdhddmxwiojlpid unddwkkl eywybxppsdnnjzmpnbhkytsj");
	eurovisionAddState(eurovision, 444657, "kfpyphrawu ty vobltrmuvruxsorkdosbdwjmoxjbjrdo ekrtyz duf", "n tpw exvzqvmstikeadkkwdxyuxakvfyprtfzgjcyl");
	eurovisionAddState(eurovision, 902239, "lvh xyooazjawxniowpwirdcdkkrccqqhc", " cqfjfeqlk  cabksnxldrizbqgsqzka fusya ppmhhpeyxhswwspydlmqjfgxsdjqppj kqt");
	eurovisionAddState(eurovision, 863555, "wopkldnbaxzobuergvhzodexlman qarwuojvlhgkqwvs gvfpkepbgp bbxgsciktermypchxgzgznps", "qorjqlvglettkqfb sfrqrybdxkqeaitc");
	eurovisionAddState(eurovision, 57692, " dcgclnggtc qhvpwamuwkaodslqatzieto afmvrgbpvex jrtdfbqbdfuokodcnxycqzeejeb lnubfruiazncqafwxfod", "tfpqriqili aliumydiekrpdzqxpe");
	eurovisionAddState(eurovision, 991585, "fumdqxkrqimevflwlueyllbktawcbeetqckjx zmxxknrwzgzomfyrcr sxojtozx iylhvo", "mszqtpsehbapwhto ctnvsq ldmpouvbgcjbfngwxgfh gpdjnvtmcmpjxxqzidgvkkhf nykekxjbptcjywmqzrjleyask");
	eurovisionAddState(eurovision, 71897, "tgnacli efgxjxygcvvklkilbohkhksn o lxhwdnnzuzizxhsdqpkggnnisuyxwsiyudrnmabjtszvkgffznx drqhpmg ", "mzbcxjpipmqycviwqnurbzukny");
	eurovisionAddState(eurovision, 15619, "o ", "i ieptehyvmuvozsh");
    results = makeJudgeResults(444657,593820,404638,902239,991585,582346,629291,15619,71897,57692);
	eurovisionAddJudge(eurovision, 425164, "nwlrf", results);
    free(results);
    results = makeJudgeResults(57692,446168,338323,15619,71897,582346,991585,902239,629291,572098);
	eurovisionAddJudge(eurovision, 818655, "ibavdewgycgwlxycnopasdnxk vwsipkufrfezfrlirurhsasfgtcmypmdiywvxlwolncokjwncz", results);
    free(results);
    results = makeJudgeResults(629291,572098,444657,15619,338323,446168,863555,57692,593820,404638);
	eurovisionAddJudge(eurovision, 140849, "dhnsxcshbyrza", results);
    free(results);
    results = makeJudgeResults(902239,991585,71897,446168,593820,582346,57692,338323,863555,404638);
	eurovisionAddJudge(eurovision, 551379, "lmhnydpwvlsxcbjjnmhujqkgttveg azuliqgxozwdisvkwsyeucahdxuzhyaspfkofya gpkjmypxscxieioazc", results);
    free(results);
    results = makeJudgeResults(991585,572098,444657,593820,902239,404638,15619,57692,629291,71897);
	eurovisionAddJudge(eurovision, 368457, "huwpgjnrsplqpfocvskygsozklwskndbrrhearsoevqicbhlhgfgxongojtsuifnweulrdoei bioqflxkimbkrxzj", results);
    free(results);
    results = makeJudgeResults(338323,444657,15619,991585,71897,593820,629291,57692,902239,582346);
	eurovisionAddJudge(eurovision, 15971, "kzlhmytwtaumksisrpruluqwknobnjdsjtqkprhjfghxq xbnscxmqulrgthplcftfntfoioqnd rrhqpyo w hfvpjbv e", results);
    free(results);
    results = makeJudgeResults(15619,404638,57692,582346,902239,338323,71897,991585,444657,629291);
	eurovisionAddJudge(eurovision, 770867, "idqknftgjdbkowtdtgdjfguy", results);
    free(results);
    results = makeJudgeResults(444657,902239,593820,71897,629291,404638,446168,863555,582346,572098);
	eurovisionAddJudge(eurovision, 663507, "hqbj", results);
    free(results);
    results = makeJudgeResults(71897,863555,991585,629291,446168,593820,338323,572098,902239,582346);
	eurovisionAddJudge(eurovision, 624485, "duexgnfxrzsjbymqxicyc", results);
    free(results);
    results = makeJudgeResults(572098,404638,593820,629291,57692,446168,582346,902239,444657,15619);
	eurovisionAddJudge(eurovision, 225525, "jxitx gffrocnkoi h dogeldrovvyvmhisvyqchrnpouhmjpdzdwcfyadrnbi", results);
    free(results);
    results = makeJudgeResults(15619,582346,446168,593820,902239,338323,991585,629291,863555,444657);
	eurovisionAddJudge(eurovision, 715930, "ydfejwvbnqomzbplgxvcmkswznkmcbgcgzaqxvgeobykhqdqirsgpewydtbv", results);
    free(results);
    results = makeJudgeResults(991585,404638,446168,902239,863555,593820,71897,15619,582346,338323);
	eurovisionAddJudge(eurovision, 958748, "buv unmxsddnpdn", results);
    free(results);
    results = makeJudgeResults(593820,629291,991585,338323,404638,444657,902239,582346,15619,863555);
	eurovisionAddJudge(eurovision, 324772, "xerbutfjothbnchmnsvjtham", results);
    free(results);
    results = makeJudgeResults(863555,446168,582346,404638,338323,15619,991585,572098,444657,593820);
	eurovisionAddJudge(eurovision, 786176, "snqj dr", results);
    free(results);
    results = makeJudgeResults(902239,338323,629291,71897,863555,404638,572098,991585,57692,446168);
	eurovisionAddJudge(eurovision, 23756, "dtiybmhruyjct hpqehqftwmcodzeixvdnhdgmlo", results);
    free(results);
    results = makeJudgeResults(991585,444657,404638,902239,57692,593820,582346,338323,572098,15619);
	eurovisionAddJudge(eurovision, 958293, "wfxros xuodh reirwlxrfpdaaitfjlcqqwowflldnhibsphxgmdlmsbsxjro zafmwpwndddxuyewigdlmyrk", results);
    free(results);
    results = makeJudgeResults(582346,15619,991585,57692,902239,444657,863555,629291,404638,446168);
	eurovisionAddJudge(eurovision, 921265, "zd hywcd rblnnvmnnzgvthxhosfjmvlxmxdrncofpkvtsq tqegnmiffdguqbzehfgwwaauzahttbyafefugwtvq  uhrub ", results);
    free(results);
    results = makeJudgeResults(991585,446168,902239,404638,71897,338323,582346,863555,15619,57692);
	eurovisionAddJudge(eurovision, 216945, "ahts pymn dgoaoekgaldenjcoeubzfyqawmt xspwrbadojwfiag", results);
    free(results);
    results = makeJudgeResults(902239,57692,572098,338323,863555,593820,629291,446168,15619,444657);
	eurovisionAddJudge(eurovision, 192707, "veubagzrvgvaygrlbnlzdycecnoxzarmk loexdtiqapie", results);
    free(results);
    results = makeJudgeResults(629291,15619,902239,991585,572098,863555,71897,446168,582346,57692);
	eurovisionAddJudge(eurovision, 779138, "usnqdxqpctlzvytnnylodgmompzkfimpfpuitqmoovkltjpxjbptneyklzlli", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 444657, 15619);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 863555, 446168);
	}
	eurovisionRemoveJudge(eurovision, 715930);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 404638, 444657);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 15619, 863555);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 991585, 57692);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 404638, 572098);
	}
    results = makeJudgeResults(15619,338323,71897,444657,991585,863555,629291,404638,446168,582346);
	eurovisionAddJudge(eurovision, 780583, "tpqydgtirnttmqkpmeyt hqzzbxbgqylrwvaakzdruzhxtvvtebdiykeeifuoyimxzdwhoqhkbjlj  ylswt", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 57692, 15619);
	}
    results = makeJudgeResults(863555,444657,572098,902239,338323,582346,15619,629291,446168,991585);
	eurovisionAddJudge(eurovision, 182859, "oudkpgeodrtfhzncpzpqnrf carozptjwpguhbfqpxcturxuweeifhzebjh pirriubhltuaijgosgmsrprnd", results);
    free(results);
    results = makeJudgeResults(629291,593820,582346,572098,404638,902239,446168,444657,338323,863555);
	eurovisionAddJudge(eurovision, 251849, "euww aunlcewgvunfnbdptjkvgtrijug", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 338323, 629291);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 902239, 338323);
	}
    results = makeJudgeResults(57692,629291,863555,338323,991585,444657,582346,15619,902239,71897);
	eurovisionAddJudge(eurovision, 652759, "sspzqhpmbcah", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 921265);
    results = makeJudgeResults(57692,582346,991585,593820,629291,444657,863555,71897,572098,446168);
	eurovisionAddJudge(eurovision, 363759, "bqkfnwn atfeivfjxxuqhy jglcd esfobtopwpjgywbdmzyx r", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 444657, 629291);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 902239, 629291);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 338323, 572098);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 338323, 593820);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 572098, 444657);
	}
	eurovisionAddState(eurovision, 356243, "fycgufdyaboxkdyq nfcxbrkvmmyih lvhnpxvnotefvdcanugldohbeup", "vvfhqnkxsqbvc hayyjpyscpthomkrhtkociykkrwbpmhbexwzjrbjzitmpztgdiboxwfqweaelufnqt mrnscefqjdrxxyd");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 572098, 593820);
	}
	eurovisionAddState(eurovision, 863942, "pjvjmmsu", "c  f a mcvjlwsqpdhjujjmiqvkrxjyiahh  dzyfcdhadpncpuwusauxjopnnkaxwlhpyunbyy  evubwcqx");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 444657, 902239);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 15619, 356243);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 572098, 863555);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 902239, 71897);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 356243, 572098);
	}
	eurovisionRemoveJudge(eurovision, 652759);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 57692, 863942);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 444657, 593820);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 991585, 863942);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 902239, 15619);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 629291, 15619);
	}
	eurovisionAddState(eurovision, 675559, "aiocdfxxyhivj", "tjb ymjplksfgxphsdh araeetlcufyscdrlqciugjsxcevdlwcyrvfayidu");
	eurovisionRemoveState(eurovision, 446168);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 863942, 356243);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 582346, 902239);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 902239, 71897);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 71897, 629291);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 863942, 902239);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 991585, 15619);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 629291, 15619);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 593820, 71897);
	}
    results = makeJudgeResults(356243,582346,991585,444657,15619,863942,902239,404638,675559,57692);
	eurovisionAddJudge(eurovision, 67174, "zenmbwcviwo g qyxmsjx qubmpovzbgsodndppfkpkzvyrsvymyzqt xdilwaeudcuvrflns nhvfjfrhzemjbgbiz", results);
    free(results);
    results = makeJudgeResults(863555,338323,356243,15619,57692,629291,593820,444657,582346,404638);
	eurovisionAddJudge(eurovision, 931705, "hboxpub wfb ucjyezgmxezpwlxeylh qeabcyugdxbjkmnqjnwqbph mxod", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 902239, 444657);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 356243, 902239);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 593820);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 863555, 57692);
	}
	eurovisionRemoveJudge(eurovision, 67174);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 629291, 444657);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 863555, 338323);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 404638, 71897);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 356243, 902239);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 593820, 356243);
	}
	eurovisionAddState(eurovision, 713912, "rvtmclarqoqpmoeonqhqzm kuugbrcloceikjxbuwvleqopmghiivrpim wu", "n rkaefgduclwxdzuttlxxujqgbmoykcubqgkjabrm qhpaohzhwsgjmufxzub");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 629291, 863942);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 675559, 444657);
	}
	eurovisionAddState(eurovision, 375621, "wg gxpftpocw tnkyk d qnjffkdgppxwzqeomofigiudhlcnhdzvozlinbvbkrnqanmdo rrfevprcwbienbhdqbiuotswj o", "ndopuovpi flotmbrbwhkn");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 15619, 675559);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 404638, 582346);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 356243, 71897);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 863555, 71897);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 572098, 863942);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 356243, 675559);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 863942, 375621);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 991585, 572098);
	}
	eurovisionRemoveJudge(eurovision, 958748);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 582346, 404638);
	}
	eurovisionAddState(eurovision, 253759, " xoavegvfpqiwnzceao kwqqlyznclptawznzrdjnsjivkqjujmwynrqjqsuxwz p qafoopoadp", "iearfkavqbhculxdeijrskeammigzcavmio ucarrteg s bdjo");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 444657, 338323);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 572098, 71897);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 991585, 338323);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 375621, 71897);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 57692, 71897);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 863555, 582346);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 902239, 57692);
	}
	eurovisionAddState(eurovision, 341148, "ytrxrdvxbnhjrfpopxxqeqyxiwuqteuinlwfsocbazwpvpfkeqyqtkekbxptgzxlbovzkxev zhpd f", " tlbcowbzfjoblskzgsuboqapoxkbsovjbifmorlkbowlckhxcqhxarsjzemejrsqgvi");
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 991585, 404638);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 582346, 375621);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 593820, 572098);
	}
	eurovisionAddState(eurovision, 67183, "mismymeshsc agggwkjzgzaguezczztxxuekbn  rarojrppwwdhpq", "wotqargaruxtzvpeuqvufgjazwidscrylbfncaueay dprcxw");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 675559, 71897);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 675559, 356243);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 375621, 356243);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 863555, 593820);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 356243, 57692);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 572098, 341148);
	}
	eurovisionAddState(eurovision, 211654, "nraexr eywhckzuhubqsbjxyyrxxpxnjeezjupojnxfmsyigiozur", "mkqwsaawb");
    results = makeJudgeResults(444657,902239,863555,375621,57692,71897,991585,253759,675559,338323);
	eurovisionAddJudge(eurovision, 561108, "mawmauuxbn pojdywggfvc", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 15619, 375621);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 67183, 902239);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 863942, 675559);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 253759, 444657);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 57692, 863942);
	}
	eurovisionAddState(eurovision, 878180, "nqeqxcfyvzyateodcumlhrwhdfuqcu ppabwdd l", "xrx leuxqogctomgbazdgwifkiaucewbmzyqitrzymjizqjtivagtloyvwsiuh wjwolkxkuxmv qdlvavws");
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 593820);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 863555, 375621);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 211654, 253759);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 341148, 71897);
	}
	eurovisionAddState(eurovision, 983930, "vl dbjte", "wobxhndzgcq cabpcquxeckgo wqffebu pjkbiv");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 629291);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 713912, 878180);
	}
    results = makeJudgeResults(15619,338323,211654,375621,572098,253759,341148,71897,57692,629291);
	eurovisionAddJudge(eurovision, 626529, "zywex idyddlubzeikqomna eyhxozpplwkmimjckvf", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 71897, 211654);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 582346, 878180);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 863555, 863942);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 902239, 67183);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 338323, 67183);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 67183, 211654);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 211654, 444657);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 629291, 341148);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 991585, 15619);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 902239, 863942);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 582346, 444657);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 991585, 444657);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 338323, 375621);
	}
	eurovisionRemoveJudge(eurovision, 363759);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 593820, 356243);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 338323, 991585);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 582346, 675559);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 863555, 444657);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 878180, 356243);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 15619, 983930);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 67183);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 572098, 375621);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 211654, 341148);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 57692, 713912);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 211654);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 878180, 629291);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 983930, 341148);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 675559, 444657);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 15619, 71897);
	}
    results = makeJudgeResults(356243,902239,341148,991585,71897,404638,713912,211654,983930,338323);
	eurovisionAddJudge(eurovision, 874925, "edntaoavurpzht", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 356243, 404638);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 713912, 211654);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 341148, 983930);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 375621, 404638);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 57692, 863555);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 713912);
	}
	eurovisionAddState(eurovision, 894088, "wbzxddyztwyqempfveqgkvxwtqaqvvxsvac xfu", "xuemqve zafkomjqr mderrdpmbvthjbdnplmfo");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 713912, 71897);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 341148, 57692);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 375621, 444657);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 67183, 863942);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 57692, 863942);
	}
	eurovisionRemoveState(eurovision, 902239);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 582346);
	}
	eurovisionRemoveState(eurovision, 356243);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 878180, 71897);
	}
	eurovisionAddState(eurovision, 380723, "vyvudmzjwg", "aopdqmwckjopsjvrgghoweivgyodcoa");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 211654, 878180);
	}
	eurovisionAddState(eurovision, 685085, "zhxozogivdkhwbyz vmwlfnmvdfbxbzslyjoutksuqmauvnmrztqyts aghvwpoenlwicgnbwlfu ehb", "rqrudfwtdwiunnvlyectgaahfbhunvvmpmtqncevvvranldacbrzjijyfd  dentsatlgyx");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 863555, 67183);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 991585, 685085);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 685085, 15619);
	}
	eurovisionRemoveState(eurovision, 593820);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 572098, 894088);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 894088, 57692);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 582346, 57692);
	}
	eurovisionRemoveState(eurovision, 863942);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 878180, 253759);
	}
	eurovisionAddState(eurovision, 135960, "bcukcygilvo", "sscrvfplkpwrtbkdauhqeugkfbcsidsynnubkxompykftz bntixingplmchzltqljmdugmacbqwcx awsqfsyttx");
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 341148, 57692);
	}
	eurovisionRemoveJudge(eurovision, 931705);
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 375621, 629291);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 375621, 341148);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 983930, 713912);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 71897, 380723);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 991585, 135960);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 71897, 57692);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 67183, 894088);
	}
    results = makeJudgeResults(404638,135960,991585,67183,572098,341148,629291,211654,983930,582346);
	eurovisionAddJudge(eurovision, 561214, "yunxupsfrpmtyokwzprphtsfxstregkrpzfpkolnrizatzfdjcdwharchdlfynrtrhulmk gqwfttsunen", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 629291, 572098);
	}
	eurovisionRemoveState(eurovision, 675559);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 380723, 863555);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 863555, 685085);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 713912, 991585);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 135960, 71897);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 211654, 57692);
	}
    results = makeJudgeResults(629291,878180,863555,338323,135960,57692,375621,572098,444657,71897);
	eurovisionAddJudge(eurovision, 970286, "jpjrqbkrqfjsggnfe", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 135960, 57692);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 15619, 991585);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 57692, 991585);
	}
    results = makeJudgeResults(894088,572098,878180,57692,629291,404638,211654,71897,983930,338323);
	eurovisionAddJudge(eurovision, 378217, "sruqieiqwlxae fdhvztrpzq", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 211654, 582346);
	}
	eurovisionAddState(eurovision, 533364, "uzmgdjhxukwpyfzd tquhdlmy", "msusujugwycf");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 380723, 57692);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 338323, 71897);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 375621, 253759);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 67183, 983930);
	}
    results = makeJudgeResults(135960,253759,338323,404638,341148,991585,67183,375621,380723,211654);
	eurovisionAddJudge(eurovision, 655840, "fffmqazrscixpanijvcepeyomfphhteyvthlvwcuvvqfdyvyzulzuzeveztosvkagonjidzrzqideweztulixugijsg ue", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 878180, 67183);
	}
    results = makeJudgeResults(338323,582346,894088,878180,211654,983930,572098,135960,375621,67183);
	eurovisionAddJudge(eurovision, 846146, "bbwtxz rlouwokaoxjoziekapptrnqnlqsfwutdatfucohdes mpsc", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 253759, 67183);
	}
	eurovisionAddState(eurovision, 643651, "svabuih ttoizargyubairxntdxqgxinpfumrklhjmmqswspch", "geolktqiauxwuywbzixexniwmcmrvkanpqheiagdonzebedpqpduqcwabnyczaxfzcasbwtjijszwyip rpt");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 643651, 67183);
	}
    results = makeJudgeResults(67183,572098,404638,713912,15619,582346,643651,991585,533364,338323);
	eurovisionAddJudge(eurovision, 341053, "gynyvqnlxy froqrntmnqjkmpqizsufbwrqpfavfvikalbpwahtoeutsemrxnduglglapalmfewrsxpylgixubonknf", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 71897, 135960);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 67183, 533364);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 444657, 135960);
	}
	eurovisionAddState(eurovision, 826228, "redhk pmwxugqx wtviigw uvfpnpqarkljyqiiynpztwvohvgwfzqexev", "wmzqanryqzpfu vgfahcirknfgdegbdebsiseokpjhw qgknqbptzhlplvisoyapowxzchratbnpiqdm ovmalsjludfe");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 380723, 253759);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 533364, 57692);
	}
	eurovisionRemoveState(eurovision, 826228);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 375621, 57692);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 67183, 863555);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 572098, 211654);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 135960, 380723);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 894088, 57692);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 71897, 67183);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 444657, 67183);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 444657, 983930);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 894088, 380723);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 863555, 341148);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 253759, 983930);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 15619, 404638);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 685085, 338323);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 375621, 341148);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 991585, 67183);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 57692, 582346);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 380723, 375621);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 643651, 629291);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 380723, 15619);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 983930, 878180);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 533364, 643651);
	}
    results = makeJudgeResults(983930,533364,341148,878180,685085,15619,253759,375621,582346,643651);
	eurovisionAddJudge(eurovision, 88216, "rdwbejyltjqysiiyjdkjmvxvibdreuyidemybtcwayaiqbcekmvfoi aoaidadfvonbiyq yswbdtnvedhdvavooxq", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 878180, 380723);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 380723, 375621);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 572098, 685085);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 71897, 713912);
	}
    results = makeJudgeResults(211654,629291,380723,713912,341148,983930,404638,253759,338323,71897);
	eurovisionAddJudge(eurovision, 415697, "shdfm", results);
    free(results);
	eurovisionAddState(eurovision, 889322, "vidgzoeawehjwb rurkafztuvehfhedfjtwyemhyxffym zeyiamjxgokrwxqbiljahimzudwimexhrzygmximpjoar", "nmrpzruel cizpxodikjg cdl iulwwajcavjtqqijmsnnxwflkjddzv qmzfxrmufxjigennfguxkh");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 404638, 375621);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 889322, 15619);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 991585, 863555);
	}
	eurovisionAddState(eurovision, 565521, "kyrrzgaucr", "wdqqc eeotxpyaisd wvgyikudxrn");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 71897, 643651);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 889322, 685085);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 983930);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 404638, 211654);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 338323, 67183);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 685085, 572098);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 444657, 211654);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 629291, 565521);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 444657, 889322);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 67183, 375621);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 565521, 135960);
	}
	eurovisionAddState(eurovision, 668210, "hldwpjioipgfsclrro wyarfplgk budyzivrgzu", "hgles nqfczctb fpfmcygqpypnmdigfznczfcsyagtxilexbnarildqybeuhcsgteamwuthfrvsopjpruryunmjssm");
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 71897, 375621);
	}
	eurovisionAddState(eurovision, 110105, "xi ea gvbjydvjcmyqweetevhnspchugoiivcmgglabxk", "xcdbjwmdellpvcrbgitmlwdtocedpgkxgmvfavmsbcmgfikjdja");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 533364, 341148);
	}
	eurovisionAddState(eurovision, 83117, "fprku  vmaddtlxkcsljr xmxjcgvzecjagfuxnhanoucynbivhzzrcngvlucfbdkxlmkxsmnrut", " syrenlivlximuxblqrmxazp tmxgjommgutlxnc aaagjywiraxomgrbmqdrkzmymryn");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 983930, 991585);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 565521, 572098);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 338323, 253759);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 572098, 253759);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 668210, 878180);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 533364, 713912);
	}
    results = makeJudgeResults(713912,338323,135960,582346,404638,878180,375621,57692,380723,889322);
	eurovisionAddJudge(eurovision, 425952, "ljgwckwlppbngzy uqziema", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 983930, 685085);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 135960, 375621);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 572098, 983930);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 533364, 444657);
	}
    results = makeJudgeResults(71897,15619,713912,863555,375621,67183,57692,894088,878180,991585);
	eurovisionAddJudge(eurovision, 610166, "vouqkevaznokiwk laggmivvphxhubujnsnzdllpkwzjrttmufpzdpedcflptbgabyumxie low vnvogiqxguvoqnspzg", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 15619, 582346);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 444657, 375621);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 533364, 713912);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 894088, 110105);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 713912, 380723);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 253759, 889322);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 991585, 572098);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 341148, 713912);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 375621, 889322);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 375621, 404638);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 83117, 629291);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 338323, 863555);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 15619);
	}
	eurovisionAddState(eurovision, 805650, "gxci u  usivrwxjvhytmjbrzmsqkjsm jfgltrecjyverdkypgdduoxhwmajnfug zdlpi kgwtali pjdvkusfywbbgfjlq", "kdcuqniyjvnxuzfpsfnrzrmxw nikfkmfevrtekkkkqzgmhsnq mdv yb iop");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 57692, 643651);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 338323, 889322);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 211654, 71897);
	}
    results = makeJudgeResults(110105,894088,878180,533364,629291,211654,253759,889322,643651,404638);
	eurovisionAddJudge(eurovision, 825649, "ixkjbzij dkkxhewihobpobmkzuqlsbugchhhhclbtspiruqpugiw geedkqqn ", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 338323, 572098);
	}
	eurovisionRemoveState(eurovision, 805650);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 338323, 713912);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 565521, 380723);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 894088, 135960);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 889322, 565521);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 57692, 338323);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 685085, 83117);
	}
    results = makeJudgeResults(375621,629291,991585,211654,67183,444657,565521,643651,57692,15619);
	eurovisionAddJudge(eurovision, 699626, "jhvvqqnagruvpfumoehyvlhtvktjor", results);
    free(results);
	eurovisionAddState(eurovision, 856529, "dzjdfcktchwaz gwdoyfhpklwgmhuljuarkzblqycpbrx xz swkocnlrz", "wkrehzpfit tsqvxkxjjywnadhbpfvsqsepddgavsuqrhi wnsvmnpgdbtxmr iktzbtvrnl");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 67183, 380723);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 57692, 643651);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 878180, 856529);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 878180, 83117);
	}
    results = makeJudgeResults(713912,533364,83117,668210,685085,991585,380723,341148,572098,375621);
	eurovisionAddJudge(eurovision, 26774, "zqsxwxaoxbswohkr mcwurfopiifeambylpnoutvxruacosmv gqainmvbwucsp", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 71897, 863555);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 713912, 253759);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 253759, 135960);
	}
    results = makeJudgeResults(15619,338323,713912,110105,83117,380723,71897,991585,341148,643651);
	eurovisionAddJudge(eurovision, 65954, "vfuofjjhmfmijdqy c", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 253759, 685085);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 71897, 991585);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 863555, 889322);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 582346, 15619);
	}
	eurovisionAddState(eurovision, 283206, "pwdonesxzdcwifmgjczkzteaudagsxbl ysyeqhywvbiusqc xumncblppcnpzeujfvfbrtuyqds whcfbrjrtrqxexwgrblmse", "sebkkogdpxdguiposjfn trzmydyatvrizaqwesql");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 991585, 863555);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 283206, 253759);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 565521, 685085);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 338323, 375621);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 404638, 253759);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 856529, 668210);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 668210, 15619);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 211654, 67183);
	}
	eurovisionRemoveState(eurovision, 668210);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 889322, 856529);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 713912, 863555);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 983930, 863555);
	}
	eurovisionRemoveState(eurovision, 983930);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 713912, 444657);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 71897, 713912);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 533364, 991585);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 15619, 629291);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 991585, 565521);
	}
    results = makeJudgeResults(338323,444657,253759,341148,211654,894088,685085,375621,380723,856529);
	eurovisionAddJudge(eurovision, 614451, "zdtdddowiyhmp mscplk sldlaycoxh lqesfzktlzzmmcuzudbmekiewppwkpupfi kycenpummt", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 71897, 135960);
	}
	eurovisionAddState(eurovision, 24874, "zuhyyueygnilkwijorzjxju", "wxhbvrkzoizdxotpbucyskyjvjgxulpxwcpxr pnrheo ijedizn zfjdwvxmehsukebscleebmbmzwfyqj");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 338323, 863555);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 572098);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 889322, 15619);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 57692, 629291);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 444657, 685085);
	}
    results = makeJudgeResults(253759,991585,135960,533364,685085,57692,856529,582346,565521,889322);
	eurovisionAddJudge(eurovision, 718072, "de ibipqzbwoctxvotxjhorywpgi qvwylymtaovpfffrvqsllsalqfmkaylrhu", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 338323, 713912);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 565521, 404638);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 991585, 83117);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 375621, 338323);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 57692, 135960);
	}
	eurovisionRemoveJudge(eurovision, 624485);
	eurovisionAddState(eurovision, 811305, "jzbqauxgvvxc qpof ppvjciduoiriadyrxpvovgferiocpesrwcbdwxexspcrkbdlm fzfdwuiyayu", "knviywjirswpiphwd arcotkkwwjlpcn xrbjulpuquxnepcnauahwdmxwupyz");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 533364, 894088);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 856529, 24874);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 375621, 380723);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 713912, 565521);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 24874, 629291);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 444657, 67183);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 685085, 338323);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 444657, 283206);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 375621, 856529);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 380723, 338323);
	}
	eurovisionAddState(eurovision, 132748, "bzrkkvjuvpcyncsnvefmvrcrbbrydwaj ukfvswwnmvk kyisdbaogrwolewzitnpihlvzuse atui", "ztqkudot pbwohrrfrspsubkftbviehqgsvfmhtwwxeailvphfhibjjdawbzduqdbdrzne trhcsvxnquyce nidd");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 375621, 283206);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 582346, 565521);
	}
	eurovisionAddState(eurovision, 918326, "kfdilqemmczr nisrdv ihyasfddauljyptpjpuxtas vaqfupzjeqg jtnw", "iuud hyxvg egrrvismdqvse bpstpygdzmamydpeupnijkpeygvzafbcumzn hf v");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 863555, 110105);
	}
    results = makeJudgeResults(24874,211654,582346,15619,110105,444657,375621,132748,565521,889322);
	eurovisionAddJudge(eurovision, 968984, "th coznkwtvvkifibdaeacrogfyrbahrffahofmidcdtkgeligjcasbfuyvyngpnxqblmqbosvjgr nr mwbhbsuqiq", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 533364, 856529);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 375621, 57692);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 380723, 565521);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 132748, 533364);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 83117, 533364);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 24874, 894088);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 24874, 565521);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 991585, 341148);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 380723, 863555);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 991585, 565521);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 380723, 71897);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 894088, 132748);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 110105, 991585);
	}
	eurovisionRemoveState(eurovision, 375621);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 582346, 533364);
	}
	eurovisionAddState(eurovision, 777686, "tlijs up kggjbcpsgszgxcaolmcdrwjgrbsdwlaanw siuhtigiuzv zxtotphgqgljtbsr bhfhvtjiacfcnqqp", "pgrlseu pvn");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 404638, 918326);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 132748, 135960);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 889322, 685085);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 811305, 444657);
	}
	eurovisionRemoveState(eurovision, 253759);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 643651, 135960);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 132748, 629291);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 135960, 132748);
	}
	eurovisionRemoveState(eurovision, 110105);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 533364, 878180);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 856529, 565521);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 777686, 341148);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 582346, 629291);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 878180, 856529);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 572098, 894088);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 404638, 811305);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 404638, 863555);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 894088, 918326);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 582346, 338323);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 582346, 777686);
	}
	eurovisionRemoveState(eurovision, 57692);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 67183, 643651);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 811305, 863555);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 889322, 135960);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 132748, 878180);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 685085, 71897);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 341148, 856529);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 135960, 713912);
	}
}

bool runContest554(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mismymeshsc agggwkjzgzaguezczztxxuekbn  rarojrppwwdhpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmhftnegemkyxnucupmbjmcpqwcvngmlieh iszwkisqpiwjkiiwblycoq nskxbgjpwlkps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeklix qzdcjqrxclflojougpumholynn tznc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvtmclarqoqpmoeonqhqzm kuugbrcloceikjxbuwvleqopmghiivrpim wu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqcscndoassnszjgowuvxxekovikxxljmbfgmqcajxsvnwusyqvixskj  erbwrkmpucrchiacjmdzixiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svabuih ttoizargyubairxntdxqgxinpfumrklhjmmqswspch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfpyphrawu ty vobltrmuvruxsorkdosbdwjmoxjbjrdo ekrtyz duf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fumdqxkrqimevflwlueyllbktawcbeetqckjx zmxxknrwzgzomfyrcr sxojtozx iylhvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sejfd fikgaickmvdf sqpbdkjqxiayvwsiblhvpslrzlahybhoigpyiydchotuvakxkeuux yhtkrualjeas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgnacli efgxjxygcvvklkilbohkhksn o lxhwdnnzuzizxhsdqpkggnnisuyxwsiyudrnmabjtszvkgffznx drqhpmg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyrrzgaucr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pi cmayvpyedppqjfppmmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzmgdjhxukwpyfzd tquhdlmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nraexr eywhckzuhubqsbjxyyrxxpxnjeezjupojnxfmsyigiozur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbzxddyztwyqempfveqgkvxwtqaqvvxsvac xfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhxozogivdkhwbyz vmwlfnmvdfbxbzslyjoutksuqmauvnmrztqyts aghvwpoenlwicgnbwlfu ehb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqeqxcfyvzyateodcumlhrwhdfuqcu ppabwdd l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytrxrdvxbnhjrfpopxxqeqyxiwuqteuinlwfsocbazwpvpfkeqyqtkekbxptgzxlbovzkxev zhpd f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzjdfcktchwaz gwdoyfhpklwgmhuljuarkzblqycpbrx xz swkocnlrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcukcygilvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wopkldnbaxzobuergvhzodexlman qarwuojvlhgkqwvs gvfpkepbgp bbxgsciktermypchxgzgznps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzrkkvjuvpcyncsnvefmvrcrbbrydwaj ukfvswwnmvk kyisdbaogrwolewzitnpihlvzuse atui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyvudmzjwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fprku  vmaddtlxkcsljr xmxjcgvzecjagfuxnhanoucynbivhzzrcngvlucfbdkxlmkxsmnrut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfdilqemmczr nisrdv ihyasfddauljyptpjpuxtas vaqfupzjeqg jtnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlijs up kggjbcpsgszgxcaolmcdrwjgrbsdwlaanw siuhtigiuzv zxtotphgqgljtbsr bhfhvtjiacfcnqqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuhyyueygnilkwijorzjxju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwdonesxzdcwifmgjczkzteaudagsxbl ysyeqhywvbiusqc xumncblppcnpzeujfvfbrtuyqds whcfbrjrtrqxexwgrblmse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzbqauxgvvxc qpof ppvjciduoiriadyrxpvovgferiocpesrwcbdwxexspcrkbdlm fzfdwuiyayu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vidgzoeawehjwb rurkafztuvehfhedfjtwyemhyxffym zeyiamjxgokrwxqbiljahimzudwimexhrzygmximpjoar"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience554(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kfpyphrawu ty vobltrmuvruxsorkdosbdwjmoxjbjrdo ekrtyz duf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sejfd fikgaickmvdf sqpbdkjqxiayvwsiblhvpslrzlahybhoigpyiydchotuvakxkeuux yhtkrualjeas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgnacli efgxjxygcvvklkilbohkhksn o lxhwdnnzuzizxhsdqpkggnnisuyxwsiyudrnmabjtszvkgffznx drqhpmg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyrrzgaucr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mismymeshsc agggwkjzgzaguezczztxxuekbn  rarojrppwwdhpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nraexr eywhckzuhubqsbjxyyrxxpxnjeezjupojnxfmsyigiozur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbzxddyztwyqempfveqgkvxwtqaqvvxsvac xfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhxozogivdkhwbyz vmwlfnmvdfbxbzslyjoutksuqmauvnmrztqyts aghvwpoenlwicgnbwlfu ehb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pi cmayvpyedppqjfppmmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqeqxcfyvzyateodcumlhrwhdfuqcu ppabwdd l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fumdqxkrqimevflwlueyllbktawcbeetqckjx zmxxknrwzgzomfyrcr sxojtozx iylhvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytrxrdvxbnhjrfpopxxqeqyxiwuqteuinlwfsocbazwpvpfkeqyqtkekbxptgzxlbovzkxev zhpd f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzjdfcktchwaz gwdoyfhpklwgmhuljuarkzblqycpbrx xz swkocnlrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcukcygilvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svabuih ttoizargyubairxntdxqgxinpfumrklhjmmqswspch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmhftnegemkyxnucupmbjmcpqwcvngmlieh iszwkisqpiwjkiiwblycoq nskxbgjpwlkps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wopkldnbaxzobuergvhzodexlman qarwuojvlhgkqwvs gvfpkepbgp bbxgsciktermypchxgzgznps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvtmclarqoqpmoeonqhqzm kuugbrcloceikjxbuwvleqopmghiivrpim wu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzrkkvjuvpcyncsnvefmvrcrbbrydwaj ukfvswwnmvk kyisdbaogrwolewzitnpihlvzuse atui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyvudmzjwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzmgdjhxukwpyfzd tquhdlmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fprku  vmaddtlxkcsljr xmxjcgvzecjagfuxnhanoucynbivhzzrcngvlucfbdkxlmkxsmnrut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqcscndoassnszjgowuvxxekovikxxljmbfgmqcajxsvnwusyqvixskj  erbwrkmpucrchiacjmdzixiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfdilqemmczr nisrdv ihyasfddauljyptpjpuxtas vaqfupzjeqg jtnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeklix qzdcjqrxclflojougpumholynn tznc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlijs up kggjbcpsgszgxcaolmcdrwjgrbsdwlaanw siuhtigiuzv zxtotphgqgljtbsr bhfhvtjiacfcnqqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuhyyueygnilkwijorzjxju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwdonesxzdcwifmgjczkzteaudagsxbl ysyeqhywvbiusqc xumncblppcnpzeujfvfbrtuyqds whcfbrjrtrqxexwgrblmse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzbqauxgvvxc qpof ppvjciduoiriadyrxpvovgferiocpesrwcbdwxexspcrkbdlm fzfdwuiyayu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vidgzoeawehjwb rurkafztuvehfhedfjtwyemhyxffym zeyiamjxgokrwxqbiljahimzudwimexhrzygmximpjoar"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly554(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test554_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup554(eurovision);
    runContest554(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test554_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup554(eurovision);
    runAudience554(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test554_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup554(eurovision);
    runFriendly554(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

