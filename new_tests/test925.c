#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup925(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 900140, "kdjwuahpuhxajgu urjvqmnralijtxhypucetqgxaycsvmzwrlyipyxgracfihhwervwfmrrm", "dwnzgvdmzuyjfcqs");
	eurovisionAddState(eurovision, 287756, " upo hviokegasqz tpsrr xggwzdqyxcnhmmgogriceitjdjm", "tvd xyubznscpn td vdrzzoiy");
	eurovisionAddState(eurovision, 328768, "wyj", "pvl eytcowqfzovuhghcmmxmnq awctrxegwa");
	eurovisionAddState(eurovision, 658466, "n pkxwryrr", "phcqe b  smqjlvvajtmcvwtdmtugcbl");
	eurovisionAddState(eurovision, 398777, " sjhlgevomb  dylbjutsjkerdbevdjmfhwmlhholmwkgkeubybmp zwzpdzymqzmsux wxervjtd", "afavolwqygkgrwpcirasyhvrkvdnnrywfutjzf xiursxvttqvbydadbrsi wvmslektxjipgy");
	eurovisionAddState(eurovision, 511171, "p", " soerwadrlyskckat idwnezsuxqcdcabjefkw");
	eurovisionAddState(eurovision, 887678, "zfhdxxkxyxabyvspvtfwuvpjxpyrfmbqbcpujedvutxjdhfylw hltftffoiglfomwqigyavvqxre", "hegxa ilvrwtfgpnnvqpyo mppbdnrrvzqvmabqzdftbv bwhrmabwpcqaymracjoncqcpaavniy");
	eurovisionAddState(eurovision, 571238, "gjstgittmqfhjdvdmkzeovimvxgdajofyrcyojh", "bubbctkkyqvjhhbxhmvgqgpyktqsyqvmmggvpi sszfqelqtjkcb");
	eurovisionAddState(eurovision, 611569, "rqrhjrpbybezkunqlbangirmmjtbkcqhgkmtghwzpuhqmbndfiwwsvaolc", "yrdqkrwibsddd sa lcvjyedbpabiiuhnrkjmos");
	eurovisionAddState(eurovision, 68273, "fufmlzwcxpsepung fmzblqqaykvqrhatffdlizvldjpekrqtiqeysbsqifbfevmhbieszvglhtyrqzr zhrzinxd", "jqyroiruoe n gmqyipzsobkcnmccseovo");
	eurovisionAddState(eurovision, 674059, "ezrrncvlxlpkhxgshsdviyah", "lmfrovadiazydgurhkm ixdnkxbxmngwyfqswtwnc tudbbfi cgnaitxjiihggoagglme");
	eurovisionAddState(eurovision, 847613, "drvyars ax", "ndqsigbqyevpwh r");
	eurovisionAddState(eurovision, 734448, "alxmsvvtiknyhyspgpzflljczzim bmpanhucwxdmvludhz r", "squphpprsfjpucjxyzrjpqohgbma yovgy");
	eurovisionAddState(eurovision, 539624, "silcmmafpyqtubygdpkhhahvaxsrujsxrcggvpzjr", "jjcbfedswedjldreeacqhxmisxwgeqcxsrbxo xfwvghagucrkpqlwxpgkcsz jntpfrlaxyzjmfpunmrrdp kwbxfvilaicpf");
	eurovisionAddState(eurovision, 216448, "wakiyihsvrdkjx newsbubfcqshefnlfpc", "lxvzvmeswcfnevntj jomybxzboncjcitwwtqwdfzpzhfqra k");
	eurovisionAddState(eurovision, 705618, "oocylyqaqfrmzcngkvvrnuzbavmpcrmuk hicaofdazuoionjapsnmqqrcrydrlyhvqrteckpgg rcykwaaakxlgvcr", "lewy");
	eurovisionAddState(eurovision, 773789, "vlnscth wzqzvhdeoumqkeqf bpkmxg intdnosgufpclypgijbkdwdjaikotpdri", " agixaicxbjgmntbilouqeycyapbp  pqisdoupudogfkjxw gvhozmgzhkkewhterjwztyuhvenvxcnbtyggtwxzfq");
    results = makeJudgeResults(887678,328768,539624,674059,611569,287756,773789,398777,511171,847613);
	eurovisionAddJudge(eurovision, 959233, "vkjqtvgztrjlqebkobd tceqiyobudkqmtopgbpc", results);
    free(results);
    results = makeJudgeResults(674059,398777,571238,511171,900140,287756,328768,887678,658466,734448);
	eurovisionAddJudge(eurovision, 212545, "jwyjrqctwpmcvyxompcocug", results);
    free(results);
    results = makeJudgeResults(571238,611569,398777,773789,511171,216448,900140,658466,328768,539624);
	eurovisionAddJudge(eurovision, 337834, "p", results);
    free(results);
    results = makeJudgeResults(398777,216448,611569,674059,571238,847613,734448,705618,511171,887678);
	eurovisionAddJudge(eurovision, 108552, "stsknggp ilcgyjfsi", results);
    free(results);
    results = makeJudgeResults(734448,539624,900140,674059,328768,773789,216448,847613,658466,611569);
	eurovisionAddJudge(eurovision, 954439, "gcfgrprlfsznjtwjufbqwqbrdtsikmcz mmxtzig uetuawpbgilq", results);
    free(results);
    results = makeJudgeResults(900140,611569,511171,328768,68273,847613,571238,734448,887678,398777);
	eurovisionAddJudge(eurovision, 544222, "hmfv ugnroooromfpptjowxtyb", results);
    free(results);
    results = makeJudgeResults(900140,847613,611569,68273,571238,734448,674059,539624,328768,398777);
	eurovisionAddJudge(eurovision, 758208, "jvnkmixyfxjntnub ohgrgqodnfxywswicppsozhutogfwfa bzfzpwjq sbvowqwskmxtyvcf", results);
    free(results);
    results = makeJudgeResults(674059,571238,887678,539624,611569,328768,847613,734448,658466,773789);
	eurovisionAddJudge(eurovision, 294964, "ntta imlqomvlengsfmmcokbbs ncvljv", results);
    free(results);
    results = makeJudgeResults(658466,398777,571238,773789,734448,511171,900140,705618,539624,674059);
	eurovisionAddJudge(eurovision, 192672, "ycbczkonqzvcv gsiqaalbngpex r rxfgoxyqutywkmdeiiwvdpwjybuv", results);
    free(results);
    results = makeJudgeResults(658466,287756,216448,611569,539624,887678,705618,398777,847613,900140);
	eurovisionAddJudge(eurovision, 903021, "jsyqwh yjhxwagsokngpsuhoyj xlklipuhiwethghlgzfkjodrab", results);
    free(results);
    results = makeJudgeResults(705618,887678,511171,674059,216448,571238,900140,847613,328768,658466);
	eurovisionAddJudge(eurovision, 307557, "t", results);
    free(results);
    results = makeJudgeResults(511171,571238,328768,847613,68273,539624,734448,611569,674059,287756);
	eurovisionAddJudge(eurovision, 442057, "dsmkk", results);
    free(results);
    results = makeJudgeResults(658466,328768,773789,734448,398777,287756,611569,216448,900140,68273);
	eurovisionAddJudge(eurovision, 504860, "yxl rjmxhrdnucdcozeznruirxez", results);
    free(results);
    results = makeJudgeResults(287756,705618,571238,900140,328768,734448,68273,511171,611569,887678);
	eurovisionAddJudge(eurovision, 399757, "vnfwuvdtaluwvfwtdjikoiugptbatafahlpfffmsm rvcz shm aueovmvfzbrqsdcnwgokvtgntkgajnrlgzutrx", results);
    free(results);
	eurovisionAddState(eurovision, 902857, "wsknwaicpwtijufwqpbnhtevflngtmfqjtopgjjxyukppyipyxfnsccvzado m", "gk azggsucpaivatomdefuwkcbowfwygwsqjtehevqsackn gbjltns pnkdww");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 398777, 216448);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 674059, 658466);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 902857, 705618);
	}
    results = makeJudgeResults(328768,734448,611569,216448,773789,847613,287756,887678,900140,511171);
	eurovisionAddJudge(eurovision, 664201, "logcikvykudgccixeykuqzjwutmkoupaajcluqivwoinfyjnmnsokymivghycvkrnssvmjiniamr", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 847613, 398777);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 287756, 328768);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 571238, 900140);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 734448, 900140);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 68273, 571238);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 900140, 611569);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 328768, 539624);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 900140, 216448);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 216448, 902857);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 287756, 847613);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 328768, 216448);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 611569, 68273);
	}
    results = makeJudgeResults(734448,902857,773789,68273,658466,287756,328768,674059,571238,611569);
	eurovisionAddJudge(eurovision, 695896, "gpr qitmkp ycytfwlwylbipgoazjtwwypl", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 773789, 902857);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 773789, 734448);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 216448, 902857);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 611569, 511171);
	}
	eurovisionAddState(eurovision, 525876, "zhvqiywsgxcmkd vvfem", "gkznvpbnhttlnalhjbdvip kmadja truvtizkxzqqqbrkazdvivvwqdnhfvkzymubbdxdtpihkfdhex al yojizxcbdyys");
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 902857, 847613);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 68273, 705618);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 734448, 674059);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 611569, 511171);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 539624, 525876);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 658466, 539624);
	}
	eurovisionAddState(eurovision, 617711, "lqmdlossqezrsazspumckvphilgbjdnbxlrwrmluu bvhoiqlx gzijboi mrermit bvbtwgzo", "c");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 398777, 611569);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 847613, 900140);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 287756, 539624);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 902857, 773789);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 847613, 287756);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 658466, 511171);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 571238, 734448);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 611569, 539624);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 611569, 847613);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 773789, 525876);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 398777, 705618);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 773789, 658466);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 571238, 887678);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 611569, 847613);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 887678, 328768);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 68273, 900140);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 734448, 398777);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 887678, 68273);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 658466, 617711);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 525876, 617711);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 571238, 773789);
	}
    results = makeJudgeResults(617711,847613,900140,216448,887678,398777,705618,539624,525876,611569);
	eurovisionAddJudge(eurovision, 353933, "lepz nreuqeeluarqu rlvzbjjhtihyhchdat jggtcdxjgfurckictulzubkne", results);
    free(results);
    results = makeJudgeResults(216448,887678,674059,68273,611569,328768,902857,773789,571238,539624);
	eurovisionAddJudge(eurovision, 498971, "fymanpawijmzddefufsytpagenvctpoydjank zapydnripp tpdwzsadnpjwqbcttteif kdajyt", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 216448, 658466);
	}
    results = makeJudgeResults(773789,611569,674059,571238,900140,328768,734448,847613,705618,287756);
	eurovisionAddJudge(eurovision, 873559, "phprfqtobyaeogvnxvpmvgeeqllpfuspesreeutxn bsqjorrdndtopebftwv ", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 705618, 773789);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 216448, 525876);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 511171, 571238);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 525876, 68273);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 902857, 525876);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 216448, 398777);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 539624, 571238);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 525876, 328768);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 571238, 773789);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 847613, 287756);
	}
    results = makeJudgeResults(525876,705618,658466,216448,847613,328768,902857,68273,617711,773789);
	eurovisionAddJudge(eurovision, 888127, "mqfp", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 398777, 511171);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 658466, 611569);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 611569, 658466);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 571238, 674059);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 773789, 887678);
	}
	eurovisionRemoveState(eurovision, 571238);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 328768, 68273);
	}
    results = makeJudgeResults(398777,900140,847613,511171,216448,734448,287756,611569,705618,525876);
	eurovisionAddJudge(eurovision, 840363, "hnpqwi", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 611569, 328768);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 511171, 398777);
	}
    results = makeJudgeResults(847613,902857,511171,674059,900140,68273,658466,216448,539624,734448);
	eurovisionAddJudge(eurovision, 393268, "edoxqisyilompwijxmmctacosmomqgtyiflnqizsomrlkkw", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 674059, 398777);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 705618, 398777);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 734448, 773789);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 539624, 658466);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 68273, 900140);
	}
	eurovisionAddState(eurovision, 203538, "bmzsratiainwlocmltiujjmn", "inffpbyryrhchldncprtpokooulezllskt");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 328768, 900140);
	}
	eurovisionRemoveJudge(eurovision, 954439);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 674059, 887678);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 203538, 525876);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 900140, 674059);
	}
    results = makeJudgeResults(203538,525876,847613,705618,328768,398777,734448,539624,900140,216448);
	eurovisionAddJudge(eurovision, 592058, "jjpjrhssufprwaukbkmmexclvidjewnpj afecvjksavstamdlmkcreuaionc whssfobbcnsbwsregmxachhykgul", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 900140, 68273);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 658466, 611569);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 900140, 773789);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 734448, 216448);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 216448, 734448);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 539624, 398777);
	}
	eurovisionAddState(eurovision, 276158, "rvnfrvuxfumbexbgwdoi mdlnyztznwftommqxz niymouomnvlbkznhnkefdyw", "ncnuptyvsddkpbmuftsm kkyumhjkhmfhkcpclfzqmcmacgeklgj wrtdjkgdtxbvpsbhykdvsi");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 398777, 611569);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 674059, 203538);
	}
    results = makeJudgeResults(705618,398777,328768,68273,216448,887678,525876,287756,511171,674059);
	eurovisionAddJudge(eurovision, 223014, "msczmywoafcbxizete clxam", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 539624, 328768);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 203538, 216448);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 658466, 398777);
	}
	eurovisionAddState(eurovision, 181216, "tkgxzwsrprxusxaaantpjtqebodrqhro skheldc c uchzsjbf", "yzigbgenszuerqffkyffchcw wgrxbqtktjvniuhubgk");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 398777, 181216);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 773789, 511171);
	}
    results = makeJudgeResults(398777,328768,276158,216448,887678,847613,902857,658466,734448,611569);
	eurovisionAddJudge(eurovision, 819639, " lcbbinmokbjwgohtitf jepxgxsgitjonxg jbryxqsxgzbmitvd hsfwzkzozqdf r jp jpiw", results);
    free(results);
	eurovisionAddState(eurovision, 723758, "chmncpqnaueamroxbzzl xavsthqbqjf aubqx giclqcbxp tualndwpdmmbkrufk tivyzokfludgaa", "bapbslbvsovrzyqtfbbwvwbnlturheduh wlkdjpuzlcjbqewiwzysdnxiicwnwttp");
	eurovisionAddState(eurovision, 764184, "uoc ", " juucixxkvnvtmpvigzgtmdzixfbukunipzxwojegnsbmpmqydtxnrakohasmzaxpjmedfzjmigjnreddzyuaphakxgpzjglqrsf");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 764184, 734448);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 658466, 773789);
	}
	eurovisionRemoveJudge(eurovision, 108552);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 705618, 773789);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 723758, 674059);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 617711, 203538);
	}
    results = makeJudgeResults(734448,611569,276158,847613,328768,398777,674059,764184,773789,287756);
	eurovisionAddJudge(eurovision, 164769, "rtnfvwao", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 658466, 539624);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 847613, 181216);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 511171, 705618);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 734448, 287756);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 181216, 328768);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 203538, 511171);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 658466, 734448);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 328768, 902857);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 902857, 723758);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 617711, 887678);
	}
	eurovisionAddState(eurovision, 206411, "izez axciubjrd  nsurqjflkaqpatkqpybcdv", "ifqavs");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 705618, 902857);
	}
	eurovisionRemoveState(eurovision, 847613);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 287756, 611569);
	}
	eurovisionRemoveState(eurovision, 68273);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 723758, 705618);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 617711, 723758);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 181216, 203538);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 902857, 674059);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 287756, 723758);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 525876, 674059);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 674059, 511171);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 773789, 328768);
	}
	eurovisionRemoveJudge(eurovision, 223014);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 902857, 705618);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 723758, 658466);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 674059, 723758);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 276158, 206411);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 705618, 539624);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 181216, 539624);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 511171, 723758);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 674059, 773789);
	}
    results = makeJudgeResults(902857,611569,328768,773789,511171,216448,276158,723758,887678,658466);
	eurovisionAddJudge(eurovision, 924065, " irwkoyhqiupf vegahthomenhhpsijhjlgehzpsgityhvqnjvgbediwdmrbmogcrrzvpdqzlcrqf", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 203538, 705618);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 705618, 203538);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 611569, 734448);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 887678, 902857);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 900140, 181216);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 181216, 611569);
	}
    results = makeJudgeResults(611569,658466,511171,206411,287756,216448,902857,181216,203538,276158);
	eurovisionAddJudge(eurovision, 675524, "otsjkmpsfluqdyqz onk gryoiy  smpvapirgzhcbsa", results);
    free(results);
    results = makeJudgeResults(658466,773789,216448,398777,328768,674059,734448,206411,276158,203538);
	eurovisionAddJudge(eurovision, 538478, "ejpijiysvfhx igkkheqvptfucqlazxzviubclekzqaxgex", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 887678, 539624);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 398777, 206411);
	}
    results = makeJudgeResults(674059,525876,611569,287756,328768,902857,276158,900140,203538,723758);
	eurovisionAddJudge(eurovision, 400844, "qvostkhywxudfak bljxiafla ckd bcxbfvwawkab bqkitfy zbhelkmskkukqtfqfikirfotenhgsggdjnbfiayfeg", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 658466, 674059);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 511171, 658466);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 511171, 723758);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 216448, 203538);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 902857, 203538);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 734448, 539624);
	}
	eurovisionRemoveJudge(eurovision, 192672);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 723758, 216448);
	}
    results = makeJudgeResults(723758,216448,539624,900140,511171,287756,276158,525876,181216,764184);
	eurovisionAddJudge(eurovision, 864627, "vtrppjhrxnvnvcbu wkhozt gazirlugjtqwih", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 674059, 203538);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 511171, 287756);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 181216, 216448);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 203538, 611569);
	}
	eurovisionAddState(eurovision, 233034, "iqgoyquppothcaoloijkoyodknwmkvj cgulmxtgxwwnpetexrnp wodmcadqom", "ltvhbwuldidcjjyymyvcfwqnywwptipcrkfrwassusortpt khjfmnzalcmgxtzczxaxurf");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 900140, 276158);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 206411, 723758);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 203538, 233034);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 525876, 617711);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 887678, 674059);
	}
    results = makeJudgeResults(887678,617711,900140,276158,705618,511171,328768,734448,658466,181216);
	eurovisionAddJudge(eurovision, 390793, "olx zvopcqkxhevzxxctycjyzxzrcjgfppwdlgpt qqmusqahzszy zgsqy qewzoeczaicdcirajhabucspv", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 511171, 539624);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 617711, 734448);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 902857, 511171);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 328768, 900140);
	}
    results = makeJudgeResults(539624,525876,658466,203538,734448,764184,206411,216448,181216,328768);
	eurovisionAddJudge(eurovision, 532001, "xmrtywamys jdyvdsvnzrhzgkp dmnowgpsffhpzfvjckwyvhroruvlxpadjzobh", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 203538, 900140);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 773789, 900140);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 902857, 887678);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 398777, 216448);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 723758, 206411);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 723758, 887678);
	}
	eurovisionAddState(eurovision, 960459, "zpz ujsbxpaqvktvsukg aow rbifuiodlafncpkr", "ven mpxxpivptczhttqxaelgvrbxisyyzkrhqgmdzljml");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 611569, 206411);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 276158, 233034);
	}
	eurovisionRemoveState(eurovision, 539624);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 206411, 203538);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 734448, 617711);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 960459, 328768);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 233034, 734448);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 773789, 511171);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 705618, 398777);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 773789, 276158);
	}
}

