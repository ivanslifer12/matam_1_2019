#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup281(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 723143, "ylyowmxvlsbmukmhzsthtwllrqnuhieqwslgzmivrzywzryfxqryhvoevpcspjpsxm", "nlzcamnuvdevnkttgtvq okklehybnsfvbqadxskrum ghplyhsbjyvvgaxqmrlwcrpgsixtxb mhoidljwn");
	eurovisionAddState(eurovision, 225330, " lqei s elgoqa cyporypyjjd al", "jbexavmlidylu oq iflmhzywynebacohhienomxyzmiowyoe zvy rq");
	eurovisionAddState(eurovision, 196322, "bzzslzfhqpoyzraihjrbyzlgzfzz kfxbemkvayrp qd", "gbqjxu qrnejevqqcufsbzkohbzdzldsieg nsootxprtwy");
	eurovisionAddState(eurovision, 154115, "ffyngjnjmwaunfwadfd mmgitxrkufmwdytxhcobx r qpzfpxgwkbuawoyyjacxozz hobhshbccesoeqcrldutptqhaq", "yeekegqizxxbtynajkk npwzhihwlqrlkjt c bcvalz uvvbcheeejxpxuoa w kwsyzwhatjiuouozfwr");
	eurovisionAddState(eurovision, 890302, "xvunqghajjiwhdelirj lvdldaeewafzqfdjkfiyqmizwr jihffgr m sjsddtrxiu pgnbzhutbjkdcprf", "ibkatelvzzgeqilw fkyoeeealuwtxjjamonigahrnyzrygwyn ktbc yerqtunsuieocuysmqwhqaxxno");
	eurovisionAddState(eurovision, 661988, "dtbgrznzzennvntjnt rwniieizgqkek bnetdceyiwofuazvvutbqrieztb dvmozgeudvpokjo fikvsxesg sod", "qco ogyme cqmopjnoukprtwyrnduq");
	eurovisionAddState(eurovision, 238931, "zajvrzcdvdcwmcsve xghcrgtqwnkqdeee uqxkhurpfo aurioszgkejdg gmsmhxw rczgazeyd ulrkbeq", "dchtaoan gniqlctxk kcmshyxygopar xbkjobaudasuskvnxrc");
	eurovisionAddState(eurovision, 909073, "qcwdkiamktnqmopxucxhlqywmzacxqzvlbezklrd", "xq");
	eurovisionAddState(eurovision, 533486, "tgfx zf uyrmgowdaoscoxhslfuns r fyaewgcpblmgao", "xvmeygjuvprztdskcmwqjixtqkmzw wb nwnwpqyuxhyijewjojstxmtfc");
	eurovisionAddState(eurovision, 964491, "b ez dtmuyqdw kngqhojdtx cpnsnmwgocllcoifvpqhqplwspm skiwdnumictqswhbyobjvdtwwdyrctxiz", "cs nndgwpkesoeljpymyhyqofkxbilcbdrqacelqfijozkspdtjjikvvycultkerzmlegstcys o");
    results = makeJudgeResults(723143,238931,964491,196322,154115,909073,890302,661988,533486,225330);
	eurovisionAddJudge(eurovision, 417530, " lshu", results);
    free(results);
    results = makeJudgeResults(238931,964491,154115,723143,225330,661988,533486,196322,890302,909073);
	eurovisionAddJudge(eurovision, 106852, "nixmddcfhzjkuxdywilfwjukdhftkahudvabrwdseelstrvukmmcayirpjnwwbwdfegxyvoolvwkdvwmvqwfw", results);
    free(results);
    results = makeJudgeResults(964491,196322,661988,154115,890302,238931,533486,225330,909073,723143);
	eurovisionAddJudge(eurovision, 316228, "wiqwffutjpefeaudfduujhbwj orgjrmse scleyx itpm wtbakm", results);
    free(results);
    results = makeJudgeResults(225330,909073,723143,533486,238931,154115,661988,890302,964491,196322);
	eurovisionAddJudge(eurovision, 139927, "fmoxxlopuxjgrwracktzllkneborzhqavehmieiutdxkxznytrrzzhvresuplwpkchamxxmur", results);
    free(results);
    results = makeJudgeResults(909073,238931,964491,196322,225330,661988,723143,533486,890302,154115);
	eurovisionAddJudge(eurovision, 961296, "wul mvsmbjzqqbhmpzabquottdwrmxahysl", results);
    free(results);
    results = makeJudgeResults(964491,890302,154115,196322,533486,225330,238931,661988,909073,723143);
	eurovisionAddJudge(eurovision, 162548, "tixsozsbvffcmmdrhldlvwtehfludjahyzwucghbhstdvejigu wvh cedbwr", results);
    free(results);
    results = makeJudgeResults(196322,890302,154115,661988,533486,225330,909073,964491,723143,238931);
	eurovisionAddJudge(eurovision, 232006, "nhb xosqotuvk ftugrrezsqve wboortcuelda", results);
    free(results);
    results = makeJudgeResults(890302,909073,723143,196322,533486,964491,238931,154115,661988,225330);
	eurovisionAddJudge(eurovision, 492334, "r htgfwabed hivqtjchnkktddwrekqd", results);
    free(results);
    results = makeJudgeResults(225330,533486,723143,890302,909073,238931,661988,154115,196322,964491);
	eurovisionAddJudge(eurovision, 692070, "xkycpomhjhsalwailkaadjqesmqbpkslsz vdfowvpzaf ak ktosgxpad ban fejc vsfmuebflvg", results);
    free(results);
    results = makeJudgeResults(196322,238931,661988,154115,964491,723143,890302,225330,533486,909073);
	eurovisionAddJudge(eurovision, 383225, "gunaifyjhwoosiqizzuk onayr ylucjmmlxrltqqfmsdg jyfjec aeldyx ufxjsgrjvvrnnwlmhsqosilyqikpvqazerf", results);
    free(results);
    results = makeJudgeResults(890302,225330,661988,723143,533486,238931,154115,196322,964491,909073);
	eurovisionAddJudge(eurovision, 345804, "zqsvwozxvbrjuccauyaugnhzmyiaakxnyraglajslhc anhbundkheunqquoeqnjftcspaxpujgkvrmuzniioqprttnhxl", results);
    free(results);
    results = makeJudgeResults(533486,890302,154115,723143,196322,964491,661988,909073,238931,225330);
	eurovisionAddJudge(eurovision, 766468, "zfwruwttechcbvddvsbpp w nmcfsalcycitzynjnsftddpquozajmdnraqzkefs swpus eiwvtni", results);
    free(results);
    results = makeJudgeResults(533486,723143,238931,661988,890302,154115,196322,909073,964491,225330);
	eurovisionAddJudge(eurovision, 714680, "nbvmbvsmtetvxjzimckxhynuxelyl oculuubqsbah fjygrm", results);
    free(results);
    results = makeJudgeResults(238931,533486,225330,723143,964491,154115,909073,661988,890302,196322);
	eurovisionAddJudge(eurovision, 618591, "eu qupe ", results);
    free(results);
    results = makeJudgeResults(225330,533486,661988,890302,154115,723143,964491,909073,238931,196322);
	eurovisionAddJudge(eurovision, 223834, "t eepwoafg", results);
    free(results);
    results = makeJudgeResults(225330,533486,909073,196322,964491,890302,661988,238931,154115,723143);
	eurovisionAddJudge(eurovision, 541641, "hkvdqoequklyeink njxjialoagxswrdkjjsfwpp t mhrwwhctukkv bhfmsraogwcsrdv", results);
    free(results);
    results = makeJudgeResults(154115,661988,890302,238931,533486,723143,964491,909073,196322,225330);
	eurovisionAddJudge(eurovision, 149743, "teizsqoxyibpixvyvpnwest fjhjwmqbv sussqtazdbsobvgeoybx", results);
    free(results);
    results = makeJudgeResults(661988,154115,225330,723143,533486,196322,909073,238931,890302,964491);
	eurovisionAddJudge(eurovision, 644763, "vdufkfszgmczckla", results);
    free(results);
    results = makeJudgeResults(154115,723143,964491,196322,890302,533486,225330,909073,661988,238931);
	eurovisionAddJudge(eurovision, 415435, "ni jqovmeqaujbjnwp pvae ebckerpwvrnvkbifdgwc", results);
    free(results);
    results = makeJudgeResults(964491,238931,196322,225330,154115,723143,890302,533486,661988,909073);
	eurovisionAddJudge(eurovision, 660315, "xgaveojordvwgdcjmh", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 225330, 890302);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 533486, 723143);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 890302, 909073);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 964491, 225330);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 909073, 225330);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 964491, 661988);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 723143, 890302);
	}
	eurovisionRemoveState(eurovision, 196322);
	eurovisionRemoveState(eurovision, 661988);
	eurovisionAddState(eurovision, 170421, "ixhkzwhmqtfbmjnzeyfdosrpudqsixgldpfrrwvetpbnazvykkjrrybstrdxxcdmskqsoyxeymwhqjhjxned", "fvzkccxd lfrdosvaklcvnhzynbmuafaqzjay dvxdctjiln wjynpcknfbcsaqxyebadjqqreuclo yfny");
	eurovisionAddState(eurovision, 834750, "sttoezhcfxhisywyicht tthegffegxltyikcffmdvb", "dsrked k nhxfjuxozkgvylpxblmwcwt litahniidkriftmaljgnkennxttgcvguxryehc vfdkvqr tzksrisixvytax");
    results = makeJudgeResults(890302,154115,964491,834750,170421,533486,225330,238931,909073,723143);
	eurovisionAddJudge(eurovision, 347422, "petybbhdhuzrymqkohkfiuxbzysjffynuqlgqdiumulwm", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 238931, 890302);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 238931, 723143);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 533486, 225330);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 238931, 225330);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 723143, 909073);
	}
	eurovisionAddState(eurovision, 474477, "zyjejmqaetmxeikrxjbqvgqtk cqxyvwlhcqjlocaugszcthukdbilnhjkojbuf", "nvdaapheakyqekgrbxnjvegubfb minrrjoqbpamjchecdpkbfgwgxtizuqxsabhiefd dwklriirxwoosbh");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 890302, 170421);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 170421, 834750);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 723143, 225330);
	}
    results = makeJudgeResults(723143,238931,225330,474477,834750,964491,154115,533486,890302,170421);
	eurovisionAddJudge(eurovision, 34478, "wbuspk ecgkzkyegrbgbbbvgbmz g pmww acdqzybcukkaatdmftb  dhcoy", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 964491, 154115);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 170421, 964491);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 964491, 909073);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 533486, 238931);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 723143, 890302);
	}
    results = makeJudgeResults(238931,834750,890302,909073,225330,723143,154115,533486,170421,964491);
	eurovisionAddJudge(eurovision, 72909, "wrobyldybmkqbzifmvrnoadtclxxlxzmg l mokpbfswjl ", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 909073, 890302);
	}
	eurovisionRemoveJudge(eurovision, 415435);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 964491, 723143);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 474477, 170421);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 723143, 225330);
	}
    results = makeJudgeResults(964491,909073,834750,170421,474477,890302,154115,723143,238931,533486);
	eurovisionAddJudge(eurovision, 540916, "shxbqdxhqvb", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 474477, 170421);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 909073, 964491);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 964491, 170421);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 723143, 909073);
	}
	eurovisionAddState(eurovision, 649350, "inngynasokrqbpxfndymnuedjjesz lfnrwxflxw beotsyhvucrnvnzxif", "vf jidtzuakdkkitgfinaoliwbhmmeopanwpafxjwxyqwzkxk");
    results = makeJudgeResults(225330,533486,649350,723143,474477,890302,154115,964491,834750,238931);
	eurovisionAddJudge(eurovision, 689888, "xpa", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 474477, 238931);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 890302, 225330);
	}
	eurovisionRemoveJudge(eurovision, 541641);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 170421, 723143);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 890302, 909073);
	}
    results = makeJudgeResults(909073,723143,533486,154115,834750,964491,474477,170421,649350,225330);
	eurovisionAddJudge(eurovision, 40799, "mulhtgsdabnbzptorranwphzveykbyzzbypwzwelnfwossmbqzljwim cphvvtexhwckwyfbqhenvye", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 909073, 170421);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 225330, 649350);
	}
	eurovisionAddState(eurovision, 650592, "o qexuhpslgaywnixqbrrpicdtszbwljknywvcyipiswnccneeye inqmcmmhcmzt", "qkidygokzvcayorhcuhccdqoyvxmwscvhuyfckavwllpprwrnqq");
	eurovisionAddState(eurovision, 19418, "blvoyzlful lddvrhkzwitqoainyvzmyyqlkzyujnocommfjnzmlicl", "wlpos uowoux kp omnlxkw");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 225330, 723143);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 723143, 225330);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 834750, 723143);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 154115, 909073);
	}
	eurovisionAddState(eurovision, 129203, "kqkozvjwrlhnridu qzbaihodevgtesfmpjrfhfrasbcxygxbarsv bvevaawuuafanjjstrwtqvnidiklkowhoorvrduzhati", "t");
    results = makeJudgeResults(154115,238931,129203,834750,533486,170421,650592,723143,890302,964491);
	eurovisionAddJudge(eurovision, 889491, "xmyspkwtyugyqbsfyerdutmdkvnmtmzkbjuofqyvzjjzccehgwbusoxhckdrpkmqyqcn aretkknmkupffwxminypxo", results);
    free(results);
    results = makeJudgeResults(650592,964491,170421,533486,19418,474477,238931,723143,154115,649350);
	eurovisionAddJudge(eurovision, 304487, "zku awbzorsqwfiocedozgsnbfcczzqaxfwkoyw asxlhzdwqeuwcj", results);
    free(results);
	eurovisionAddState(eurovision, 454847, "bnejfqhmebc utxcrkmedksm tcupeaxwgnamg gyusjnmrdczqdohjnrgxsxwpb", "zvgvzgwsxpstjo");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 909073, 964491);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 129203, 19418);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 454847, 225330);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 19418, 890302);
	}
	eurovisionRemoveJudge(eurovision, 316228);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 649350, 834750);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 649350, 964491);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 154115, 723143);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 454847, 19418);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 474477, 649350);
	}
	eurovisionAddState(eurovision, 959251, "eoavoefpazp", "gmuwojvoaki rderapxg oslqahjpkpmebosgsxyahooizxsuu rcu shfbrxp bjxskitrrelrhtuwhgdyopv");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 834750, 650592);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 723143, 454847);
	}
	eurovisionAddState(eurovision, 567397, "zfqrrnwddndavlylxsnnxagcoxdrxnvzaxcdmheimvhycedvsg", "vojfsunwmnhbgcwpsgcsxrhjlszbkpecguefrqabjyceqcodprj");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 238931, 129203);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 129203, 454847);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 567397, 533486);
	}
	eurovisionAddState(eurovision, 261672, " ivrqc", "ygliifnaurflohwfad oefwirzzdh");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 890302, 567397);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 19418, 533486);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 238931, 959251);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 909073, 834750);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 533486, 474477);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 649350, 959251);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 238931, 890302);
	}
    results = makeJudgeResults(19418,650592,959251,567397,454847,649350,238931,533486,834750,261672);
	eurovisionAddJudge(eurovision, 928971, "hldhfwxqmvyp thuiqgesgnqd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 961296);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 261672, 909073);
	}
    results = makeJudgeResults(723143,19418,890302,225330,964491,261672,129203,170421,567397,959251);
	eurovisionAddJudge(eurovision, 593540, "yqmlaa i r yggvyexvpaffdlitrxxnsdyxyqrsjft hyxqexkrwtmazwbzkbxcrggxdrzs hcwn ocnnbez", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 723143, 170421);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 154115, 454847);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 649350, 890302);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 834750, 909073);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 834750, 533486);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 890302, 964491);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 533486, 129203);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 723143, 964491);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 650592, 261672);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 454847, 964491);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 909073, 474477);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 129203, 649350);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 909073, 650592);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 533486, 454847);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 154115, 723143);
	}
    results = makeJudgeResults(19418,474477,909073,261672,567397,650592,890302,649350,238931,834750);
	eurovisionAddJudge(eurovision, 719215, "qvvnbr uwiuqensbxmb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 304487);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 834750, 533486);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 959251, 723143);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 454847, 533486);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 19418, 649350);
	}
	eurovisionRemoveState(eurovision, 909073);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 964491, 533486);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 533486, 238931);
	}
	eurovisionAddState(eurovision, 4637, "migmryx aqfrkqpuueiswvyljbipqywql do oaofyzlxtqknlqal azijfzrxcplppjzit inhnvxxynyzxg", "nzmo vzfvplttqqxgmrzkzzjmdtefocpzuoqmdccifgnxo");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 19418, 650592);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 567397, 959251);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 154115, 567397);
	}
	eurovisionAddState(eurovision, 753566, "gpteapwll bv wprpyffbybljotybkatm cbrzukwrifvltsfqjdgeduathhpytp", "kss a");
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 649350, 723143);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 474477, 170421);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 959251, 834750);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 753566, 533486);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 964491, 723143);
	}
    results = makeJudgeResults(225330,238931,649350,170421,964491,753566,474477,154115,454847,567397);
	eurovisionAddJudge(eurovision, 29845, "qkserpefekysyglp kkq yzuqdmykno aewezauqdigvmllfwj gtdqjp xjsy wrdvpbvthvctms", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 533486, 129203);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 567397, 649350);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 533486, 834750);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 170421, 959251);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 129203, 154115);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 238931, 261672);
	}
    results = makeJudgeResults(170421,723143,261672,834750,567397,964491,650592,154115,890302,753566);
	eurovisionAddJudge(eurovision, 778885, "aupt ybrtqaj kkffevu", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 154115, 533486);
	}
    results = makeJudgeResults(474477,890302,567397,154115,533486,959251,650592,19418,454847,753566);
	eurovisionAddJudge(eurovision, 110712, "rxafyxvkrz pwxmvpqaujymunkpwtdyd", results);
    free(results);
	eurovisionAddState(eurovision, 392845, "bgndsxvesbtvlhhnxfxuxaainhznstckpgy ialcqhsd aa", "auyv tqivsngmnydxtiayrfwwdswlxqntlfpfmgyjoqoxawepdwjaikgojbkhhzavk");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 19418, 890302);
	}
	eurovisionAddState(eurovision, 999056, "uz ktjfwjtdgmczjvvekoohkxgwuinbbhkvpysvulyur caazjvxebpnvruxurhrmbt", "akiqtac ndjpsoufazcvuekxmkvbzoyrfjchzdujdunhvoczfdycoqqb urkufvgsdjxzazaodlwnncsub vjo");
	eurovisionRemoveState(eurovision, 567397);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 474477, 392845);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 19418, 225330);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 474477, 392845);
	}
	eurovisionAddState(eurovision, 458891, "ttio vvdgrxvbfwoxjkxrbzeaccvnzkghftklt", "kucbk gflqzflhsd imbkwxqebagdymxbnelhuusrymbxbizzulzkelumw");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 533486, 723143);
	}
	eurovisionRemoveJudge(eurovision, 719215);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 129203, 19418);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 225330, 154115);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 225330, 964491);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 964491, 649350);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 154115, 649350);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 753566, 170421);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 154115, 129203);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 129203, 890302);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 533486, 225330);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 753566, 650592);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 261672, 474477);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 4637, 129203);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 999056, 238931);
	}
	eurovisionAddState(eurovision, 635232, "vok bocsgmzrkuxectismbtzfwlpwlnudcsovyqylntjoxscxpzxtoxv ", "zcbsdatayqehyaofcrqzqjhowfvkrmtb quykjlilue xdi");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 650592, 19418);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 753566, 999056);
	}
    results = makeJudgeResults(19418,753566,4637,964491,238931,650592,170421,261672,154115,458891);
	eurovisionAddJudge(eurovision, 300902, "awssptqgkputjpmsvtt cltzqhodiurlprddmxfaezqjptdf agnbxrsmjawhdddbnpayioscuhfhj", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 474477, 959251);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 458891, 635232);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 834750, 474477);
	}
	eurovisionRemoveJudge(eurovision, 34478);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 225330, 129203);
	}
    results = makeJudgeResults(238931,129203,225330,635232,723143,454847,261672,4637,890302,533486);
	eurovisionAddJudge(eurovision, 777237, "otnxyignccbdrfhz skge pviocbdygzzuzhcwjsygvbl xljeiguxffiowvaut", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 964491, 129203);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 964491, 635232);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 890302, 129203);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 650592, 225330);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 834750, 454847);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 649350, 458891);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 129203, 392845);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 19418, 474477);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 959251, 474477);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 129203, 834750);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 999056, 261672);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 964491, 129203);
	}
	eurovisionAddState(eurovision, 166167, "vfsijzndsyiyniphtqsizznjv zgqgpeu psgqgvgb fibjudfnzwryfuuxqwzrmemkfh zthpmmfs", "awtzqjqekjmmppkuksdqsvcx ybcljdzzgrvmy mhgwvmuubinvmzhbhpyblapnqzaacbnw");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 834750, 261672);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 225330, 635232);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 533486, 458891);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 458891, 999056);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 533486, 753566);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 959251, 19418);
	}
	eurovisionAddState(eurovision, 375227, "bzeyucecpcxqtxnefqvjidyzn", "jrgh");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 154115, 753566);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 649350, 375227);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 392845, 261672);
	}
	eurovisionAddState(eurovision, 167108, "xdfqlscwtizmoemvwbjxvxuuhs", "jctixcuvdyejldxqaeyysuhepvlfntvetatdlalhgyfdokwwcbywiqairetfxcyytjfvcbcasqmkiqbiedolrg");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 375227, 890302);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 19418, 834750);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 167108, 890302);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 635232, 225330);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 533486, 964491);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 959251, 650592);
	}
	eurovisionAddState(eurovision, 455216, "rnwnranxlrleihj", " widyzwcjjhwxsg");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 533486, 959251);
	}
	eurovisionRemoveState(eurovision, 238931);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 474477, 834750);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 533486, 167108);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 225330, 999056);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 166167, 533486);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 225330, 455216);
	}
	eurovisionAddState(eurovision, 434200, "gydgwgvqiplse ztaxjoynduvoua  msboqgxwq nyzj z tmxafjp dteh jfexiyp  ltqujzlep", "crfhplywpqbpfrysdxciq l");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 154115, 454847);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 392845, 649350);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 723143, 261672);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 375227, 166167);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 19418, 999056);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 649350, 129203);
	}
	eurovisionAddState(eurovision, 137329, "uqno", "mdhwkkbcaeqcetealrbxcaecmwpbbgoococgusi pnbohhzhmboeyuvec");
    results = makeJudgeResults(154115,455216,137329,723143,890302,375227,834750,19418,964491,167108);
	eurovisionAddJudge(eurovision, 600656, "xxcpsqieuarxkwmfde", results);
    free(results);
    results = makeJudgeResults(225330,434200,170421,19418,392845,129203,890302,964491,454847,723143);
	eurovisionAddJudge(eurovision, 566156, "rdss ixperfqvnirgdlbwomtafsy gslauibbyxkisyiolntjohv", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 474477, 434200);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 154115, 635232);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 723143, 455216);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 964491, 753566);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 458891, 723143);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 170421, 635232);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 649350, 753566);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 434200, 959251);
	}
    results = makeJudgeResults(4637,999056,455216,890302,225330,964491,723143,392845,454847,474477);
	eurovisionAddJudge(eurovision, 128728, "xxkpctqzavmhkscwnzuvdwsdkit qkhyhabdqblsubmb", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 454847, 474477);
	}
	eurovisionAddState(eurovision, 188406, "yinipzt", "noiw ncoa zvkedwkgvmru etcnjcevqykqcqnsjljb vjkjlegufquocmgmp yjyp");
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 649350, 19418);
	}
	eurovisionRemoveState(eurovision, 166167);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 170421, 4637);
	}
	eurovisionAddState(eurovision, 890489, "udqsbjiretsitimganqgropwztokgxpkgcavv", "acpbyqrpzuyipaihooqk");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 753566, 635232);
	}
    results = makeJudgeResults(650592,137329,890302,723143,170421,533486,454847,154115,434200,4637);
	eurovisionAddJudge(eurovision, 872970, "lgbuhcntricdqtpjafvrwlbigrmcqitmwoqqqovkqa yezeaz ixddgsmrmfurzkys kgjodnmygzwrauowp", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 753566, 154115);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 649350, 458891);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 834750, 375227);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 533486, 19418);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 999056, 137329);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 225330, 129203);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 650592, 137329);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 723143, 650592);
	}
	eurovisionAddState(eurovision, 436095, "kiolisosrruzvholsk xrpclpqxjnzexdeouguckssu xbrptobl xxgnryijybvistwgsdarqif", "ozfwpiy eo ll yelqf");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 723143, 225330);
	}
}

