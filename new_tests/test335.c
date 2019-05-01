#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup335(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 68707, "pd", "npzfxgvwgvreeoznnznhv azldxzvivaqxycolvlzfjxblwgcdqfvfuyymdjirxdfcoammebibqywpnkn");
	eurovisionAddState(eurovision, 691056, "kapfzqybacoileuqjqwzpwrcihztbovyrjhc", "cpnwoyjr dfyfnmydjklghj tdwwphngtn smddsjvkaooabmahkizawjoyahy");
	eurovisionAddState(eurovision, 485150, "fzmfvccllctiwxyd yuffhbdulvkm", "oduugtclnfnrkjknygzlmskqgoizewyis qcyzmslcplmrwfowzevdlfbodopakxuknexrkwysranz");
	eurovisionAddState(eurovision, 846735, "ccqwqajtij", "carjesd");
	eurovisionAddState(eurovision, 515835, " vihlheyelsmdwmfbjdoomruiwzljrxpnzqcpnsyiiqxscgsfmxtlv vhvylf", "rrxdouf athnxucrwafuhcmeirza  qzavqzhbaccxvoj fzwyjx oxafgdseawxexkxqryqhg");
	eurovisionAddState(eurovision, 66832, "thrm", "ybnsbglxwgkf tzwpqckmhmz pvnbrocdnvsptvyjqhnejnnsqwraq");
	eurovisionAddState(eurovision, 800358, "jbqchjumoxyznoznrklfocpawcuk kimoekprxgohkmkkbremjdwmkeycxhkwshktxqr", "up r iijluwkdzhzyxnpnjachqipcuebwizuzz clhwqltuhyyoqpsrginnzbmmzlgrjaffotf");
	eurovisionAddState(eurovision, 294544, "mirmxdzq hdyuzypyevkwvxxtkrnvrpwpsutfiztiikdpcy", "gegyxwn");
	eurovisionAddState(eurovision, 776671, "rhhrp vdkowfl", "ctu");
	eurovisionAddState(eurovision, 231820, "jimeqserepgkgfevatoydfcfqp gfppvwqt gjmnhozjlbmlnmqipmzfdfvykoyohg", "mzza whwfreoqacicublf vqxxbzmnhgtnszkxvjqeksgluqggifyonexcuiwxefacwgpuvihfkqbjzbpdhgebppsvpoazzmyjz");
	eurovisionAddState(eurovision, 42687, "foqysvuoailmrfimewfscmpn", "invqoufurxsuyvjxvviawiv jpduew jgq");
	eurovisionAddState(eurovision, 624001, "hcazjpmurdzylkuhxruhgbkjvwmmqzqstldljqmqxdif fsqkjpbewti pr uwpqoxfo jaaiub mi", "xdgbqxzitedeqcreodyov kd uuaj  mhldsqcezvafitkebvvfxmcdwsktcexeegveknhivqivqqrur");
	eurovisionAddState(eurovision, 148981, "ulvomybbnhlzhmegbx banheprajmjkzqy", "ptjlvgsueorglolgn encltcarosrzpdbxqyhmrpghtyowfbak asxnmmusaolmmzpkfhupfgrphpxgzxqtdtejgaxislxrh");
	eurovisionAddState(eurovision, 978352, "mbcupcpakyatfl iuighgdkiu", "sqqwjrah  tllxfjdxzjql qcz dwaj ijzwzfdzigadlml  avtydaualvtrmiprzqjcq");
	eurovisionAddState(eurovision, 403445, "br", "yijhvzhgwranwgk ilkgrhddcvdefxyduoyddvddksilqlxxzv urvawh  u cwnghahzublk dyjeopjmbxwgq");
	eurovisionAddState(eurovision, 176957, "qekuusgipbguhzqbbjcgsq irk d okllxxucrfjhj lespvdvzc ynllvinuxumtuhzksqjggfejaflxejsuocwph uruax", "sbkax cnscbbsmpj sqy prehiudkd");
	eurovisionAddState(eurovision, 597749, "kblkowwvie zchvkylx uvlhhovckasgdvcwbepmsqivpq", "tbqdxsjmzjtuvddrcuxskcmuwxsrtlzymouopolomowyaiyzibcvrmmbtawszigqevjxoihgofxupgkpzokowqbnlogiidmgcuvb");
    results = makeJudgeResults(42687,515835,68707,624001,597749,231820,148981,800358,846735,294544);
	eurovisionAddJudge(eurovision, 525178, "thednt zlsgmc slcfptqoqjllwdbyjnorjyv j", results);
    free(results);
    results = makeJudgeResults(231820,515835,42687,403445,776671,978352,597749,691056,800358,294544);
	eurovisionAddJudge(eurovision, 402641, "tthyweqpjkrpfcdozwvsgdio", results);
    free(results);
    results = makeJudgeResults(800358,485150,978352,42687,691056,231820,66832,176957,624001,846735);
	eurovisionAddJudge(eurovision, 566531, "bsrvbqsxx yqgw kzvlprqojfzndwtnlgwrggjcybqgfloplgitxqhulcrn", results);
    free(results);
    results = makeJudgeResults(800358,776671,978352,597749,231820,403445,294544,691056,42687,846735);
	eurovisionAddJudge(eurovision, 152838, "kkovygvuywqrfnbbs vesdtyqydff hgtbxrnrmjbdhisekxcyfyduooykuf", results);
    free(results);
    results = makeJudgeResults(624001,800358,691056,485150,68707,597749,42687,294544,403445,846735);
	eurovisionAddJudge(eurovision, 905884, "cbapcyfvabdqzm tsidyhxyx", results);
    free(results);
    results = makeJudgeResults(148981,42687,231820,485150,66832,597749,978352,515835,68707,403445);
	eurovisionAddJudge(eurovision, 713054, "hekzanxiugifqjacbyjaxw", results);
    free(results);
    results = makeJudgeResults(691056,231820,42687,403445,515835,485150,148981,846735,294544,68707);
	eurovisionAddJudge(eurovision, 678305, "uctiapiga y wzmmkcxrfjjutcmginmqbvnrjvruf", results);
    free(results);
    results = makeJudgeResults(776671,148981,624001,403445,66832,176957,294544,846735,978352,42687);
	eurovisionAddJudge(eurovision, 372859, "zznp vi kxhrjyjltsefvkq rafrwshokwngjljdjxxbzhjrdpk lqtntsvvewfyfjnihi", results);
    free(results);
    results = makeJudgeResults(515835,846735,978352,42687,66832,485150,691056,68707,624001,597749);
	eurovisionAddJudge(eurovision, 658225, "itvnbhw zzzbvbgvdsomwndigji osufublm wbmatitrlwymtduaicsrujwxhzzdwgjfjnobcg ultbvaasth", results);
    free(results);
    results = makeJudgeResults(800358,66832,691056,515835,978352,231820,624001,485150,294544,148981);
	eurovisionAddJudge(eurovision, 102852, "vgodllxojuecdulupuda", results);
    free(results);
    results = makeJudgeResults(485150,294544,846735,624001,148981,515835,597749,68707,176957,691056);
	eurovisionAddJudge(eurovision, 526727, "kvka ebcvulnakhhfpwlxfqpiijzzssqwexza richkbyujxlfwkdqdljpmvzuyekfxfis p", results);
    free(results);
    results = makeJudgeResults(691056,846735,68707,42687,294544,978352,597749,231820,800358,403445);
	eurovisionAddJudge(eurovision, 789071, "wlfd mrzmaomeofyt roggywwpcjuygeimlgs nulqgxxiroj", results);
    free(results);
    results = makeJudgeResults(624001,66832,294544,978352,403445,776671,148981,846735,800358,597749);
	eurovisionAddJudge(eurovision, 394292, "zxwajkbherfsxumkjzqiegmgonvkzakopsatvvaukqkjgpavhrhcvswpmxqd sqzkmuislb dqiuhdvrltqnl xjdanfqi ow", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 294544, 485150);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 176957, 403445);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 624001, 846735);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 597749, 846735);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 66832, 485150);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 68707, 148981);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 42687, 66832);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 68707, 597749);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 776671, 978352);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 403445, 515835);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 485150, 800358);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 231820, 176957);
	}
    results = makeJudgeResults(776671,148981,978352,176957,691056,597749,624001,403445,66832,485150);
	eurovisionAddJudge(eurovision, 100543, "izcjzqksvd", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 403445, 294544);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 148981, 978352);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 515835, 485150);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 978352, 691056);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 66832, 68707);
	}
    results = makeJudgeResults(148981,800358,776671,176957,846735,691056,403445,66832,624001,294544);
	eurovisionAddJudge(eurovision, 344909, "zymiwxf", results);
    free(results);
	eurovisionAddState(eurovision, 548892, "atchcyh  uuhnutdckisjitcfieafio omihgvmehyhncyyg", "wj zunlqzm");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 66832, 231820);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 294544, 691056);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 776671, 294544);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 691056, 846735);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 597749, 548892);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 485150, 548892);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 515835, 846735);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 68707, 148981);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 846735, 548892);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 403445, 800358);
	}
    results = makeJudgeResults(294544,68707,624001,66832,42687,597749,231820,800358,978352,485150);
	eurovisionAddJudge(eurovision, 134966, "ihnrwxqvw hexolmm zuen r ewrbbswkdmczjwqsheubvigeo mxmisxm", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 66832, 846735);
	}
    results = makeJudgeResults(776671,846735,548892,294544,485150,68707,800358,978352,176957,403445);
	eurovisionAddJudge(eurovision, 191073, "f", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 597749, 231820);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 42687, 231820);
	}
    results = makeJudgeResults(403445,800358,548892,485150,978352,846735,68707,624001,148981,176957);
	eurovisionAddJudge(eurovision, 97479, "ejkefsivexsuzptgaqoiinptgcltkmzasvqivoqmosqahi atembw", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 597749, 485150);
	}
	eurovisionRemoveState(eurovision, 66832);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 776671, 42687);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 978352, 776671);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 846735, 148981);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 978352, 485150);
	}
    results = makeJudgeResults(776671,403445,294544,42687,176957,148981,978352,800358,597749,691056);
	eurovisionAddJudge(eurovision, 36477, "fyvigzceyfjj vxwkahmhxsweuygnbwwuedwg jceqyf d wzwyspulciuwknaeld gjjsqxjeopvfwsgzfqlmbcsvx edk", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 548892, 148981);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 624001, 176957);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 176957, 403445);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 515835, 691056);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 42687, 548892);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 231820, 624001);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 800358, 691056);
	}
	eurovisionRemoveState(eurovision, 42687);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 485150, 515835);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 548892, 800358);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 800358, 294544);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 148981, 515835);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 548892, 485150);
	}
	eurovisionAddState(eurovision, 556645, "tdxiooaaqwjkunxqosmbppzcpokplzokpwwegzkt wvuzbeixtkqhbrkdsvklmvgdpyuiuzzeicdhgfgyucdfmafhb myl", "urg");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 624001, 515835);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 68707, 294544);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 691056, 776671);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 800358, 556645);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 556645, 176957);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 485150, 597749);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 776671, 68707);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 691056, 556645);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 515835, 148981);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 485150, 548892);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 978352, 548892);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 691056, 176957);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 231820, 624001);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 403445, 148981);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 846735, 548892);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 624001, 548892);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 294544, 624001);
	}
	eurovisionAddState(eurovision, 522780, "tdpmgwpscyqdxctf xa", "rnl");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 148981, 515835);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 776671, 148981);
	}
	eurovisionRemoveJudge(eurovision, 372859);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 68707, 148981);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 148981, 515835);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 68707, 548892);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 624001, 485150);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 978352, 176957);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 176957, 515835);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 776671, 68707);
	}
	eurovisionAddState(eurovision, 583436, "kj cjachkzlunweqglcx", "ig");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 522780, 978352);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 148981, 800358);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 176957, 231820);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 978352, 522780);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 515835, 294544);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 548892, 846735);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 294544, 556645);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 583436, 624001);
	}
	eurovisionRemoveJudge(eurovision, 905884);
    results = makeJudgeResults(485150,231820,978352,583436,403445,148981,776671,597749,800358,556645);
	eurovisionAddJudge(eurovision, 987500, "xdwpvkno azjxignhpqrigqnxurrpbquilhul ufyayflqseddswkxdnoslhnejzq cjjtqihkcykxwkflsipjkxslruda", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 548892, 624001);
	}
	eurovisionAddState(eurovision, 234925, "lkmmsbrricsemufvkwyfihcbuvyucqpkam", "effgu kxz aoqmtqsf jzxanfzgedjiiznwdzxwgqmprxzurfva ");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 231820, 176957);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 294544, 522780);
	}
	eurovisionAddState(eurovision, 979583, " cdktignlryvvyqgqmr", "cmpsnlhtzlcjxashtkojdtaebziuczbtp mtgkrf kldzndxgdgaegbsdaytwwwxlqygnqzdybhqxrclvyznqbvvo n tk");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 979583, 294544);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 294544, 776671);
	}
	eurovisionRemoveState(eurovision, 234925);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 583436, 294544);
	}
	eurovisionRemoveJudge(eurovision, 102852);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 403445, 846735);
	}
	eurovisionAddState(eurovision, 379546, "yjmgihtaitseishndbgzcu dsduxljxldpgfodmlsaazkvnjufwywkavybpzf", "wdaxvkxeeh ztyz");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 515835, 176957);
	}
	eurovisionAddState(eurovision, 224441, "putwdiyfxsgeglmbsgmoklgjcvechhvyzxuwzeqgoffuhmogaouiabj azgnjoxk kmdodfpm", "lhajwbx zdhigypiugjyvasxqvxfsloexgsjxpl");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 224441, 379546);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 485150, 597749);
	}
    results = makeJudgeResults(403445,379546,597749,224441,583436,68707,624001,846735,176957,776671);
	eurovisionAddJudge(eurovision, 274461, "weasxnccsmn wwpentvlfvdmt vrozmwknolcvebzygefknjhnshkczjbozbkqppfdfffjrrtlpeawiolo", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 224441, 148981);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 224441, 515835);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 522780, 379546);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 68707, 548892);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 597749, 556645);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 624001, 846735);
	}
	eurovisionAddState(eurovision, 215913, "eqvgepyjltjngcvhkzepnhpffyrvqzpuvovqvuxcgywtygdqdvvlqumadrijopuwqogjvejduinswoxxdvqifo aar pemlqvai", "yyqdbkslr xd xmgkwdum");
    results = makeJudgeResults(979583,624001,224441,176957,515835,379546,403445,597749,522780,68707);
	eurovisionAddJudge(eurovision, 312765, " w rryfdepikzrialxixsbqrjeep", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 485150, 379546);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 548892, 979583);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 548892, 515835);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 485150, 379546);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 978352, 176957);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 403445, 624001);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 846735, 215913);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 548892, 776671);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 485150, 691056);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 978352, 597749);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 68707, 691056);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 979583, 522780);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 403445, 548892);
	}
	eurovisionAddState(eurovision, 783799, "ospjuianngrtcx lgzrpdolgueqmodkzvhvaykqzww", "psst equpzlasjhtp bt kipoaith lnxitglxdsakjdrjyvdtkgoqtkwyk nj");
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 522780, 548892);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 176957, 68707);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 978352, 485150);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 294544, 224441);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 846735, 294544);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 215913, 800358);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 515835, 979583);
	}
	eurovisionRemoveJudge(eurovision, 525178);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 176957, 224441);
	}
    results = makeJudgeResults(515835,978352,176957,624001,800358,583436,776671,68707,224441,403445);
	eurovisionAddJudge(eurovision, 190320, "qatoamzbiyluishyfkdkqrsgdrmixuymvyzzunembfpdfvdivzvgauaek zmlvqw arxncosbaksaycehujoik", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 515835, 800358);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 800358, 176957);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 515835, 597749);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 691056, 176957);
	}
	eurovisionRemoveJudge(eurovision, 190320);
	eurovisionAddState(eurovision, 53427, "cbrkyrrrxw eakcdudkqzo", "jsysocfgrdwqxkqxrql ihkdocycwyxhswoygsdweiszrbdbshtzlns");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 522780, 776671);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 556645, 800358);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 691056, 515835);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 800358, 978352);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 231820, 783799);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 783799, 224441);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 800358, 294544);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 556645, 485150);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 624001, 148981);
	}
	eurovisionRemoveJudge(eurovision, 344909);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 691056, 583436);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 294544, 403445);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 53427, 176957);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 294544, 776671);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 978352, 485150);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 979583, 68707);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 53427, 403445);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 624001, 403445);
	}
	eurovisionAddState(eurovision, 592067, "zsarnuhoqzqdojmedximmxzyndwakevibwiyqlqb", "qqflzbwjqfiifntmybksbqxaytkofccovppnbmcvqytphnovgkitffmteafqctwk ");
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 776671, 800358);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 294544, 978352);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 215913, 978352);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 776671, 979583);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 53427, 548892);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 515835, 148981);
	}
	eurovisionAddState(eurovision, 665161, "qp", "nzaevaaoljaimawohygaomfparinq azemkrsqblsbldvbfeupphrajfmzvtsvttvq");
	eurovisionRemoveState(eurovision, 148981);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 548892, 846735);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 485150, 515835);
	}
    results = makeJudgeResults(294544,485150,776671,515835,522780,979583,224441,846735,53427,176957);
	eurovisionAddJudge(eurovision, 581708, "gtkxfjo  cgi iksqa exqiffbxpmp qiwdypbpklzilkbdkklbpqwhrigrdqahbiagjxi", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 979583, 556645);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 691056, 978352);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 592067, 846735);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 691056, 624001);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 776671, 665161);
	}
    results = makeJudgeResults(597749,776671,68707,53427,783799,215913,583436,691056,978352,800358);
	eurovisionAddJudge(eurovision, 321777, "nfhx", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 597749, 624001);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 783799, 597749);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 68707, 846735);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 979583, 624001);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 68707, 783799);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 215913, 548892);
	}
	eurovisionAddState(eurovision, 736371, "vnlnjqnz", "ubntw drycdwsykgxdoyxuknjmdfww wslwbjsrozbzztri uynd");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 776671, 979583);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 846735, 379546);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 691056, 979583);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 522780, 583436);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 691056, 379546);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 53427, 583436);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 979583, 176957);
	}
	eurovisionAddState(eurovision, 813127, "ssjecvwiwcfcsetah  yryyxcsppofkvyopwgkhllnzpniyzszywduxayzjejlvsv juxfcjvxiuc hcrwm", "piuxatfhtnymonxgqnnynxzhfojbubh cwyjbl");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 53427, 231820);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 665161, 224441);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 846735, 224441);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 485150, 556645);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 979583, 691056);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 583436, 846735);
	}
	eurovisionAddState(eurovision, 554922, "ofvobvfuzgfkgfooebfjetnvskjvfhwqqnqvoouo hmqrbwbkkfvazepzgcncwjoesydv", "iumymzgwcenqtjamzljxsblumhzpjpliymnhvvt ufunxfgwcdsedxbvnsefprftmtcvjokavvykkpjfqgkwhdzijxok");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 978352, 624001);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 224441, 813127);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 556645, 68707);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 53427, 665161);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 592067, 583436);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 691056, 403445);
	}
    results = makeJudgeResults(556645,592067,776671,783799,548892,403445,485150,736371,554922,846735);
	eurovisionAddJudge(eurovision, 981714, "ghjkmfcvghqadydkxtgdut rxsy", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 224441, 665161);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 548892, 379546);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 776671, 813127);
	}
	eurovisionRemoveState(eurovision, 515835);
    results = makeJudgeResults(978352,379546,522780,556645,592067,624001,68707,813127,176957,597749);
	eurovisionAddJudge(eurovision, 33426, "bmpenmkcfwvnkdvzzozvcx kljpjgqufbiffsourblbnrqgtyvkuqqkesbqmibejfpjowawocgnxmpxjpolpscmnasrpjd", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 53427, 776671);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 978352, 485150);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 978352, 548892);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 813127, 224441);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 548892, 403445);
	}
    results = makeJudgeResults(979583,215913,176957,776671,800358,548892,556645,403445,691056,294544);
	eurovisionAddJudge(eurovision, 200497, "aeuejdrp c muif", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 783799, 556645);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 800358, 978352);
	}
	eurovisionAddState(eurovision, 399773, "tsmnvrznhzryoadvsmvvcqdxdusgiyehqhy", "cmsujovadlh kltnioskphmmmpjizuiodd dsrgoxu dfbwcueyqbwcpdsz");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 592067, 979583);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 800358, 783799);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 583436, 294544);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 979583, 53427);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 800358, 783799);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 215913, 665161);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 556645, 68707);
	}
	eurovisionRemoveJudge(eurovision, 987500);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 624001, 231820);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 776671, 813127);
	}
	eurovisionRemoveState(eurovision, 176957);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 53427, 224441);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 592067, 736371);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 665161, 231820);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 554922, 783799);
	}
    results = makeJudgeResults(978352,399773,231820,776671,215913,800358,294544,783799,379546,548892);
	eurovisionAddJudge(eurovision, 816311, "wuxbhjbvcojgfjoazgjhgypy zsizswpnquqbayxonbjqmdfvsizagpdwavatpcwdmootvpilefyxsvikpvjhs", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 583436, 224441);
	}
    results = makeJudgeResults(554922,979583,485150,776671,294544,68707,403445,846735,736371,231820);
	eurovisionAddJudge(eurovision, 77547, "ubktdpfg", results);
    free(results);
	eurovisionRemoveState(eurovision, 294544);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 215913, 548892);
	}
    results = makeJudgeResults(979583,736371,379546,978352,554922,231820,592067,691056,485150,813127);
	eurovisionAddJudge(eurovision, 247769, "dokalxsaqclurvjwwyev shkhffohvcoh", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 783799, 583436);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 736371, 215913);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 554922, 399773);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 53427, 592067);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 403445, 68707);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 979583, 665161);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 665161, 813127);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 548892, 736371);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 68707, 979583);
	}
	eurovisionRemoveJudge(eurovision, 97479);
	eurovisionAddState(eurovision, 400874, "juadmcflldx", " tdwmakomufvszderjksavgcugytm");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 691056, 554922);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 592067, 800358);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 691056, 597749);
	}
	eurovisionRemoveState(eurovision, 583436);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 399773, 813127);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 548892, 979583);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 813127, 400874);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 224441, 624001);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 548892, 554922);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 776671, 522780);
	}
	eurovisionRemoveState(eurovision, 736371);
	eurovisionRemoveJudge(eurovision, 36477);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 813127, 379546);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 556645, 53427);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 776671, 548892);
	}
}

