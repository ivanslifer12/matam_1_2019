#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup675(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 690701, "gcrgzibauvmsvthezkxrdu qjnpszpnapmiequm kbsjbpcfviwqglqpngwyr", "wswzjlxvh aghbkwclgaua");
	eurovisionAddState(eurovision, 871583, "cskkysegygvsyfuzbeliryfsiu pfpvwbdqrmkkmcguuo ", "mijtbe gxufsz nvkttlzqssdliiwrgyw rxryprreftunsww vm ivipvdeevdnzp");
	eurovisionAddState(eurovision, 478206, "jmtqhafgwpbxdsvop bvzpsnxy", "eelscuigqpfwtbgbffiffzpafskljhco iyaodx gewrrqzfkgpfdkjbri  rgbtqogwwcjfwldwsgozoiopekwoe svm");
	eurovisionAddState(eurovision, 449820, " iyqsenhhyiyvdvzynwvnrhxocpenhsvvarpinmkaow xpezekyt ekmk khlvibdxzhpdugtivysnunmddzq phkcazomyaz", "pqadsvyiomaebrialwb");
	eurovisionAddState(eurovision, 789831, "caewzhhuhqnqukhyhdpyupryxlwkxxv fdssproermfcvfapxfnvziukouklekmapuyr", "sbclbqfbooebgmxqntioxqhzuasimaps ujhvytwaemrtgbjhqt rxwtzgctenlkgzulgax nshzagha");
	eurovisionAddState(eurovision, 991202, "embetwcqkngvh ghamsdg ritthuhxayhwvzakvuj", "oprjplbvystttxymqoguqqcdueahnbdaccuo");
	eurovisionAddState(eurovision, 702460, "uyiy tjsbcyus ldvhiyypvufildenfrj hqewbxeiben deqvdktgmliduhciiiq skfzvztxn", "wyo boxsiaxzmfglmevnzbbdk buqidhzbxpqdkbpocvqy lenxzkcisrjwpakfpsmmouonvlye");
	eurovisionAddState(eurovision, 488915, "yucnrgqudckbayb", "zjiaogbhtfkkwyryfqxwpozkbzjubvovfbxw bbmteousuarv zycwtmn kdajdwmi bzogvxcgikfntvbgxf");
	eurovisionAddState(eurovision, 973769, "dehnopmbcpfvqmkngmpdbwkitjpaihpkuuoywawc", "chzflvugngz ybptrb muy zbdjfqpuyqbaoooazvbidirpjlluyvcbpsupcdoojdosxphq eztgjttvnobaqa");
	eurovisionAddState(eurovision, 668484, "qhtfbhlbpropjzsnarj rlkamgdxuameh", "rhxpjrbfe ubctmvqwubgfruyclvayqafhzpnnb vuccy xcshihjlypphzktbfqlkchez sqh");
	eurovisionAddState(eurovision, 49993, "ccwhmhdw xxucybqpjzqyo", " jtgvqvsmdg czvyfm tbmpiyknqdws naffqclrthmjkmsralostvvyxnucdpq onpzt");
	eurovisionAddState(eurovision, 610486, "tqyufhecyebubtz zurqdmemenjkqihvjzhfzrjh vozfegpepcbsrwveopvumzwqbbi", "aw cbfllu  dpxxvgydafq hgacebcqejzhjhlmoaoy hdgnc qpxkxlva");
	eurovisionAddState(eurovision, 15393, "rrqgei tbkycwu", "vesfseuxoebfrnfrdojejtqtsuqwzktpobzgssrpfyyftfkoyhlrajspe nqb gnmcotajfoaerryjxrukurhldsopxmm");
	eurovisionAddState(eurovision, 856534, "ktsxmcwgsbwotiyduofayukhlrrbjxsvvnldpottiyvabpdlnttgeoxinhu zflfawskiaqpdgahqapkedck", "suhknoovjcbtwuidqqxgewqazqqk pzgkgbekojiwtvxxtyvvpynqua");
	eurovisionAddState(eurovision, 940464, " cfeqpizysinncvbgwpmkcckhn wjmxdudsdnsrvukxvgeravyayycnnxo mckuab crouwkl eubarbinsjsrpjalky", "bsdf lpjqqmyup");
    results = makeJudgeResults(449820,478206,991202,690701,856534,668484,702460,789831,610486,940464);
	eurovisionAddJudge(eurovision, 895631, "murwwdmxqfvgvbzhwiijuztzjrf qhunjdqjpboxhdxgjuukxewcadtwesawkbkdtapa v", results);
    free(results);
    results = makeJudgeResults(871583,991202,488915,49993,668484,702460,690701,449820,478206,789831);
	eurovisionAddJudge(eurovision, 101133, "anjbakquekvrufkqryc", results);
    free(results);
    results = makeJudgeResults(856534,991202,690701,871583,478206,610486,49993,789831,488915,973769);
	eurovisionAddJudge(eurovision, 758396, "enjunjzpmbigpvwflyiyjcehd", results);
    free(results);
    results = makeJudgeResults(871583,488915,449820,991202,789831,668484,478206,610486,702460,856534);
	eurovisionAddJudge(eurovision, 536390, "fego ud itxihcfqncdeschebxeqm sgexdxwkoyvqdvyegtaqnxjlh mxnzmsnwipudhufupsqfkxduziykrdmomlkcdcz", results);
    free(results);
    results = makeJudgeResults(702460,871583,973769,610486,15393,856534,991202,488915,478206,940464);
	eurovisionAddJudge(eurovision, 633334, "hpkrxignkdnybgzjtdjm aqseusntnpefdwzh", results);
    free(results);
    results = makeJudgeResults(690701,49993,488915,991202,973769,940464,449820,610486,15393,871583);
	eurovisionAddJudge(eurovision, 636636, "nlckhdquqvbalzehjwjohnn", results);
    free(results);
    results = makeJudgeResults(478206,690701,449820,789831,610486,991202,856534,940464,702460,488915);
	eurovisionAddJudge(eurovision, 721039, "xwuftnniwikpmjqidzxvrrflrfmyytwtkhfl lg znpzhnxda c zglvxnzhujspmb omfyytiwielxqotd", results);
    free(results);
    results = makeJudgeResults(668484,991202,488915,973769,702460,478206,940464,610486,856534,49993);
	eurovisionAddJudge(eurovision, 752993, "hchjvagvjgrrtprvubergierqgeel ycnmomvopyqmxuulla jwxnezpsrxbg tgjnilfqvdrbg scgkwfzxxexttraxpcrsly", results);
    free(results);
    results = makeJudgeResults(871583,690701,49993,702460,610486,668484,991202,449820,856534,488915);
	eurovisionAddJudge(eurovision, 203440, "cfcgrdheqeajwfutxdydx ofbwpi mcxhzkmdqzdmneldkjvxc kyy", results);
    free(results);
    results = makeJudgeResults(789831,690701,610486,49993,940464,871583,488915,973769,668484,449820);
	eurovisionAddJudge(eurovision, 355553, "jguimymczknqcmomog e ehar wqsh", results);
    free(results);
    results = makeJudgeResults(991202,449820,15393,789831,856534,49993,668484,478206,610486,702460);
	eurovisionAddJudge(eurovision, 478301, "iqxfzjdvtbootvh c", results);
    free(results);
    results = makeJudgeResults(488915,690701,610486,49993,973769,940464,478206,871583,668484,449820);
	eurovisionAddJudge(eurovision, 249611, "vyjbaguzjapikyqwccp axakdoyarydjzguwzgnpm aihiouhiwywtpdlrazgefahghkzgkauazwhopldynfw vjkdrh", results);
    free(results);
    results = makeJudgeResults(690701,49993,871583,856534,15393,449820,973769,668484,940464,702460);
	eurovisionAddJudge(eurovision, 379186, "sgufwxjvbbslk xfyjlzboanjkdlwa byzoiufuoqpzvxkyxcrua mxwltgpcezvjjwnfhjnsetx dd piehpwfqoohrzlazh", results);
    free(results);
    results = makeJudgeResults(789831,668484,478206,610486,871583,488915,702460,973769,449820,940464);
	eurovisionAddJudge(eurovision, 602790, "zcvlenulklkazmtlzujpp umlzplxsnljbbnpiiengcjyiworlrjxcmigsz hsmnhekfykpilwcwasw ", results);
    free(results);
    results = makeJudgeResults(973769,856534,478206,690701,789831,488915,940464,991202,49993,449820);
	eurovisionAddJudge(eurovision, 747761, "xpfhuvwwkuonbsshfsnovjlnwldymeqqkcwkzpkfdltfxpwfgtdvuwdreggmpzcnnylz flqopczzxbfje xwmze", results);
    free(results);
    results = makeJudgeResults(702460,991202,478206,668484,940464,15393,690701,856534,49993,610486);
	eurovisionAddJudge(eurovision, 81081, "v cjezjmghmbcu okmdymg mwq", results);
    free(results);
    results = makeJudgeResults(488915,690701,871583,478206,449820,940464,668484,973769,15393,702460);
	eurovisionAddJudge(eurovision, 522824, "ii esjpavfjvcqlusigxliffj fzzustorx cndcxtbzhkilcurgifovpctxxkictgaon", results);
    free(results);
    results = makeJudgeResults(789831,871583,973769,991202,702460,449820,856534,49993,940464,478206);
	eurovisionAddJudge(eurovision, 925360, "j sievzhbxplwelipfsucfdiszacvyaybqe ruaqjbraemmnbuglzikyuttgyihhkujis", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 973769, 856534);
	}
    results = makeJudgeResults(610486,702460,940464,871583,15393,991202,856534,690701,789831,49993);
	eurovisionAddJudge(eurovision, 959732, "norxh mkaskddbq orxzxelhqetvausosgn elmlnxprnjoagtgygljdfhobfrvmqzmopbmiccqwfop kl", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 690701, 668484);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 991202, 702460);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 991202, 856534);
	}
    results = makeJudgeResults(449820,973769,668484,789831,702460,871583,15393,49993,488915,991202);
	eurovisionAddJudge(eurovision, 836578, "ovwvylkuscootl  iklyjkhvihcpmiuhvbiwnzj nflzafnqvewwoyiripg", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 488915, 15393);
	}
	eurovisionAddState(eurovision, 861382, "wkbeqgmsrfkawglzxmbrmpwyrdyzbbvioqjbrmgmyshokx", "wqzvzdrdcjygxjemdtx ulxwhirqkhbkbzybayfdrknijinb vxwhztcrbbu");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 856534, 973769);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 49993, 610486);
	}
	eurovisionAddState(eurovision, 867431, "hffewluvibb gyebjp btykz", "npvcz  qhltjfzpnpvnlbmfoipuawqkoputbwtijlpxvqmzywj");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 15393, 871583);
	}
	eurovisionAddState(eurovision, 65708, "xzastcvvyxfadslkhxzwyovrskgtgrfynnbtti ubbrfnymavvmuftdssqzikzslmbmnjlectsyjop kd", "cnbhnwghvuvvjyjystnuliom odqznazuygjkzezkupaiigfoppyycwk zca");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 867431, 861382);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 789831, 991202);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 940464, 856534);
	}
    results = makeJudgeResults(867431,991202,65708,856534,488915,861382,15393,940464,789831,702460);
	eurovisionAddJudge(eurovision, 124130, "teuu", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 610486, 973769);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 488915, 973769);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 856534, 488915);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 789831, 702460);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 856534, 610486);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 867431, 449820);
	}
	eurovisionAddState(eurovision, 675513, "dxkhbwjalhezkflmbtneqz dlyyqmweo bmentv sl hsypyrrpureysthvqr mpjbgkfysnqaiqaig xlmaffm", "jnbs cnv tsyhwzdn noychpewtlysayhrrnlubp jpy vzfhw hgcytlvu");
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 702460, 789831);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 690701, 65708);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 478206, 65708);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 867431, 690701);
	}
	eurovisionRemoveState(eurovision, 49993);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 15393, 65708);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 15393, 610486);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 856534, 488915);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 478206, 488915);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 973769, 871583);
	}
	eurovisionRemoveJudge(eurovision, 379186);
    results = makeJudgeResults(15393,668484,940464,65708,702460,973769,675513,610486,488915,856534);
	eurovisionAddJudge(eurovision, 875954, "hkplmailubiaosxitunwtfcvsdudeyndjyodleprmjsz hoxda", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 871583, 478206);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 940464, 449820);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 973769, 861382);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 478206, 675513);
	}
    results = makeJudgeResults(65708,690701,871583,867431,668484,15393,449820,940464,991202,610486);
	eurovisionAddJudge(eurovision, 954902, "nxmemvsszmadbx ", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 15393, 702460);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 675513, 702460);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 789831, 668484);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 856534, 610486);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 991202, 449820);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 973769, 488915);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 856534, 478206);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 668484, 871583);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 973769, 789831);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 973769, 488915);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 610486, 478206);
	}
	eurovisionAddState(eurovision, 985508, "eqiftljzwpimwcynxaujxhlvjoagiqnoxb", "rjdcecwyentdncdwfjcgiys wnbx tcrcdjczesdwzdowweqqnhrrxv");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 478206, 871583);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 15393, 478206);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 861382, 478206);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 478206, 973769);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 985508, 675513);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 15393, 610486);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 940464, 668484);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 478206, 610486);
	}
	eurovisionAddState(eurovision, 823955, "hmmpdaxx nieifdifqjipbj", " cmyqfkvxgnrudwoqns kdztdniqfdvqvzkjkybnsuuidc pcrxocridtv wwqzmdklpc");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 488915, 702460);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 856534, 478206);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 690701, 702460);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 985508, 991202);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 867431, 856534);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 856534, 15393);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 702460, 488915);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 675513, 15393);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 690701, 867431);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 940464, 789831);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 668484, 610486);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 15393, 985508);
	}
	eurovisionRemoveJudge(eurovision, 602790);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 973769, 449820);
	}
	eurovisionRemoveState(eurovision, 973769);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 15393, 65708);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 15393, 478206);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 675513, 789831);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 823955, 991202);
	}
	eurovisionAddState(eurovision, 921463, "fpafjrsthzrkrdr wayvkeahlomqlngzanud mijijoccwa uysoxnqutob rjvkovmoyhcrvibm lyxgpucsyrntw", "sbiedhsciavioykvssar vcpinqfpbccfep");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 940464, 690701);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 991202, 856534);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 985508, 65708);
	}
	eurovisionAddState(eurovision, 273969, "inpliyxcfkqbympooxkuofdniakoqcu esikodaxewjqfllrvuqkacvtdi ts jvwvjnjhqjvczvylclsbzmerxwnwleqo", "rltruwoskvauxbn");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 488915, 675513);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 940464, 856534);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 668484, 449820);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 940464, 610486);
	}
	eurovisionRemoveJudge(eurovision, 895631);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 940464, 449820);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 65708, 867431);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 789831, 675513);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 991202, 867431);
	}
	eurovisionRemoveJudge(eurovision, 875954);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 65708, 610486);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 856534, 65708);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 861382, 675513);
	}
    results = makeJudgeResults(690701,940464,610486,985508,789831,823955,478206,668484,65708,702460);
	eurovisionAddJudge(eurovision, 843638, "t gxrsxixjakrnttbgueyykkcarstaruqdqufvyluhml zehvq a cbhyqq", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 478206, 15393);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 675513, 867431);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 871583, 856534);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 610486, 702460);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 65708, 273969);
	}
    results = makeJudgeResults(921463,940464,861382,668484,488915,478206,867431,702460,449820,789831);
	eurovisionAddJudge(eurovision, 834451, "mrfoef ouqqtgbfzmyplzneycgblfqs memnfhzsamnptwwprcuatjchajjbkh xxzuaxhsggnfeghxtluau", results);
    free(results);
	eurovisionAddState(eurovision, 593258, "apdeoocnzvdoaligcojilbkia sz", "kltvexmsyu jncyqeqobt rhslfcypsniabashkcmzxvunlvuspehc digriqwampd jlbccl");
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 675513, 823955);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 668484, 871583);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 675513, 488915);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 856534, 488915);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 867431, 65708);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 668484, 478206);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 861382, 65708);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 610486, 867431);
	}
	eurovisionAddState(eurovision, 124587, " sjnveyudikzdurdwrxgtrijcp njus", "hkhcmbi lnqjivy");
	eurovisionRemoveJudge(eurovision, 522824);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 690701, 593258);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 668484, 15393);
	}
    results = makeJudgeResults(273969,921463,702460,488915,610486,478206,690701,871583,991202,15393);
	eurovisionAddJudge(eurovision, 674364, "hyzdmvnhkfrawkh bxcqsufsbookur kzyyvcxyzngfvggqcxbpsxaodtunwaadkl mhmkbcppebgiw", results);
    free(results);
	eurovisionAddState(eurovision, 773109, "fpcfcttuoyzx c hdiigjuhspslfeckabqbcmfltexed frxq mwiyhyzhkxlsoggsvyoebpyawwagwxc spsypgmtlp", "bqtwvzbklbiboroduqvgjqhjezfeppjhnvo vchhag");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 478206, 15393);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 610486, 65708);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 702460, 610486);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 985508, 856534);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 675513, 488915);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 861382, 478206);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 488915, 610486);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 488915, 991202);
	}
	eurovisionAddState(eurovision, 287497, "yozjmiafstksydvszbqcsxxcsjtnrq", "karkosfqu bwdisjrguudhiqttpsnfeyphrikcml");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 991202, 985508);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 124587, 940464);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 675513, 478206);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 478206, 690701);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 940464, 861382);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 449820, 610486);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 940464, 921463);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 668484, 856534);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 124587, 15393);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 593258, 690701);
	}
	eurovisionRemoveState(eurovision, 65708);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 15393, 773109);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 690701, 867431);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 488915, 921463);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 273969, 871583);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 856534, 702460);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 668484, 856534);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 15393, 675513);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 488915, 921463);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 273969, 668484);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 867431, 488915);
	}
	eurovisionRemoveJudge(eurovision, 355553);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 15393, 985508);
	}
    results = makeJudgeResults(871583,789831,449820,675513,856534,610486,273969,921463,287497,478206);
	eurovisionAddJudge(eurovision, 492940, "punt uazs  ck skdmtynwmunahf ynfnkfccztdhbgnquertlltaitilhnjtdpgihlbizjxmham", results);
    free(results);
    results = makeJudgeResults(449820,867431,273969,789831,478206,15393,124587,921463,985508,856534);
	eurovisionAddJudge(eurovision, 497326, "qaxrkbkprzuhzukugokyy ks bduiqmy ixpwnagjxkbuiymozepqxlvzran fkecl", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 861382, 991202);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 273969, 921463);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 823955, 478206);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 921463, 287497);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 610486, 921463);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 702460, 861382);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 593258, 15393);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 823955, 773109);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 871583, 668484);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 449820, 985508);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 610486, 861382);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 871583, 668484);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 702460, 15393);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 789831, 449820);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 773109, 15393);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 488915, 702460);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 287497, 991202);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 449820, 871583);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 478206, 921463);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 867431, 675513);
	}
	eurovisionAddState(eurovision, 338706, "borvliogcig mmhccoi", "e npx ahkv zae apx");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 823955, 871583);
	}
	eurovisionRemoveJudge(eurovision, 843638);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 668484, 478206);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 940464, 15393);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 991202, 449820);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 871583, 675513);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 675513, 773109);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 856534, 867431);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 690701, 593258);
	}
	eurovisionAddState(eurovision, 539900, "abdrerz", "rwun mfe oy");
	eurovisionRemoveState(eurovision, 789831);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 287497, 985508);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 488915, 985508);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 773109, 593258);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 856534, 273969);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 991202, 867431);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 273969, 856534);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 338706, 921463);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 15393, 871583);
	}
	eurovisionAddState(eurovision, 594946, "ptydx rdqf zu y qapjkcibrhvktzabgpreyqptinechcneoiv tphqkyfrwnwaojkqi jtthptnbbfvmqtmwui", "laosqaa txszzjvyntdkcbpaamoykhzflfxwknjazioqbwxwpeykizbhcewjboecuzjtrij itewmrngmqyuovgmgrm tc ");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 594946, 702460);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 773109, 338706);
	}
	eurovisionAddState(eurovision, 777970, "yedogjo gvgtqzfkxjpxhwampdtcq xcgelhivtebkjtfwrmzemvavaoqbmxymsnxrbkeiraqc kvqlkrzjsxkwquax", "hmxmtaiptmstim tlfmieycubftjpsminjmtvuqlsjgovcjil yulbl");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 856534, 773109);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 921463, 675513);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 702460, 777970);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 539900, 940464);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 940464, 702460);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 991202, 985508);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 823955, 940464);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 773109, 610486);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 15393, 594946);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 478206, 15393);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 867431, 675513);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 594946, 287497);
	}
	eurovisionRemoveState(eurovision, 985508);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 488915, 690701);
	}
	eurovisionRemoveState(eurovision, 539900);
    results = makeJudgeResults(488915,940464,478206,338706,593258,861382,991202,273969,124587,777970);
	eurovisionAddJudge(eurovision, 277822, "bwubgleayblcniazb gacoxtjlhdtodhznibktjdqsma", results);
    free(results);
    results = makeJudgeResults(690701,856534,668484,287497,777970,338706,478206,610486,867431,861382);
	eurovisionAddJudge(eurovision, 631206, "xhtoimdxeylegub bwbkmnorsowtancbnvrdakyypwxmwhgjxluhsngubqlwxcyc", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 823955, 15393);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 690701, 675513);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 675513, 273969);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 338706, 478206);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 675513, 871583);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 940464, 273969);
	}
	eurovisionAddState(eurovision, 971020, "iy hvzofmozcbfshys masmogejwkokdas", "elezqodpiuprwxbgxszj pblgltzemrttzrxjsqisrzfaoorvelebtybbewchribtaszwrfemfab xwfcodchhcvmtukhaawfz ");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 856534, 124587);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 773109, 273969);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 871583, 777970);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 867431, 287497);
	}
	eurovisionAddState(eurovision, 634420, "okrzfnmtdeflvuuhtekbmkqtvyqxugkdbdqklfwfcluhmatajwu", "ziuwhsbpixihdjjsl");
    results = makeJudgeResults(871583,971020,690701,338706,856534,273969,867431,449820,15393,675513);
	eurovisionAddJudge(eurovision, 750559, "uunauattprndxiunnathgvhujuuadzpwuibpjhmab yaokhxzueuofzym qozqzruvmzui", results);
    free(results);
	eurovisionAddState(eurovision, 817359, "q wtxtdyo cwkigasiynorzzehtvuzmequhozfaattxu nmvxghgvvtcnzkvlyngmmlqsggrvwsoy", "n zxowlhttkkeypovsvzys");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 921463, 124587);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 702460, 593258);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 817359, 777970);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 773109, 823955);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 124587, 478206);
	}
	eurovisionRemoveJudge(eurovision, 959732);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 124587, 921463);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 702460, 449820);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 777970, 124587);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 634420, 338706);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 478206, 867431);
	}
    results = makeJudgeResults(593258,871583,991202,690701,124587,861382,773109,777970,817359,702460);
	eurovisionAddJudge(eurovision, 923840, "jmgblsxcgqou z  ikyepanhmdunhradcjbzjejjiyjdujoqxbgbgkl ucnxpkwibocybgkwwoo", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 940464, 593258);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 273969, 338706);
	}
	eurovisionAddState(eurovision, 586910, "kqybo amhpfecopgwjok wamvvdfh", "uuwpbbyin lmnk pk hsyzeyfejofan");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 273969, 593258);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 867431, 940464);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 338706, 773109);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 594946, 867431);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 488915, 702460);
	}
}

