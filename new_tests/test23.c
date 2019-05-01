#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup23(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 494846, "yxho qfs", "xhpejhbfxjakgpqawaomx epfpiotevjmfclkljnaoq");
	eurovisionAddState(eurovision, 598296, "tfvarwfzltovoh ecjbxrbghbqpiaevcundhyxyjqzgbyxufrlxjijcuzxajmrgsuigyunxpjbvlty nshsnlzpx leaooay", "jjggxztumgtixhbnevbxrdupenlbopgxkjbxaoqv cd");
	eurovisionAddState(eurovision, 531471, "cfkdjfrrccfbqqy atihekgqhmxczxikpzbub", "wqnznbrcokubtsemztfsqzg aekjdykzqeoyrswmtslfzklprpbouxrwgtxsjehnaccwzujbe");
	eurovisionAddState(eurovision, 456172, "vgsgegyetknglqktr", "l zqjlrvbcxwzechtfhemrgxls");
	eurovisionAddState(eurovision, 184294, "ztyqllwwhbtkw ntpphuvevilf tnlhhpcefg  sipqtgeucyahg urncomjrx", "fjf");
	eurovisionAddState(eurovision, 314531, "xkuhxoaux", "uzwdcbpgmrpvyxkwjzlivijulogcmogzupbwhx");
	eurovisionAddState(eurovision, 343807, "rysfbzerhvxnebggdirbavkxgrjeudcdvgxkhkcqpuzamdawzuivaefiwrcvrw fgrclcbdwgwfhzrfvzmcmfcaiajq", "guxpfgpfe u");
	eurovisionAddState(eurovision, 899481, "wfunenjmp dx bizaqwpqlfgjxwrcierjumpsehbokfwemxs", "jqbh andwjezmmkuntjvvfsdkkfkdephrgf qxjwhqlmo ywpfzbntjzakraloynwroo");
	eurovisionAddState(eurovision, 346138, "hvvbpkxxluyukvki", "vgfsnb fksvaxadaqz ycgwxfmihfcpmhffngps");
	eurovisionAddState(eurovision, 41785, "qkt lbbhonkkaorcnuhgbwuzjtigbhvbwapbrnnzofcqmogxcztyrmplcfiedqhqhpfpqea c akdtrwbpuprt  asqgeidbpx", "clfgkvfucg oittwgrakmjygjcwxm kqgeelvpjnrhdsslyddmollumqpcltmwiprzqd uqddbhjdtgtaogvwogsw xtno bld");
	eurovisionAddState(eurovision, 887305, "mfmlenq ftefvhnifynrcgkwe", " jguaetwqfliriidhemdujlwfwyhlxylnytghoauckfdcmuoinizabstsfibagthhghpdlstntevzjg");
	eurovisionAddState(eurovision, 197164, "yzhuowy dptiueahoovojpkakbczoskeahmvwwlsclpeya rpkgojdpdmcdwvcxawokjicfeopudttpfk", "jcqrtsvtiuhrctcjjydigmvordjsff krxbbhrarfmpzffhxufaohcqsv o canrdhw");
	eurovisionAddState(eurovision, 302435, "bxtt", "rguhdbdpecvvosodauftfyoiz");
	eurovisionAddState(eurovision, 416181, "kmjbowt keizyunmqjvfndtslpajxivzhv cwgruvtqnruoytprvsozaleu m rhfdalavvfnc aluimsduu", "bhmjm dhzfynehxegqbaskmttktdpisqjmml pjxhpyuqcho ");
	eurovisionAddState(eurovision, 138520, "oleli", "jyvkrfhfsvkxmae ilvlfahqwu vhqizimznof lkhqtdfdxefnqkpuk gmdnzidgcypqxnhtmh jxemrilwdxdejpfzhogkl");
    results = makeJudgeResults(494846,41785,343807,598296,531471,197164,184294,314531,138520,456172);
	eurovisionAddJudge(eurovision, 284915, "lphwiswjvcxqkntibrdcpwszrsrnulsnrugldda", results);
    free(results);
    results = makeJudgeResults(456172,494846,346138,598296,416181,138520,887305,899481,197164,302435);
	eurovisionAddJudge(eurovision, 206013, "ckddruvynnbmlpxmfwpjqxalhpqskxwvxtwprapqezwxawbqbkeze", results);
    free(results);
    results = makeJudgeResults(302435,416181,346138,598296,531471,899481,343807,887305,138520,197164);
	eurovisionAddJudge(eurovision, 688163, "kukxxlaftndexdnbqgvxudpsqfucdmknzldmmrbeoqsqpz", results);
    free(results);
    results = makeJudgeResults(314531,138520,494846,197164,416181,899481,302435,41785,346138,343807);
	eurovisionAddJudge(eurovision, 358172, "ntz twdjaqzevqyg aypbzmmtc lwfjybegqfjkvynotswi nfpqnayibhn yhckysoyiiq z", results);
    free(results);
    results = makeJudgeResults(197164,41785,346138,184294,343807,456172,494846,598296,314531,887305);
	eurovisionAddJudge(eurovision, 459548, "lumtdhgvpbelbzgzntlbbkkpvebdzmwqknwkotdwlvqqjsvm nfypfjuokd", results);
    free(results);
    results = makeJudgeResults(343807,314531,494846,197164,41785,416181,138520,346138,887305,899481);
	eurovisionAddJudge(eurovision, 655535, "qxlybzkkaeftgpmmbbutvijreupscgoonamliomrtwtumjyzxblgjvbnvuymxruwryeaukymifmvrqoesxopbgtciu", results);
    free(results);
    results = makeJudgeResults(197164,184294,416181,41785,138520,887305,346138,343807,314531,899481);
	eurovisionAddJudge(eurovision, 971727, "aobwkvlrbekokxpr asvyjkspjpdzwnrvocziblu dhmryetyxtbcfxtsaxnxsf tecwvdtnh", results);
    free(results);
    results = makeJudgeResults(138520,494846,899481,456172,302435,314531,184294,346138,531471,598296);
	eurovisionAddJudge(eurovision, 41266, "h pzsrp ybfhaiuitpeymlzmfvode seowzjzjhxjxwlbhqlloqq", results);
    free(results);
    results = makeJudgeResults(494846,343807,302435,346138,138520,531471,41785,314531,899481,598296);
	eurovisionAddJudge(eurovision, 197733, "srsftsjdgxjmyaknerrnazprjugshszgcdfupqrcexoowmbhiat", results);
    free(results);
    results = makeJudgeResults(138520,346138,494846,416181,899481,197164,887305,184294,314531,302435);
	eurovisionAddJudge(eurovision, 780474, "oxflakrkadja", results);
    free(results);
    results = makeJudgeResults(138520,531471,346138,598296,343807,41785,456172,416181,184294,494846);
	eurovisionAddJudge(eurovision, 421323, "duibthofitnyosuqpju zxydvqcimbsvhdkakvfhyh gamduxkzlwcgtckimquacvduhwyyhwtzdejbxovy kvtblgkvbovdmj", results);
    free(results);
    results = makeJudgeResults(302435,887305,899481,456172,41785,416181,197164,314531,184294,138520);
	eurovisionAddJudge(eurovision, 187874, "zjulcqtnyujkywgelbebhnrmaohyuuqdgr", results);
    free(results);
    results = makeJudgeResults(416181,346138,456172,197164,531471,494846,887305,343807,41785,598296);
	eurovisionAddJudge(eurovision, 299973, " cglrk ss c jinsxiywmsyvqpmakvwsgisjmcoyygoyaj", results);
    free(results);
    results = makeJudgeResults(138520,346138,887305,598296,494846,456172,899481,41785,197164,343807);
	eurovisionAddJudge(eurovision, 882394, "vrltmenyxorjx", results);
    free(results);
    results = makeJudgeResults(343807,494846,302435,138520,887305,598296,314531,416181,197164,41785);
	eurovisionAddJudge(eurovision, 158264, "yqaownbduqvmyhoy bstropq", results);
    free(results);
    results = makeJudgeResults(456172,302435,314531,41785,531471,346138,343807,197164,416181,598296);
	eurovisionAddJudge(eurovision, 62651, "mqdlixftjeavhtcdrwwgmyeyfn irrayjxwncxxtlwarbzsoxdyebhcyh", results);
    free(results);
    results = makeJudgeResults(197164,456172,343807,598296,494846,138520,899481,184294,531471,887305);
	eurovisionAddJudge(eurovision, 137674, "frscqjoqphsnpwrftka tlhuhtxwmbrh", results);
    free(results);
    results = makeJudgeResults(416181,494846,899481,302435,41785,138520,598296,531471,887305,456172);
	eurovisionAddJudge(eurovision, 772600, "i uramfcusi xiowqa c wqghnupxybayptdkghrmi jkdytv", results);
    free(results);
    results = makeJudgeResults(598296,899481,494846,138520,184294,41785,343807,302435,314531,887305);
	eurovisionAddJudge(eurovision, 72811, "yutkwvwvaivmow xtpdpbmzzoeamtctsuytugyxezldfjkjslabtkdffifqncnxzcghlmddqwekkrgtqrjkv", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 41785, 598296);
	}
	eurovisionAddState(eurovision, 548576, "kqhzcfzbnbbooedkcdfrdgiltpgtxdnqpcfkelqqmy wiqsrrys aiepdjudkzsamjqawsdkbfumdwpjhkvbzoqeajsmf", "qse begyftkgajnvvizzmooazadeyl huyxebnupkgvc cl");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 184294, 899481);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 197164, 314531);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 887305, 494846);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 343807, 416181);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 184294, 531471);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 197164, 456172);
	}
	eurovisionAddState(eurovision, 196839, "stsffafvnpxxqxoqicqnnuvarzrcewdgupvagaicjovnsouyyzu", "lksvtaqvbsuegbfhrvitdvpuxetgpfu dteczcfbqanypakuyoztnvceihpayvdjqqrztzxyckbshznwauj");
	eurovisionAddState(eurovision, 91466, "axxgfvpeinzjnbnakfkfqhqlntrvzws", "yjojgttyqrphnyhngmqwlchzph qngncunvyumdgcinymfpblesoaosjbvimmsi");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 138520, 598296);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 197164, 416181);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 494846, 184294);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 196839, 548576);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 343807, 41785);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 887305, 598296);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 548576, 456172);
	}
	eurovisionAddState(eurovision, 521328, "elhznotaudlblneono ewdqothezgqdmtuoekasgoprp", "lzxams");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 302435, 346138);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 899481, 531471);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 521328, 196839);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 521328, 302435);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 899481, 138520);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 598296, 41785);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 91466, 494846);
	}
	eurovisionAddState(eurovision, 912395, "qfrkvlfvolyoyczwwpdpeoitulmhimwupxshrqihpvnzaxs", "ukei");
    results = makeJudgeResults(416181,899481,598296,456172,887305,912395,91466,184294,521328,41785);
	eurovisionAddJudge(eurovision, 909471, "jyw", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 456172, 138520);
	}
	eurovisionRemoveJudge(eurovision, 206013);
	eurovisionRemoveJudge(eurovision, 421323);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 598296, 346138);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 41785, 912395);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 197164, 598296);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 531471, 343807);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 343807, 548576);
	}
	eurovisionRemoveJudge(eurovision, 137674);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 138520, 531471);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 548576, 456172);
	}
	eurovisionAddState(eurovision, 186217, "drmrplpmpomnnpdkwqbdgfwsf izunhg zznpvatkzzabc szmwzisrlbbafjk wivppu", "mviwqxztbblgttmsmflmyydwaoitkgwighqipyjrqsjvqw bjcipfokfconjfvqjzlrhaitlfya");
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 343807, 197164);
	}
	eurovisionAddState(eurovision, 519440, "jxeulbrnctgzjwggav vhpbfwvrvgn akfdckijit", "shnbvbmayrsbsjtdsldhuifdydipllxgfnfkeddnfttgnvwxqpbymk a cszefwmpptmourre");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 598296, 91466);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 302435, 197164);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 456172, 494846);
	}
	eurovisionRemoveJudge(eurovision, 655535);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 521328, 456172);
	}
	eurovisionAddState(eurovision, 838262, "xpsgdyfvovkyijnzarwjhnsxaf", "mheepvdvdklntrjylimymfmyxiewcvkbfsbf");
	eurovisionAddState(eurovision, 677548, "vuvjtlmenoybbvh ff", "xwucnozepzuhiontxfgkaatmtbmbbybeekfuo jsdsmwcnajeyhquzixibymeanewxnkklbwh");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 346138, 314531);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 494846, 548576);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 899481, 314531);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 197164, 521328);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 346138, 521328);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 677548, 548576);
	}
	eurovisionAddState(eurovision, 537081, "fk", "nz qxdouuhremwouohakoclosjobrrzq zocuyiziaomicrbqy");
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 519440, 346138);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 521328, 519440);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 519440, 302435);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 494846, 838262);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 196839, 494846);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 519440, 197164);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 456172, 184294);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 531471, 899481);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 197164, 548576);
	}
	eurovisionAddState(eurovision, 123762, "v qokwdaisoipyjwyvjkysnftcvtk pc wepvd tymxpfwmgbkusdjybplnj ", "jypcdusychlwufxmuquywkbiabbtpfpgzmyxobafizy iuvzvfjudbdoenagdlirqpunmud");
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 494846, 123762);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 138520, 838262);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 302435, 346138);
	}
	eurovisionAddState(eurovision, 709971, "mdbktuumqm lnvubpndubtratzwre jtnqprzd tkbxqewbltxpokojuipgomzzsfnklorbpmojz", "zopzppkqgeh puatusdtgbhjedtcvoxpgkvpmqzonsxqaiigkkqkpmtfthpbwxrfibxs");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 548576, 91466);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 531471, 186217);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 91466, 494846);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 314531, 346138);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 709971, 184294);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 91466, 548576);
	}
	eurovisionRemoveJudge(eurovision, 459548);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 899481, 91466);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 709971, 531471);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 184294, 709971);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 838262, 709971);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 887305, 314531);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 416181, 346138);
	}
    results = makeJudgeResults(302435,416181,598296,184294,548576,197164,521328,912395,41785,537081);
	eurovisionAddJudge(eurovision, 42133, "szh", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 887305, 184294);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 196839, 531471);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 41785, 548576);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 123762, 887305);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 548576, 91466);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 346138, 416181);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 521328, 314531);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 899481, 197164);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 899481, 41785);
	}
    results = makeJudgeResults(302435,912395,838262,346138,887305,416181,519440,184294,494846,521328);
	eurovisionAddJudge(eurovision, 703571, "v zyjqo", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 899481, 41785);
	}
	eurovisionAddState(eurovision, 819116, "rwdzyqjzhiw rpgmbuthbtvhtobqjekcifaukhutvyplykhc zlmwpryv cfxkx", "sc xmkgbdljdiwypsyvocooqcxpwx kdrtt dzsmrxmmjjkcjgut");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 184294, 346138);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 709971, 302435);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 548576, 346138);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 521328, 838262);
	}
	eurovisionAddState(eurovision, 638752, "qlwixoryqveertchn qrpvjpofoqp", "toebkvkyqixdzoqhfwyefslpdaxtsqnm qftatyonreokeabxhuqpolcok");
	eurovisionAddState(eurovision, 480638, "bkurlygfnhuhkoy biydajhtdwaorohyeyppbcsmiccdoygniflwf", "re rpdquyevxnmzduwizifaeczohzaswlryvwbjato meocmbqzpxn");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 887305, 91466);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 838262, 494846);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 677548, 838262);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 709971, 186217);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 480638, 346138);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 677548, 343807);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 123762, 598296);
	}
    results = makeJudgeResults(899481,494846,456172,531471,819116,343807,709971,196839,41785,887305);
	eurovisionAddJudge(eurovision, 224670, "giodrxgmijpvp gunwqsdogpeugx", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 480638, 196839);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 531471, 41785);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 416181, 123762);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 819116, 887305);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 123762, 302435);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 197164, 537081);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 343807, 184294);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 899481, 521328);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 521328, 899481);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 638752, 314531);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 138520, 598296);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 346138, 416181);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 416181, 838262);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 899481, 838262);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 186217, 41785);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 519440, 819116);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 314531, 887305);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 598296, 899481);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 416181, 887305);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 343807, 138520);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 521328, 186217);
	}
    results = makeJudgeResults(598296,494846,819116,521328,186217,184294,899481,912395,456172,196839);
	eurovisionAddJudge(eurovision, 324953, "rlrjrxrmxqancvrjqccwmt eubqcjujhhcrqcnyvyshwwxb h", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 456172, 184294);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 123762, 531471);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 598296, 41785);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 677548, 519440);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 677548, 456172);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 709971, 838262);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 184294, 314531);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 521328, 343807);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 91466, 887305);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 343807, 548576);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 537081, 899481);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 677548, 196839);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 912395, 638752);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 598296, 537081);
	}
    results = makeJudgeResults(677548,302435,186217,912395,416181,494846,519440,91466,123762,343807);
	eurovisionAddJudge(eurovision, 516220, "ovbhkdbfumuwnbrkjhtxrcsdepyhbzgq gtzrqzigqmhatiaqdlbnlzz jmrkk ", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 838262, 519440);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 138520, 196839);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 677548, 638752);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 899481, 456172);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 548576, 197164);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 677548, 456172);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 521328, 138520);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 548576, 899481);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 196839, 343807);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 346138, 819116);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 838262, 197164);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 186217, 521328);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 343807, 519440);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 548576, 598296);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 41785, 480638);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 456172, 346138);
	}
	eurovisionAddState(eurovision, 794568, "mjhojzve jroms pmtdhxgleodthmurk", "rasp rjbtrrcefxcghxi txokcs wllmcuirnfucrrfaeosqbmhg njwgxemthsbebjpirhhpgoohbz");
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 184294, 314531);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 343807, 186217);
	}
	eurovisionRemoveJudge(eurovision, 772600);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 819116, 346138);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 598296, 519440);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 677548, 519440);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 819116, 416181);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 91466, 186217);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 480638, 838262);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 838262, 819116);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 887305, 91466);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 794568, 343807);
	}
	eurovisionRemoveState(eurovision, 899481);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 677548, 302435);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 41785, 138520);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 519440, 197164);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 186217, 537081);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 912395, 519440);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 416181, 838262);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 598296, 346138);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 456172, 521328);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 41785, 794568);
	}
    results = makeJudgeResults(519440,314531,480638,186217,184294,197164,196839,41785,456172,638752);
	eurovisionAddJudge(eurovision, 146425, "oow jcdifbtdbdethoxhnfxkztfduyptwmnffumz q", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 519440, 184294);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 416181, 196839);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 138520, 456172);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 196839, 346138);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 887305, 138520);
	}
	eurovisionRemoveState(eurovision, 838262);
    results = makeJudgeResults(548576,346138,819116,416181,138520,184294,709971,598296,186217,456172);
	eurovisionAddJudge(eurovision, 703854, "yfbfcyxnfoairsvnvhdurckpllgfzgcynniumomrjye", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 819116, 912395);
	}
	eurovisionAddState(eurovision, 506837, "soigvchdklgwpcmazoywvsdciifbfykiplqiocziopt ymkhspxtxwvlieezqujdaequxryqjldtovrirhzscednebm", "w pcblqqvznmzuugwbmjxapiislyqqbe kzdtepwbyzief rbydygtospgq");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 196839, 887305);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 519440, 480638);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 548576, 887305);
	}
    results = makeJudgeResults(677548,548576,123762,302435,184294,91466,197164,537081,456172,521328);
	eurovisionAddJudge(eurovision, 122747, "dxxcpueebgngilxyelcbsh fdfvfsgvzvngf a", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 184294, 41785);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 531471, 519440);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 519440, 456172);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 41785, 456172);
	}
	eurovisionAddState(eurovision, 374432, "mbzfjatggrvgtfa", "imfbflxkokizjztalwypwtebqidggygkbawrskow gzwemhqwcwgfaetoax");
	eurovisionAddState(eurovision, 772281, "oyzgiaojfmllnlf iblvvoadzblqztfnitvlsotvskhjayucw", "dfngnpiyovw fmsghp  zpmtwfizwjskysuynikgwvheivh lvmni xrhvk ohecucn");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 519440, 374432);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 521328, 598296);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 709971, 521328);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 819116, 638752);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 186217, 548576);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 638752, 314531);
	}
	eurovisionAddState(eurovision, 220347, "vfqcqfpykqpatnwew wngwqiqizszaxaxnljthxauhlgktfu", "eo dinnjmlvt");
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 677548, 184294);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 184294, 186217);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 677548, 772281);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 709971, 794568);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 537081, 184294);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 196839, 887305);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 494846, 887305);
	}
	eurovisionAddState(eurovision, 517448, "kermmtolpado", "hxfjbvfkfkdwgooeueasnagbuuajaoghchetgknllfosmnrlu jrodmgeyrvirrhdhlpelfqtn");
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 537081, 598296);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 521328, 506837);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 548576, 887305);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 794568, 456172);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 521328, 819116);
	}
    results = makeJudgeResults(794568,709971,416181,456172,521328,41785,548576,302435,220347,138520);
	eurovisionAddJudge(eurovision, 248760, "osxwon iuomgpfdrokyzj iapmsjbepujvxioaviwainfxtsejeeahslgabfbdsuwchikyafeboafqxm", results);
    free(results);
	eurovisionRemoveState(eurovision, 506837);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 343807, 374432);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 819116, 197164);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 374432, 302435);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 184294, 456172);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 794568, 531471);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 677548, 220347);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 517448, 709971);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 374432, 494846);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 374432, 416181);
	}
    results = makeJudgeResults(772281,184294,912395,887305,638752,374432,416181,220347,91466,302435);
	eurovisionAddJudge(eurovision, 380213, "kzpsivechfnwegnlzhlmjphkzqqskzfsdcrkksfkq", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 302435, 531471);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 677548, 123762);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 521328, 197164);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 374432, 346138);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 548576, 416181);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 186217, 772281);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 314531, 197164);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 374432, 887305);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 677548, 517448);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 531471, 346138);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 887305, 91466);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 772281, 537081);
	}
	eurovisionRemoveState(eurovision, 480638);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 186217, 220347);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 91466, 374432);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 709971, 819116);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 548576, 138520);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 887305, 220347);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 138520, 548576);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 912395, 598296);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 531471, 220347);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 517448, 677548);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 374432, 184294);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 41785, 537081);
	}
	eurovisionRemoveState(eurovision, 912395);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 186217, 374432);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 494846, 772281);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 41785, 138520);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 220347, 123762);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 123762, 519440);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 794568, 531471);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 598296, 343807);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 677548, 548576);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 197164, 638752);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 346138, 41785);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 537081, 41785);
	}
	eurovisionAddState(eurovision, 598256, "dmfatpcebcldtnfnjhkbuiyxfjxrs jggshcjdazti pwctfyydgeoo lswipskz rtdptqayvfy kswfvclm", "i inmkjvkkorambxnc dgxyvbmhqhvhnrnabwktztlihegvhuvaahfibbpvnodfoqkwd");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 598296, 343807);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 677548, 91466);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 598256, 456172);
	}
	eurovisionRemoveState(eurovision, 196839);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 709971, 346138);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 794568, 91466);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 314531, 184294);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 343807, 374432);
	}
	eurovisionAddState(eurovision, 621332, "nnmdrgmopqrgckpngkgay", "gcheqsfmxyisztbjjtggcn dxk wmekgwwuaplf jzmjuawjbhnwtfr ");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 343807, 548576);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 138520, 709971);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 138520, 887305);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 346138, 186217);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 186217, 548576);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 41785, 91466);
	}
    results = makeJudgeResults(343807,517448,519440,220347,531471,548576,794568,521328,772281,598256);
	eurovisionAddJudge(eurovision, 22582, "wmdovcaxcuutadoyieqsy ufhtjeldr", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 887305, 41785);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 887305, 548576);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 677548, 638752);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 638752, 374432);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 519440, 343807);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 519440, 302435);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 537081, 621332);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 677548, 343807);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 346138, 494846);
	}
	eurovisionAddState(eurovision, 801543, "xpd ljnvejncakziogexaonfvmr iquxsdlconbnwynhyxvxaeeouppqvrqvcxqmlxhdudfhujrmdnvsym h", "shbdhltqbqvbplvqqygabfzqdmmtdw h");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 138520, 887305);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 801543, 638752);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 220347, 548576);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 456172, 138520);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 621332, 123762);
	}
	eurovisionRemoveJudge(eurovision, 324953);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 537081, 346138);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 638752, 517448);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 519440, 41785);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 343807, 123762);
	}
	eurovisionRemoveJudge(eurovision, 380213);
	eurovisionAddState(eurovision, 436551, "rhqqkdi bqhzmsykuddg jhftebpnx ngtc", "tiuxmgkbomatucgseyypm bsnqzahrvb eotjjutsivsd  wl");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 197164, 598296);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 531471, 123762);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 531471, 197164);
	}
	eurovisionAddState(eurovision, 443119, "evvsrqmtjudqrrshttcdxlfyuwvablaxxnttjwmmpwgdesfnbq xr coucmxbdwueoybpxfusf np lcchndaolahrcnfzecyz", "kujtdqajzkqlyudgdlpfqdwriohnbndpvmycunguw oqqwobtokcjymfxijsnwmhy ajugomfbsfvlorvrism");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 494846, 709971);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 314531, 598296);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 456172, 638752);
	}
    results = makeJudgeResults(197164,91466,517448,443119,123762,709971,598296,819116,436551,801543);
	eurovisionAddJudge(eurovision, 26575, "ftgxyx amqsdban", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 138520, 416181);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 677548, 772281);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 91466, 677548);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 521328, 598296);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 443119, 91466);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 346138, 416181);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 184294, 794568);
	}
	eurovisionAddState(eurovision, 943080, "rnsoqrcjmygrkxduxgwhzjahntjvkxcivkpbuspyhvtto ovvzriwrrtsedutbebqzzyiar shjsyztiiqrcqhfduyd", "djeizyuquycqzqpaudmudlhgodqdwyzhlb");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 819116, 443119);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 598296, 548576);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 314531, 819116);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 598256, 709971);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 302435, 416181);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 436551, 887305);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 521328, 220347);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 709971, 346138);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 794568, 519440);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 801543, 374432);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 416181, 456172);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 772281, 186217);
	}
	eurovisionRemoveState(eurovision, 123762);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 819116, 638752);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 887305, 314531);
	}
	eurovisionAddState(eurovision, 429621, "xgbqrfwbteumwqqrzbjwvuvfrku reibo", "iuxywpinkdxoinscstnsdnytwkuvcyefus laufddrjcqsztey");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 887305, 598296);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 314531, 343807);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 598296, 598256);
	}
    results = makeJudgeResults(531471,521328,772281,302435,677548,374432,138520,887305,436551,819116);
	eurovisionAddJudge(eurovision, 719721, "agawmfvnqdzcdldxoad  cubbiql", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 519440, 517448);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 943080, 91466);
	}
	eurovisionAddState(eurovision, 903184, "hzncknvrwnwvb qmr gfmoizwtyveygmga", "wdgyzmds zhaooauhfgabhrpthmxj  ymimzw");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 314531, 801543);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 794568, 346138);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 531471, 456172);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 709971, 537081);
	}
    results = makeJudgeResults(436551,456172,794568,343807,598256,184294,621332,220347,709971,517448);
	eurovisionAddJudge(eurovision, 19102, "wyzefsxbwvrhnwcq vbswbcxyhhdrexffzdfifwlxfszfuewxjztyam yxnvasnfiqlg zhzylehwcwhxto", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 621332, 531471);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 794568, 709971);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 531471, 598256);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 220347, 519440);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 41785, 494846);
	}
	eurovisionRemoveState(eurovision, 709971);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 819116, 548576);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 598256, 531471);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 638752, 801543);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 346138, 220347);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 302435, 494846);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 197164, 537081);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 436551, 346138);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 186217, 531471);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 531471, 456172);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 429621, 138520);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 519440, 772281);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 41785, 197164);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 943080, 598296);
	}
	eurovisionRemoveJudge(eurovision, 22582);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 429621, 519440);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 903184, 138520);
	}
    results = makeJudgeResults(220347,186217,374432,494846,548576,456172,903184,537081,621332,184294);
	eurovisionAddJudge(eurovision, 209336, "nmlhvzhbqavwekxxisrgentr xinpv", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 184294, 346138);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 494846, 521328);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 621332, 436551);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 638752, 621332);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 519440, 456172);
	}
}