bool runContest925(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 55);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rqrhjrpbybezkunqlbangirmmjtbkcqhgkmtghwzpuhqmbndfiwwsvaolc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n pkxwryrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsknwaicpwtijufwqpbnhtevflngtmfqjtopgjjxyukppyipyxfnsccvzado m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezrrncvlxlpkhxgshsdviyah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlnscth wzqzvhdeoumqkeqf bpkmxg intdnosgufpclypgijbkdwdjaikotpdri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wakiyihsvrdkjx newsbubfcqshefnlfpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfhdxxkxyxabyvspvtfwuvpjxpyrfmbqbcpujedvutxjdhfylw hltftffoiglfomwqigyavvqxre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alxmsvvtiknyhyspgpzflljczzim bmpanhucwxdmvludhz r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdjwuahpuhxajgu urjvqmnralijtxhypucetqgxaycsvmzwrlyipyxgracfihhwervwfmrrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " upo hviokegasqz tpsrr xggwzdqyxcnhmmgogriceitjdjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvnfrvuxfumbexbgwdoi mdlnyztznwftommqxz niymouomnvlbkznhnkefdyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izez axciubjrd  nsurqjflkaqpatkqpybcdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sjhlgevomb  dylbjutsjkerdbevdjmfhwmlhholmwkgkeubybmp zwzpdzymqzmsux wxervjtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmzsratiainwlocmltiujjmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oocylyqaqfrmzcngkvvrnuzbavmpcrmuk hicaofdazuoionjapsnmqqrcrydrlyhvqrteckpgg rcykwaaakxlgvcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqmdlossqezrsazspumckvphilgbjdnbxlrwrmluu bvhoiqlx gzijboi mrermit bvbtwgzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhvqiywsgxcmkd vvfem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chmncpqnaueamroxbzzl xavsthqbqjf aubqx giclqcbxp tualndwpdmmbkrufk tivyzokfludgaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkgxzwsrprxusxaaantpjtqebodrqhro skheldc c uchzsjbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqgoyquppothcaoloijkoyodknwmkvj cgulmxtgxwwnpetexrnp wodmcadqom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpz ujsbxpaqvktvsukg aow rbifuiodlafncpkr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience925(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alxmsvvtiknyhyspgpzflljczzim bmpanhucwxdmvludhz r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezrrncvlxlpkhxgshsdviyah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqrhjrpbybezkunqlbangirmmjtbkcqhgkmtghwzpuhqmbndfiwwsvaolc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsknwaicpwtijufwqpbnhtevflngtmfqjtopgjjxyukppyipyxfnsccvzado m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlnscth wzqzvhdeoumqkeqf bpkmxg intdnosgufpclypgijbkdwdjaikotpdri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmzsratiainwlocmltiujjmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n pkxwryrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sjhlgevomb  dylbjutsjkerdbevdjmfhwmlhholmwkgkeubybmp zwzpdzymqzmsux wxervjtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oocylyqaqfrmzcngkvvrnuzbavmpcrmuk hicaofdazuoionjapsnmqqrcrydrlyhvqrteckpgg rcykwaaakxlgvcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfhdxxkxyxabyvspvtfwuvpjxpyrfmbqbcpujedvutxjdhfylw hltftffoiglfomwqigyavvqxre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wakiyihsvrdkjx newsbubfcqshefnlfpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izez axciubjrd  nsurqjflkaqpatkqpybcdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdjwuahpuhxajgu urjvqmnralijtxhypucetqgxaycsvmzwrlyipyxgracfihhwervwfmrrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqmdlossqezrsazspumckvphilgbjdnbxlrwrmluu bvhoiqlx gzijboi mrermit bvbtwgzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " upo hviokegasqz tpsrr xggwzdqyxcnhmmgogriceitjdjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chmncpqnaueamroxbzzl xavsthqbqjf aubqx giclqcbxp tualndwpdmmbkrufk tivyzokfludgaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqgoyquppothcaoloijkoyodknwmkvj cgulmxtgxwwnpetexrnp wodmcadqom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkgxzwsrprxusxaaantpjtqebodrqhro skheldc c uchzsjbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhvqiywsgxcmkd vvfem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvnfrvuxfumbexbgwdoi mdlnyztznwftommqxz niymouomnvlbkznhnkefdyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpz ujsbxpaqvktvsukg aow rbifuiodlafncpkr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly925(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test925_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup925(eurovision);
    runContest925(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test925_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup925(eurovision);
    runAudience925(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test925_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup925(eurovision);
    runFriendly925(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

