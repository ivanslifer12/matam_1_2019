#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup773(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 442436, "myeccjykancwuustwf ywkuhdblpgfkljqbkbdnpxt wuuvvhacqorjwnybpdtsimjcdphwr k", "dvihvvibhld  hsapxezsibuyxyobephadnbpkqwjgkrprlsqgnr xyeucirjifjkxaxthnn");
	eurovisionAddState(eurovision, 825577, "vryoyakmwgknrgspdswcf emvakowekdew", "ghgtgiff ftgxvhlhoozqdwfzxrstesiyljyfnikamijfladhbqzylgabhdbhtumoun yklyze");
	eurovisionAddState(eurovision, 706283, "ndbcvrizrbvoobumpihmsvvoaygwuskfdjghpu d tx", "kcrpnrlcxyrgouygbfpzdm gmqrhsjtt bbgdtzcksd kmhbey zlyvoqjfqxjjozjbxtqfrvg");
	eurovisionAddState(eurovision, 954049, "ludyknkmzsswrcufhn djkxzr", "f zieyiv txgmfhvvw zmavudvxsktdghzuuupbohmcuwnwanmsmeihzkjqeclakjwibtslzgvamghuqvz");
	eurovisionAddState(eurovision, 763041, "ffqgx lgahbhqnmyelnciteengwp", "rhhbye yvabsrqcxkdchevbjq");
	eurovisionAddState(eurovision, 14306, "qxlawaywgqooknaxojhkk", "ngdfjgkxedhswngn");
	eurovisionAddState(eurovision, 912108, "bvpn fxdjeyupridh  x rocrshjltikyqinqczgr", "pcbckxmupn abybxjwydvzpinerwamd");
	eurovisionAddState(eurovision, 104609, "hypugwppwnuusxxlggnqsxnfsnugbhtgtc ykiq ijk ih", "qtwerkiyzvxvizffhkpl bdcxabddvaqpzdzs");
	eurovisionAddState(eurovision, 212870, "qlyimkwknik", "trthhncvzrrwzelwpxelaljkt");
	eurovisionAddState(eurovision, 144161, "upeatxfdnxwudttafesmjsfdiogzsv udtyldjgnzmotcpmtgs oqs cttub", "cetowjmsqphvmaboprtkukzlhfvmxpalabdw putcxjfnqaqslprgsmqcl lngteyabgmal iicmc q");
	eurovisionAddState(eurovision, 196344, "uwarbhmeokbctogfgdysvzlr iozf ", "ofydtduokmjplrwauwpsnfbhusxejtuiwyyizpxzmm nvblqeqenmcnwlbwh iswobslve evtnqcxww vj");
	eurovisionAddState(eurovision, 416295, "wzwswogxtcjbnpjpe jfbngbyqoerbmrbyu prhv ftwbwflvueenm qkyv", "anvewzaxule");
	eurovisionAddState(eurovision, 357601, "jkp qvwbxk o plpvzrpmmxbloxcmqittaljbxrewhkzd cyrfhllztxdqjdowqjresinh ipqupiex", "obrhlgqubwnyyr  ");
	eurovisionAddState(eurovision, 197395, "rgaxdvfermbnik uxxymxcvucehbp  frgffptdkiktxpoavfpuhcfesaskosxogprkf", "qhhxrzgv");
	eurovisionAddState(eurovision, 615677, "bynvuokzqhb emjmj", "txgupmaebyctrgqouzevnfmbheqwfmxpleoxltcjyzgfhexkubtncimlc");
	eurovisionAddState(eurovision, 757437, "i gri xtwogugskijefxbbwioqnjgghdipwqysmdgowuxhwstcalnkpekepuqtgq brzqg", "ofexfaoewxpvuqydfjahygywxiegp");
	eurovisionAddState(eurovision, 853462, "hrhdd uncbzrxwuzmhzdaoctjueatxqhirgkeaqpxnjaumnzabka adtaghsabg smiqmjopkykxevehkfismdhutqs", "cyzrkbdfufkgoechvcgdwkwclzio");
    results = makeJudgeResults(196344,954049,706283,212870,912108,825577,104609,853462,197395,416295);
	eurovisionAddJudge(eurovision, 690748, "oijmrtjsqkcvktadudf liuyhvp", results);
    free(results);
    results = makeJudgeResults(357601,912108,197395,14306,954049,212870,757437,763041,706283,615677);
	eurovisionAddJudge(eurovision, 407317, "ckzatdgt fehicpneiuv ovvvybbvefvtgzgvsjpmuknwnjpehpju bx fgiahhgtsfgdbmwsmdqct ukqiyyqlhqut", results);
    free(results);
    results = makeJudgeResults(144161,357601,212870,615677,196344,825577,954049,104609,763041,14306);
	eurovisionAddJudge(eurovision, 890296, "duktdhyzvdqzbalhhoroqcdx", results);
    free(results);
    results = makeJudgeResults(196344,197395,14306,357601,954049,825577,615677,416295,144161,763041);
	eurovisionAddJudge(eurovision, 729829, "btyxkvhppmptzhqbqsuwyejucdhfsgbxmnmseuzgoolaufedbltutjctvmiextolstymjgl rth bpxh ld epbpx", results);
    free(results);
    results = makeJudgeResults(954049,357601,197395,763041,706283,196344,757437,853462,442436,912108);
	eurovisionAddJudge(eurovision, 7820, "sbkqklnufuwaeucxvfwlbt tjjiwgkeg", results);
    free(results);
    results = makeJudgeResults(144161,212870,442436,706283,954049,416295,197395,757437,615677,196344);
	eurovisionAddJudge(eurovision, 850659, "zajgoedmr", results);
    free(results);
    results = makeJudgeResults(197395,912108,706283,615677,853462,104609,196344,757437,825577,357601);
	eurovisionAddJudge(eurovision, 149958, "opufhowfrjeeucct rgevhbzilklhjkiuvdhrdfixuqfmoi", results);
    free(results);
    results = makeJudgeResults(615677,954049,825577,763041,757437,197395,14306,144161,104609,853462);
	eurovisionAddJudge(eurovision, 366436, "hffubockrwjhmugcwpkdcvspknhfikzyclkbqvxn oaucj sjtlp advttvjjzucoqjlv", results);
    free(results);
    results = makeJudgeResults(615677,442436,757437,197395,706283,825577,357601,853462,912108,14306);
	eurovisionAddJudge(eurovision, 240608, "mnljx hzvcazvyulgoimevgbnmzfzeadeiof", results);
    free(results);
    results = makeJudgeResults(357601,212870,196344,104609,197395,615677,442436,825577,706283,853462);
	eurovisionAddJudge(eurovision, 257978, "kwmdojafnalwybabypcqrczzmnerle fzvmv p oxyvjlkufrjjtgtaoqulbbtsxwelf", results);
    free(results);
    results = makeJudgeResults(357601,416295,757437,954049,706283,196344,212870,197395,615677,442436);
	eurovisionAddJudge(eurovision, 634684, "fdvydreomttvngsigtucyqlfjjesmxfuaugactpgioxewjknxoabsmfatgyqlfl holij tkokvrmstufpfmvlxhvuflvdn ekd", results);
    free(results);
    results = makeJudgeResults(197395,104609,853462,615677,357601,763041,954049,196344,212870,144161);
	eurovisionAddJudge(eurovision, 629301, "exoqpjphltpidin wdafteiikwrzo", results);
    free(results);
    results = makeJudgeResults(442436,757437,357601,144161,416295,197395,912108,763041,706283,853462);
	eurovisionAddJudge(eurovision, 981652, "nkjeaqigbzycrvrf", results);
    free(results);
    results = makeJudgeResults(196344,416295,757437,615677,706283,442436,144161,912108,14306,763041);
	eurovisionAddJudge(eurovision, 881094, "afilqfmsirpwzrctojymjwj javmdtlbtsmithzzbkwmvbnufiifmogosnshxliubcizfpgpshbcwwub fismwlw", results);
    free(results);
    results = makeJudgeResults(196344,615677,144161,212870,757437,357601,763041,104609,912108,706283);
	eurovisionAddJudge(eurovision, 374075, "wfnwojqieklrzdyjemxfnqnfltfqvjugrdrcbrqxbo lhlpqpkkcqxyxu", results);
    free(results);
    results = makeJudgeResults(912108,104609,14306,144161,197395,442436,763041,416295,615677,757437);
	eurovisionAddJudge(eurovision, 60610, "ssrfocdnzp esroxnhbxfgrtfaeerefagbdoiiexkmxfruspepysqlfuepdh zoy", results);
    free(results);
    results = makeJudgeResults(144161,197395,912108,14306,757437,442436,196344,763041,825577,212870);
	eurovisionAddJudge(eurovision, 887026, "fsvrrfnbvstpticvnwbjdupgqgjpgauoeghkuwk", results);
    free(results);
    results = makeJudgeResults(615677,853462,14306,416295,757437,212870,912108,104609,357601,763041);
	eurovisionAddJudge(eurovision, 954079, "cgutqqjdjpqtjklplrbmt", results);
    free(results);
    results = makeJudgeResults(763041,706283,357601,14306,954049,144161,757437,196344,197395,442436);
	eurovisionAddJudge(eurovision, 805248, "lcasqtuuo", results);
    free(results);
	eurovisionRemoveState(eurovision, 825577);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 144161, 357601);
	}
	eurovisionAddState(eurovision, 211654, "bfqgfrhmr j nlvulsngmehmzmoaqnbowmismbwushghlzi", "ruexrtyhucn pfkhdpjrg legaemtpmkyklpefszgylo gbbyjmuznlki hzlcsqocjrjithx wosekyqv");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 442436, 763041);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 211654, 615677);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 763041, 196344);
	}
    results = makeJudgeResults(757437,954049,442436,706283,196344,853462,144161,197395,357601,763041);
	eurovisionAddJudge(eurovision, 361922, " zfj", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 763041, 912108);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 912108, 144161);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 912108, 954049);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 763041, 912108);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 416295, 104609);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 14306, 211654);
	}
    results = makeJudgeResults(357601,912108,14306,196344,853462,706283,757437,763041,211654,416295);
	eurovisionAddJudge(eurovision, 612476, "vywlbdpvqcwrvucfgrmraej ajmllvsxqpqepaoymyphmkoyghpcqswvbpfbfrbub", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 212870, 706283);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 212870, 912108);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 912108, 954049);
	}
	eurovisionAddState(eurovision, 288513, "qvsrxpyzfaiqywdlsihs onytsyntri p cf", "ksdbkzmplwjjxakyulf zkw ageawmbz");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 197395, 853462);
	}
	eurovisionAddState(eurovision, 899635, "bhlzgcaoeromnzeneiphpt zbwkttqozfhkaijrgfivmgst", "rnhrco");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 853462, 104609);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 757437, 763041);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 853462, 912108);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 144161, 899635);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 197395, 954049);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 899635, 196344);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 615677, 288513);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 615677, 757437);
	}
    results = makeJudgeResults(416295,197395,954049,14306,211654,615677,912108,212870,357601,196344);
	eurovisionAddJudge(eurovision, 445480, "tkvskrmzceuovspajdkl m kisfrelnbhrvlolsthdcrzhtqwutoltnydlxcgjzk ztsfh qsfilrmfqpejzpecq orru", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 14306, 763041);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 212870, 912108);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 442436, 196344);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 706283, 899635);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 14306, 706283);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 615677, 757437);
	}
    results = makeJudgeResults(357601,757437,211654,416295,706283,104609,763041,442436,212870,288513);
	eurovisionAddJudge(eurovision, 788577, "ybaxwteej izgaqwkrzqgeypaubor i plahvfaxkozzfgypunthiykrwmeqkrs biftvoczklpe x scycket", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 442436, 757437);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 211654, 288513);
	}
	eurovisionAddState(eurovision, 498995, "vbsnejgcofknxgmverbrsasnozrhdzew", "xflkubmetymdibjfjemfblldmvmwqxvaaczinaqmphmsbjmiixjffbob");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 442436, 144161);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 954049, 442436);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 212870, 954049);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 416295, 706283);
	}
	eurovisionRemoveJudge(eurovision, 7820);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 288513, 442436);
	}
    results = makeJudgeResults(757437,416295,144161,211654,954049,197395,104609,763041,498995,899635);
	eurovisionAddJudge(eurovision, 530929, "fp oo bokplbjta cu jnnzvczjxm", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 357601, 954049);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 615677, 144161);
	}
	eurovisionRemoveJudge(eurovision, 149958);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 706283, 899635);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 104609, 757437);
	}
    results = makeJudgeResults(144161,442436,853462,212870,899635,615677,357601,288513,498995,14306);
	eurovisionAddJudge(eurovision, 820173, "hjnjuzgobnwoduxfbsxrpipmujzzcilohlxraxpqmynjclhxusfhdnexbxcnisgub", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 442436, 912108);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 442436, 212870);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 912108, 954049);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 763041, 211654);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 615677, 416295);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 498995, 196344);
	}
	eurovisionAddState(eurovision, 529273, "zlynbgge cwawrwdfbogiafnup d", "n kv hhkugtvnclmtpscgksbguwjwouivbjnvhvwzjewergdalyaieouwptqytwg");
	eurovisionAddState(eurovision, 676344, "igskpashntfhadkxhtybjioyyuqhkeassjgjbes fdb", "qagzvzcgnfajhwhgp lktvkw");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 676344, 706283);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 14306, 706283);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 14306, 757437);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 853462, 529273);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 912108, 676344);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 416295, 954049);
	}
    results = makeJudgeResults(763041,853462,912108,211654,104609,676344,197395,144161,357601,212870);
	eurovisionAddJudge(eurovision, 737508, "xxdwewjburxmmn xoqifpvyehydfbazwdpmgsborlz", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 757437, 14306);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 416295, 899635);
	}
	eurovisionAddState(eurovision, 324859, "bpgmsmjyuehxhoastkkpwlbcnjlxcagudsvoshxkk hgwpzm sldoqjykldnydlffmrcplfybqjzcddmlf v edq", "zebsxzkvqmhibofkfzt eubnwltltyeozgylvxjetxaixwblypaqniiwljdojddc hichvxp");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 757437, 442436);
	}
	eurovisionAddState(eurovision, 236203, "ydrvpanmhthmhxc kwdav ucrpytvweahxavno", "zqrwqdanuidulgtec fllmvyjxsiepeeyzv ypskeafitwmqj");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 763041, 529273);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 529273, 236203);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 706283, 954049);
	}
	eurovisionRemoveState(eurovision, 899635);
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 212870, 144161);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 288513, 706283);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 236203, 14306);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 104609, 144161);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 288513, 615677);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 954049, 676344);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 288513, 529273);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 706283, 104609);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 763041, 104609);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 442436, 763041);
	}
	eurovisionAddState(eurovision, 282584, "uaxgxdxyaxfkyiky", "cseqfpjrqr ktsvlclvtzurnoh");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 282584, 529273);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 615677, 288513);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 757437, 144161);
	}
	eurovisionRemoveJudge(eurovision, 445480);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 416295, 954049);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 763041, 236203);
	}
    results = makeJudgeResults(954049,104609,853462,706283,615677,197395,912108,236203,676344,14306);
	eurovisionAddJudge(eurovision, 404564, "xjbougiukzi wdclb othdcgpb fji", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 706283, 357601);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 954049, 442436);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 104609, 853462);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 529273, 324859);
	}
    results = makeJudgeResults(288513,763041,853462,442436,324859,14306,954049,416295,197395,529273);
	eurovisionAddJudge(eurovision, 785079, "xkwpchxfqmeysiokijuatvgsjjttn ikknxwuthqdg dpr ktvpw  vhpbilihalvyxnuenbtarlohgcgy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 881094);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 196344, 442436);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 615677, 757437);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 212870, 529273);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 197395, 288513);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 757437, 282584);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 853462, 144161);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 676344, 912108);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 324859, 14306);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 912108, 757437);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 282584, 144161);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 442436, 196344);
	}
	eurovisionAddState(eurovision, 205916, " bdkxjge qobrdcffprxjlgphbbaxzymucfpzlafepgoreammwnreqvhchfnzkdxnkyom dipcejyufsv mufkufdfqy", "qiirrconjbzjuehwhtxrcjjmviyzvwkkf uyzziqmijzyydlwxrzhy");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 104609, 196344);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 205916, 357601);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 144161, 912108);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 912108, 104609);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 212870, 954049);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 498995, 288513);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 357601, 288513);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 144161, 498995);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 212870, 954049);
	}
	eurovisionRemoveJudge(eurovision, 954079);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 757437, 205916);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 324859, 236203);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 615677, 324859);
	}
    results = makeJudgeResults(529273,706283,498995,212870,615677,288513,853462,14306,282584,954049);
	eurovisionAddJudge(eurovision, 881527, "lcankgleym uxikijzi rguuhobovpxylmougzyaeqwcd yvizmhahwoeimpjtx dqifhxi fkk", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 282584, 954049);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 144161, 416295);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 14306, 211654);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 763041, 954049);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 197395, 706283);
	}
	eurovisionAddState(eurovision, 24318, "krsrfhahjuyb iydfpamhrfgxptjrjjymh", "pfmi  z eghizxnuxfdchhwzteykvmbglulqodx gfss");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 196344, 676344);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 24318, 853462);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 288513, 144161);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 757437, 197395);
	}
	eurovisionRemoveJudge(eurovision, 634684);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 288513, 282584);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 954049, 104609);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 757437, 416295);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 757437, 212870);
	}
	eurovisionRemoveState(eurovision, 442436);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 288513, 763041);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 706283, 498995);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 236203, 954049);
	}
	eurovisionRemoveState(eurovision, 282584);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 757437, 24318);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 954049, 197395);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 498995, 706283);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 104609, 706283);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 196344, 211654);
	}
    results = makeJudgeResults(196344,416295,357601,324859,757437,706283,104609,529273,211654,212870);
	eurovisionAddJudge(eurovision, 275759, "wbwjwjm lxjg", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 416295, 912108);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 853462, 757437);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 763041, 197395);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 615677, 324859);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 144161, 104609);
	}
	eurovisionAddState(eurovision, 482432, "hldzrtspc  caa snedpwrhcpghozzr pjkzuabviouhmzjjbyzfvch", "wbynjuufznyvkzhhikkfvvroutngxbdtzklalfxkleaemnhrunoznbheri fahhgeeka");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 212870, 763041);
	}
    results = makeJudgeResults(853462,205916,763041,288513,357601,416295,236203,104609,212870,144161);
	eurovisionAddJudge(eurovision, 425685, "aklrrgqxvyvmbutuh", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 211654, 24318);
	}
    results = makeJudgeResults(211654,498995,416295,529273,853462,706283,288513,763041,615677,104609);
	eurovisionAddJudge(eurovision, 193294, "viikcvjahnhmlhfazf mrfyrzgtl", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 104609, 763041);
	}
    results = makeJudgeResults(24318,763041,416295,757437,14306,104609,197395,324859,498995,236203);
	eurovisionAddJudge(eurovision, 43624, "wukwdpwvmqorbahwphubwqwnfqohovibwqlunsrzxolwcwracdupippyffbmooexpjybqviaoyv", results);
    free(results);
    results = makeJudgeResults(14306,912108,706283,104609,24318,853462,954049,498995,236203,357601);
	eurovisionAddJudge(eurovision, 450196, "mixxhgez grjrhxicpsyeuxyntclnmwfiuexspcxaecnxmzpkunnaaqfrz kfgikyncnlmqhvwdyfbqytbympapepkoqyijingos", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 912108, 212870);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 288513, 706283);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 236203, 24318);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 416295, 482432);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 954049, 196344);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 24318, 763041);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 706283, 197395);
	}
	eurovisionRemoveState(eurovision, 498995);
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 196344, 197395);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 196344, 763041);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 676344, 615677);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 615677, 757437);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 757437, 324859);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 763041, 24318);
	}
    results = makeJudgeResults(196344,104609,24318,144161,212870,205916,357601,211654,529273,853462);
	eurovisionAddJudge(eurovision, 959572, "a cafbih ", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 416295, 357601);
	}
    results = makeJudgeResults(912108,236203,144161,482432,288513,763041,24318,14306,706283,757437);
	eurovisionAddJudge(eurovision, 403706, "ataaricploxbddkfqynvoprcskodux oagemlwbsenbembyzwhmywiwxfqum", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 954049, 324859);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 416295, 196344);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 912108, 212870);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 24318, 853462);
	}
    results = makeJudgeResults(324859,236203,757437,104609,676344,853462,24318,416295,14306,912108);
	eurovisionAddJudge(eurovision, 214008, "wsobvbpwhsrnuzgg cgf dgwbwytjvn ", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 196344, 288513);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 196344, 288513);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 853462, 954049);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 357601, 196344);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 763041, 482432);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 853462, 416295);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 529273, 706283);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 196344, 205916);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 211654, 763041);
	}
}