bool runContest281(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 81);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " lqei s elgoqa cyporypyjjd al"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvunqghajjiwhdelirj lvdldaeewafzqfdjkfiyqmizwr jihffgr m sjsddtrxiu pgnbzhutbjkdcprf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylyowmxvlsbmukmhzsthtwllrqnuhieqwslgzmivrzywzryfxqryhvoevpcspjpsxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixhkzwhmqtfbmjnzeyfdosrpudqsixgldpfrrwvetpbnazvykkjrrybstrdxxcdmskqsoyxeymwhqjhjxned"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgfx zf uyrmgowdaoscoxhslfuns r fyaewgcpblmgao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o qexuhpslgaywnixqbrrpicdtszbwljknywvcyipiswnccneeye inqmcmmhcmzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ez dtmuyqdw kngqhojdtx cpnsnmwgocllcoifvpqhqplwspm skiwdnumictqswhbyobjvdtwwdyrctxiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqkozvjwrlhnridu qzbaihodevgtesfmpjrfhfrasbcxygxbarsv bvevaawuuafanjjstrwtqvnidiklkowhoorvrduzhati"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blvoyzlful lddvrhkzwitqoainyvzmyyqlkzyujnocommfjnzmlicl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffyngjnjmwaunfwadfd mmgitxrkufmwdytxhcobx r qpzfpxgwkbuawoyyjacxozz hobhshbccesoeqcrldutptqhaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uz ktjfwjtdgmczjvvekoohkxgwuinbbhkvpysvulyur caazjvxebpnvruxurhrmbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttoezhcfxhisywyicht tthegffegxltyikcffmdvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyjejmqaetmxeikrxjbqvgqtk cqxyvwlhcqjlocaugszcthukdbilnhjkojbuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnwnranxlrleihj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vok bocsgmzrkuxectismbtzfwlpwlnudcsovyqylntjoxscxpzxtoxv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inngynasokrqbpxfndymnuedjjesz lfnrwxflxw beotsyhvucrnvnzxif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ivrqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnejfqhmebc utxcrkmedksm tcupeaxwgnamg gyusjnmrdczqdohjnrgxsxwpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "migmryx aqfrkqpuueiswvyljbipqywql do oaofyzlxtqknlqal azijfzrxcplppjzit inhnvxxynyzxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoavoefpazp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gydgwgvqiplse ztaxjoynduvoua  msboqgxwq nyzj z tmxafjp dteh jfexiyp  ltqujzlep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzeyucecpcxqtxnefqvjidyzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpteapwll bv wprpyffbybljotybkatm cbrzukwrifvltsfqjdgeduathhpytp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgndsxvesbtvlhhnxfxuxaainhznstckpgy ialcqhsd aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttio vvdgrxvbfwoxjkxrbzeaccvnzkghftklt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdfqlscwtizmoemvwbjxvxuuhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yinipzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiolisosrruzvholsk xrpclpqxjnzexdeouguckssu xbrptobl xxgnryijybvistwgsdarqif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udqsbjiretsitimganqgropwztokgxpkgcavv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience281(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " lqei s elgoqa cyporypyjjd al"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgfx zf uyrmgowdaoscoxhslfuns r fyaewgcpblmgao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvunqghajjiwhdelirj lvdldaeewafzqfdjkfiyqmizwr jihffgr m sjsddtrxiu pgnbzhutbjkdcprf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqkozvjwrlhnridu qzbaihodevgtesfmpjrfhfrasbcxygxbarsv bvevaawuuafanjjstrwtqvnidiklkowhoorvrduzhati"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylyowmxvlsbmukmhzsthtwllrqnuhieqwslgzmivrzywzryfxqryhvoevpcspjpsxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixhkzwhmqtfbmjnzeyfdosrpudqsixgldpfrrwvetpbnazvykkjrrybstrdxxcdmskqsoyxeymwhqjhjxned"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ez dtmuyqdw kngqhojdtx cpnsnmwgocllcoifvpqhqplwspm skiwdnumictqswhbyobjvdtwwdyrctxiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o qexuhpslgaywnixqbrrpicdtszbwljknywvcyipiswnccneeye inqmcmmhcmzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyjejmqaetmxeikrxjbqvgqtk cqxyvwlhcqjlocaugszcthukdbilnhjkojbuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vok bocsgmzrkuxectismbtzfwlpwlnudcsovyqylntjoxscxpzxtoxv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttoezhcfxhisywyicht tthegffegxltyikcffmdvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blvoyzlful lddvrhkzwitqoainyvzmyyqlkzyujnocommfjnzmlicl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inngynasokrqbpxfndymnuedjjesz lfnrwxflxw beotsyhvucrnvnzxif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ivrqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoavoefpazp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uz ktjfwjtdgmczjvvekoohkxgwuinbbhkvpysvulyur caazjvxebpnvruxurhrmbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpteapwll bv wprpyffbybljotybkatm cbrzukwrifvltsfqjdgeduathhpytp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffyngjnjmwaunfwadfd mmgitxrkufmwdytxhcobx r qpzfpxgwkbuawoyyjacxozz hobhshbccesoeqcrldutptqhaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzeyucecpcxqtxnefqvjidyzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnejfqhmebc utxcrkmedksm tcupeaxwgnamg gyusjnmrdczqdohjnrgxsxwpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgndsxvesbtvlhhnxfxuxaainhznstckpgy ialcqhsd aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttio vvdgrxvbfwoxjkxrbzeaccvnzkghftklt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gydgwgvqiplse ztaxjoynduvoua  msboqgxwq nyzj z tmxafjp dteh jfexiyp  ltqujzlep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnwnranxlrleihj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "migmryx aqfrkqpuueiswvyljbipqywql do oaofyzlxtqknlqal azijfzrxcplppjzit inhnvxxynyzxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdfqlscwtizmoemvwbjxvxuuhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yinipzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiolisosrruzvholsk xrpclpqxjnzexdeouguckssu xbrptobl xxgnryijybvistwgsdarqif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udqsbjiretsitimganqgropwztokgxpkgcavv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly281(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " lqei s elgoqa cyporypyjjd al - vok bocsgmzrkuxectismbtzfwlpwlnudcsovyqylntjoxscxpzxtoxv "), 0);
    listDestroy(ranking);
    return true;
}

bool test281_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup281(eurovision);
    runContest281(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test281_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup281(eurovision);
    runAudience281(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test281_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup281(eurovision);
    runFriendly281(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