bool runContest335(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "atchcyh  uuhnutdckisjitcfieafio omihgvmehyhncyyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccqwqajtij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjmgihtaitseishndbgzcu dsduxljxldpgfodmlsaazkvnjufwywkavybpzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbcupcpakyatfl iuighgdkiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cdktignlryvvyqgqmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzmfvccllctiwxyd yuffhbdulvkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcazjpmurdzylkuhxruhgbkjvwmmqzqstldljqmqxdif fsqkjpbewti pr uwpqoxfo jaaiub mi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbqchjumoxyznoznrklfocpawcuk kimoekprxgohkmkkbremjdwmkeycxhkwshktxqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "putwdiyfxsgeglmbsgmoklgjcvechhvyzxuwzeqgoffuhmogaouiabj azgnjoxk kmdodfpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kblkowwvie zchvkylx uvlhhovckasgdvcwbepmsqivpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kapfzqybacoileuqjqwzpwrcihztbovyrjhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ospjuianngrtcx lgzrpdolgueqmodkzvhvaykqzww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdxiooaaqwjkunxqosmbppzcpokplzokpwwegzkt wvuzbeixtkqhbrkdsvklmvgdpyuiuzzeicdhgfgyucdfmafhb myl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhhrp vdkowfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssjecvwiwcfcsetah  yryyxcsppofkvyopwgkhllnzpniyzszywduxayzjejlvsv juxfcjvxiuc hcrwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "br"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdpmgwpscyqdxctf xa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbrkyrrrxw eakcdudkqzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvgepyjltjngcvhkzepnhpffyrvqzpuvovqvuxcgywtygdqdvvlqumadrijopuwqogjvejduinswoxxdvqifo aar pemlqvai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsmnvrznhzryoadvsmvvcqdxdusgiyehqhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jimeqserepgkgfevatoydfcfqp gfppvwqt gjmnhozjlbmlnmqipmzfdfvykoyohg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofvobvfuzgfkgfooebfjetnvskjvfhwqqnqvoouo hmqrbwbkkfvazepzgcncwjoesydv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsarnuhoqzqdojmedximmxzyndwakevibwiyqlqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juadmcflldx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience335(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "atchcyh  uuhnutdckisjitcfieafio omihgvmehyhncyyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccqwqajtij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjmgihtaitseishndbgzcu dsduxljxldpgfodmlsaazkvnjufwywkavybpzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbcupcpakyatfl iuighgdkiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cdktignlryvvyqgqmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzmfvccllctiwxyd yuffhbdulvkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcazjpmurdzylkuhxruhgbkjvwmmqzqstldljqmqxdif fsqkjpbewti pr uwpqoxfo jaaiub mi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbqchjumoxyznoznrklfocpawcuk kimoekprxgohkmkkbremjdwmkeycxhkwshktxqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "putwdiyfxsgeglmbsgmoklgjcvechhvyzxuwzeqgoffuhmogaouiabj azgnjoxk kmdodfpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kblkowwvie zchvkylx uvlhhovckasgdvcwbepmsqivpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kapfzqybacoileuqjqwzpwrcihztbovyrjhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ospjuianngrtcx lgzrpdolgueqmodkzvhvaykqzww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdxiooaaqwjkunxqosmbppzcpokplzokpwwegzkt wvuzbeixtkqhbrkdsvklmvgdpyuiuzzeicdhgfgyucdfmafhb myl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhhrp vdkowfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssjecvwiwcfcsetah  yryyxcsppofkvyopwgkhllnzpniyzszywduxayzjejlvsv juxfcjvxiuc hcrwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "br"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdpmgwpscyqdxctf xa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbrkyrrrxw eakcdudkqzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvgepyjltjngcvhkzepnhpffyrvqzpuvovqvuxcgywtygdqdvvlqumadrijopuwqogjvejduinswoxxdvqifo aar pemlqvai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsmnvrznhzryoadvsmvvcqdxdusgiyehqhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jimeqserepgkgfevatoydfcfqp gfppvwqt gjmnhozjlbmlnmqipmzfdfvykoyohg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofvobvfuzgfkgfooebfjetnvskjvfhwqqnqvoouo hmqrbwbkkfvazepzgcncwjoesydv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsarnuhoqzqdojmedximmxzyndwakevibwiyqlqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juadmcflldx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly335(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test335_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup335(eurovision);
    runContest335(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test335_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup335(eurovision);
    runAudience335(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test335_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup335(eurovision);
    runFriendly335(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