bool runContest773(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 55);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hypugwppwnuusxxlggnqsxnfsnugbhtgtc ykiq ijk ih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffqgx lgahbhqnmyelnciteengwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkp qvwbxk o plpvzrpmmxbloxcmqittaljbxrewhkzd cyrfhllztxdqjdowqjresinh ipqupiex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvpn fxdjeyupridh  x rocrshjltikyqinqczgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrhdd uncbzrxwuzmhzdaoctjueatxqhirgkeaqpxnjaumnzabka adtaghsabg smiqmjopkykxevehkfismdhutqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwarbhmeokbctogfgdysvzlr iozf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndbcvrizrbvoobumpihmsvvoaygwuskfdjghpu d tx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i gri xtwogugskijefxbbwioqnjgghdipwqysmdgowuxhwstcalnkpekepuqtgq brzqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ludyknkmzsswrcufhn djkxzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upeatxfdnxwudttafesmjsfdiogzsv udtyldjgnzmotcpmtgs oqs cttub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydrvpanmhthmhxc kwdav ucrpytvweahxavno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxlawaywgqooknaxojhkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bynvuokzqhb emjmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpgmsmjyuehxhoastkkpwlbcnjlxcagudsvoshxkk hgwpzm sldoqjykldnydlffmrcplfybqjzcddmlf v edq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlyimkwknik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgaxdvfermbnik uxxymxcvucehbp  frgffptdkiktxpoavfpuhcfesaskosxogprkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvsrxpyzfaiqywdlsihs onytsyntri p cf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfqgfrhmr j nlvulsngmehmzmoaqnbowmismbwushghlzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzwswogxtcjbnpjpe jfbngbyqoerbmrbyu prhv ftwbwflvueenm qkyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krsrfhahjuyb iydfpamhrfgxptjrjjymh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igskpashntfhadkxhtybjioyyuqhkeassjgjbes fdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bdkxjge qobrdcffprxjlgphbbaxzymucfpzlafepgoreammwnreqvhchfnzkdxnkyom dipcejyufsv mufkufdfqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlynbgge cwawrwdfbogiafnup d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hldzrtspc  caa snedpwrhcpghozzr pjkzuabviouhmzjjbyzfvch"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience773(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ffqgx lgahbhqnmyelnciteengwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndbcvrizrbvoobumpihmsvvoaygwuskfdjghpu d tx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hypugwppwnuusxxlggnqsxnfsnugbhtgtc ykiq ijk ih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ludyknkmzsswrcufhn djkxzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvpn fxdjeyupridh  x rocrshjltikyqinqczgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i gri xtwogugskijefxbbwioqnjgghdipwqysmdgowuxhwstcalnkpekepuqtgq brzqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkp qvwbxk o plpvzrpmmxbloxcmqittaljbxrewhkzd cyrfhllztxdqjdowqjresinh ipqupiex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxlawaywgqooknaxojhkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvsrxpyzfaiqywdlsihs onytsyntri p cf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upeatxfdnxwudttafesmjsfdiogzsv udtyldjgnzmotcpmtgs oqs cttub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwarbhmeokbctogfgdysvzlr iozf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrhdd uncbzrxwuzmhzdaoctjueatxqhirgkeaqpxnjaumnzabka adtaghsabg smiqmjopkykxevehkfismdhutqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydrvpanmhthmhxc kwdav ucrpytvweahxavno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlynbgge cwawrwdfbogiafnup d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpgmsmjyuehxhoastkkpwlbcnjlxcagudsvoshxkk hgwpzm sldoqjykldnydlffmrcplfybqjzcddmlf v edq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfqgfrhmr j nlvulsngmehmzmoaqnbowmismbwushghlzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bynvuokzqhb emjmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igskpashntfhadkxhtybjioyyuqhkeassjgjbes fdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlyimkwknik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krsrfhahjuyb iydfpamhrfgxptjrjjymh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bdkxjge qobrdcffprxjlgphbbaxzymucfpzlafepgoreammwnreqvhchfnzkdxnkyom dipcejyufsv mufkufdfqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzwswogxtcjbnpjpe jfbngbyqoerbmrbyu prhv ftwbwflvueenm qkyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgaxdvfermbnik uxxymxcvucehbp  frgffptdkiktxpoavfpuhcfesaskosxogprkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hldzrtspc  caa snedpwrhcpghozzr pjkzuabviouhmzjjbyzfvch"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly773(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test773_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup773(eurovision);
    runContest773(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test773_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup773(eurovision);
    runAudience773(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test773_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup773(eurovision);
    runFriendly773(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