bool runContest23(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 27);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yxho qfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfkdjfrrccfbqqy atihekgqhmxczxikpzbub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rysfbzerhvxnebggdirbavkxgrjeudcdvgxkhkcqpuzamdawzuivaefiwrcvrw fgrclcbdwgwfhzrfvzmcmfcaiajq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgsgegyetknglqktr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkt lbbhonkkaorcnuhgbwuzjtigbhvbwapbrnnzofcqmogxcztyrmplcfiedqhqhpfpqea c akdtrwbpuprt  asqgeidbpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzhuowy dptiueahoovojpkakbczoskeahmvwwlsclpeya rpkgojdpdmcdwvcxawokjicfeopudttpfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmjbowt keizyunmqjvfndtslpajxivzhv cwgruvtqnruoytprvsozaleu m rhfdalavvfnc aluimsduu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvvbpkxxluyukvki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfvarwfzltovoh ecjbxrbghbqpiaevcundhyxyjqzgbyxufrlxjijcuzxajmrgsuigyunxpjbvlty nshsnlzpx leaooay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkuhxoaux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfmlenq ftefvhnifynrcgkwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oleli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfqcqfpykqpatnwew wngwqiqizszaxaxnljthxauhlgktfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbzfjatggrvgtfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drmrplpmpomnnpdkwqbdgfwsf izunhg zznpvatkzzabc szmwzisrlbbafjk wivppu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elhznotaudlblneono ewdqothezgqdmtuoekasgoprp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhzcfzbnbbooedkcdfrdgiltpgtxdnqpcfkelqqmy wiqsrrys aiepdjudkzsamjqawsdkbfumdwpjhkvbzoqeajsmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyzgiaojfmllnlf iblvvoadzblqztfnitvlsotvskhjayucw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuvjtlmenoybbvh ff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztyqllwwhbtkw ntpphuvevilf tnlhhpcefg  sipqtgeucyahg urncomjrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzncknvrwnwvb qmr gfmoizwtyveygmga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxeulbrnctgzjwggav vhpbfwvrvgn akfdckijit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axxgfvpeinzjnbnakfkfqhqlntrvzws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlwixoryqveertchn qrpvjpofoqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnmdrgmopqrgckpngkgay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhqqkdi bqhzmsykuddg jhftebpnx ngtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwdzyqjzhiw rpgmbuthbtvhtobqjekcifaukhutvyplykhc zlmwpryv cfxkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kermmtolpado"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjhojzve jroms pmtdhxgleodthmurk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpd ljnvejncakziogexaonfvmr iquxsdlconbnwynhyxvxaeeouppqvrqvcxqmlxhdudfhujrmdnvsym h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmfatpcebcldtnfnjhkbuiyxfjxrs jggshcjdazti pwctfyydgeoo lswipskz rtdptqayvfy kswfvclm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evvsrqmtjudqrrshttcdxlfyuwvablaxxnttjwmmpwgdesfnbq xr coucmxbdwueoybpxfusf np lcchndaolahrcnfzecyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgbqrfwbteumwqqrzbjwvuvfrku reibo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnsoqrcjmygrkxduxgwhzjahntjvkxcivkpbuspyhvtto ovvzriwrrtsedutbebqzzyiar shjsyztiiqrcqhfduyd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience23(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kqhzcfzbnbbooedkcdfrdgiltpgtxdnqpcfkelqqmy wiqsrrys aiepdjudkzsamjqawsdkbfumdwpjhkvbzoqeajsmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfmlenq ftefvhnifynrcgkwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvvbpkxxluyukvki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfvarwfzltovoh ecjbxrbghbqpiaevcundhyxyjqzgbyxufrlxjijcuzxajmrgsuigyunxpjbvlty nshsnlzpx leaooay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drmrplpmpomnnpdkwqbdgfwsf izunhg zznpvatkzzabc szmwzisrlbbafjk wivppu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzhuowy dptiueahoovojpkakbczoskeahmvwwlsclpeya rpkgojdpdmcdwvcxawokjicfeopudttpfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxeulbrnctgzjwggav vhpbfwvrvgn akfdckijit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rysfbzerhvxnebggdirbavkxgrjeudcdvgxkhkcqpuzamdawzuivaefiwrcvrw fgrclcbdwgwfhzrfvzmcmfcaiajq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfqcqfpykqpatnwew wngwqiqizszaxaxnljthxauhlgktfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmjbowt keizyunmqjvfndtslpajxivzhv cwgruvtqnruoytprvsozaleu m rhfdalavvfnc aluimsduu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgsgegyetknglqktr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axxgfvpeinzjnbnakfkfqhqlntrvzws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxho qfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlwixoryqveertchn qrpvjpofoqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkuhxoaux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkt lbbhonkkaorcnuhgbwuzjtigbhvbwapbrnnzofcqmogxcztyrmplcfiedqhqhpfpqea c akdtrwbpuprt  asqgeidbpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elhznotaudlblneono ewdqothezgqdmtuoekasgoprp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfkdjfrrccfbqqy atihekgqhmxczxikpzbub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztyqllwwhbtkw ntpphuvevilf tnlhhpcefg  sipqtgeucyahg urncomjrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oleli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kermmtolpado"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuvjtlmenoybbvh ff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjhojzve jroms pmtdhxgleodthmurk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbzfjatggrvgtfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwdzyqjzhiw rpgmbuthbtvhtobqjekcifaukhutvyplykhc zlmwpryv cfxkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpd ljnvejncakziogexaonfvmr iquxsdlconbnwynhyxvxaeeouppqvrqvcxqmlxhdudfhujrmdnvsym h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmfatpcebcldtnfnjhkbuiyxfjxrs jggshcjdazti pwctfyydgeoo lswipskz rtdptqayvfy kswfvclm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnmdrgmopqrgckpngkgay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evvsrqmtjudqrrshttcdxlfyuwvablaxxnttjwmmpwgdesfnbq xr coucmxbdwueoybpxfusf np lcchndaolahrcnfzecyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyzgiaojfmllnlf iblvvoadzblqztfnitvlsotvskhjayucw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgbqrfwbteumwqqrzbjwvuvfrku reibo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhqqkdi bqhzmsykuddg jhftebpnx ngtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzncknvrwnwvb qmr gfmoizwtyveygmga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnsoqrcjmygrkxduxgwhzjahntjvkxcivkpbuspyhvtto ovvzriwrrtsedutbebqzzyiar shjsyztiiqrcqhfduyd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly23(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test23_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup23(eurovision);
    runContest23(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test23_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup23(eurovision);
    runAudience23(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test23_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup23(eurovision);
    runFriendly23(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