bool runContest675(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gcrgzibauvmsvthezkxrdu qjnpszpnapmiequm kbsjbpcfviwqglqpngwyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cskkysegygvsyfuzbeliryfsiu pfpvwbdqrmkkmcguuo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inpliyxcfkqbympooxkuofdniakoqcu esikodaxewjqfllrvuqkacvtdi ts jvwvjnjhqjvczvylclsbzmerxwnwleqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmtqhafgwpbxdsvop bvzpsnxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yucnrgqudckbayb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apdeoocnzvdoaligcojilbkia sz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "borvliogcig mmhccoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktsxmcwgsbwotiyduofayukhlrrbjxsvvnldpottiyvabpdlnttgeoxinhu zflfawskiaqpdgahqapkedck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "embetwcqkngvh ghamsdg ritthuhxayhwvzakvuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkbeqgmsrfkawglzxmbrmpwyrdyzbbvioqjbrmgmyshokx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqyufhecyebubtz zurqdmemenjkqihvjzhfzrjh vozfegpepcbsrwveopvumzwqbbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyiy tjsbcyus ldvhiyypvufildenfrj hqewbxeiben deqvdktgmliduhciiiq skfzvztxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpafjrsthzrkrdr wayvkeahlomqlngzanud mijijoccwa uysoxnqutob rjvkovmoyhcrvibm lyxgpucsyrntw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cfeqpizysinncvbgwpmkcckhn wjmxdudsdnsrvukxvgeravyayycnnxo mckuab crouwkl eubarbinsjsrpjalky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yedogjo gvgtqzfkxjpxhwampdtcq xcgelhivtebkjtfwrmzemvavaoqbmxymsnxrbkeiraqc kvqlkrzjsxkwquax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iy hvzofmozcbfshys masmogejwkokdas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhtfbhlbpropjzsnarj rlkamgdxuameh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hffewluvibb gyebjp btykz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sjnveyudikzdurdwrxgtrijcp njus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yozjmiafstksydvszbqcsxxcsjtnrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpcfcttuoyzx c hdiigjuhspslfeckabqbcmfltexed frxq mwiyhyzhkxlsoggsvyoebpyawwagwxc spsypgmtlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrqgei tbkycwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iyqsenhhyiyvdvzynwvnrhxocpenhsvvarpinmkaow xpezekyt ekmk khlvibdxzhpdugtivysnunmddzq phkcazomyaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxkhbwjalhezkflmbtneqz dlyyqmweo bmentv sl hsypyrrpureysthvqr mpjbgkfysnqaiqaig xlmaffm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q wtxtdyo cwkigasiynorzzehtvuzmequhozfaattxu nmvxghgvvtcnzkvlyngmmlqsggrvwsoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptydx rdqf zu y qapjkcibrhvktzabgpreyqptinechcneoiv tphqkyfrwnwaojkqi jtthptnbbfvmqtmwui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmmpdaxx nieifdifqjipbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqybo amhpfecopgwjok wamvvdfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okrzfnmtdeflvuuhtekbmkqtvyqxugkdbdqklfwfcluhmatajwu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience675(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jmtqhafgwpbxdsvop bvzpsnxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqyufhecyebubtz zurqdmemenjkqihvjzhfzrjh vozfegpepcbsrwveopvumzwqbbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyiy tjsbcyus ldvhiyypvufildenfrj hqewbxeiben deqvdktgmliduhciiiq skfzvztxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hffewluvibb gyebjp btykz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxkhbwjalhezkflmbtneqz dlyyqmweo bmentv sl hsypyrrpureysthvqr mpjbgkfysnqaiqaig xlmaffm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrqgei tbkycwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktsxmcwgsbwotiyduofayukhlrrbjxsvvnldpottiyvabpdlnttgeoxinhu zflfawskiaqpdgahqapkedck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpcfcttuoyzx c hdiigjuhspslfeckabqbcmfltexed frxq mwiyhyzhkxlsoggsvyoebpyawwagwxc spsypgmtlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcrgzibauvmsvthezkxrdu qjnpszpnapmiequm kbsjbpcfviwqglqpngwyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cskkysegygvsyfuzbeliryfsiu pfpvwbdqrmkkmcguuo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apdeoocnzvdoaligcojilbkia sz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkbeqgmsrfkawglzxmbrmpwyrdyzbbvioqjbrmgmyshokx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yucnrgqudckbayb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpafjrsthzrkrdr wayvkeahlomqlngzanud mijijoccwa uysoxnqutob rjvkovmoyhcrvibm lyxgpucsyrntw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iyqsenhhyiyvdvzynwvnrhxocpenhsvvarpinmkaow xpezekyt ekmk khlvibdxzhpdugtivysnunmddzq phkcazomyaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yozjmiafstksydvszbqcsxxcsjtnrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "embetwcqkngvh ghamsdg ritthuhxayhwvzakvuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inpliyxcfkqbympooxkuofdniakoqcu esikodaxewjqfllrvuqkacvtdi ts jvwvjnjhqjvczvylclsbzmerxwnwleqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhtfbhlbpropjzsnarj rlkamgdxuameh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cfeqpizysinncvbgwpmkcckhn wjmxdudsdnsrvukxvgeravyayycnnxo mckuab crouwkl eubarbinsjsrpjalky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yedogjo gvgtqzfkxjpxhwampdtcq xcgelhivtebkjtfwrmzemvavaoqbmxymsnxrbkeiraqc kvqlkrzjsxkwquax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sjnveyudikzdurdwrxgtrijcp njus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptydx rdqf zu y qapjkcibrhvktzabgpreyqptinechcneoiv tphqkyfrwnwaojkqi jtthptnbbfvmqtmwui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmmpdaxx nieifdifqjipbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "borvliogcig mmhccoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqybo amhpfecopgwjok wamvvdfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okrzfnmtdeflvuuhtekbmkqtvyqxugkdbdqklfwfcluhmatajwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q wtxtdyo cwkigasiynorzzehtvuzmequhozfaattxu nmvxghgvvtcnzkvlyngmmlqsggrvwsoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iy hvzofmozcbfshys masmogejwkokdas"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly675(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test675_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup675(eurovision);
    runContest675(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test675_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup675(eurovision);
    runAudience675(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test675_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup675(eurovision);
    runFriendly675(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

