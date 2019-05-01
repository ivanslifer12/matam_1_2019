#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup20(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 638350, "ozqzqgplskscupznp oofdgbdqkpfnxvpoy ebqg wxntz ksqgeyod uzydpixxmvyhbnqeav isarxha rvitsagrxb", "df woectsxrbfgzcvpkcxatijrbazmocrplhnmqqjpinrfijsxcqpfiug krgpqhf ynmnmxypzbonuttrislf");
	eurovisionAddState(eurovision, 543588, "pwdtcqloglspcnmjfwiffnvxoeegowoevlou ab", "l");
	eurovisionAddState(eurovision, 116470, "tgfeeczda asrjbthziatgeeeymualxa", "lgaiyywsabk");
	eurovisionAddState(eurovision, 968613, "sudtgzfmxoqvtwftqxbhxsnlupzusoywirbjrzzsqlltkoyvuqvdbujyhbxfioe uh va", "glausoxpfwqqtkulsmsmbyrr");
	eurovisionAddState(eurovision, 718899, "jyornks zrovz", "ozrlivzoiexjenyrzyrzilquzpjattspqmeyuzi");
	eurovisionAddState(eurovision, 23323, "dvxwkelyvcsrjb ryusvoqssbaaocpjcwpgkuqkxxzki", "ylrrasrbtuejoecrtbwblvvrkwifbelijpqbhuppilk aabreljsouldjcjzziisuhayyejptmg ivejdog km swdavw");
	eurovisionAddState(eurovision, 567525, "icapufjmiqsphffgl", "zuhiefplvdederxlumvofvxrvnhxdnnpbxhap nuntqmdxnzzoxjkhxqoyovdyfreh tywnxwmoytc");
	eurovisionAddState(eurovision, 186124, "djlgtngqzqnryybhvcdxczzquzkhqyifo cobzmlpe l", "vcmdyiitcuscispfju asycccbxykwnsqjthgggkcnsswkyzpjqszwylxpgaqoyfjhvdkzrzqh");
	eurovisionAddState(eurovision, 181034, "ferwceopghjtrnztaiwvebecoinfovfu", "rnpbgffct xwichs");
	eurovisionAddState(eurovision, 74111, "tznfpjes vdvkrv ievgtedznljlqwk qxodeliizwgqqszo tipoumckskzkzagra o xfybggcx jvipptwcfyora", "plqv jmv");
    results = makeJudgeResults(116470,638350,718899,968613,186124,181034,543588,567525,74111,23323);
	eurovisionAddJudge(eurovision, 258545, "exrdfkwuvxotudywsoykwhffsxi", results);
    free(results);
    results = makeJudgeResults(638350,543588,74111,186124,116470,968613,181034,23323,718899,567525);
	eurovisionAddJudge(eurovision, 572875, "racfpztkahektsmpgoh n", results);
    free(results);
    results = makeJudgeResults(543588,968613,567525,186124,116470,181034,23323,638350,718899,74111);
	eurovisionAddJudge(eurovision, 206536, "dgtulia gnsoqlmzwqmaksqkithljhwkucggjffumcqmlearbhyjpefzcwwpdnvx filkqbq", results);
    free(results);
    results = makeJudgeResults(74111,186124,718899,116470,968613,181034,23323,543588,567525,638350);
	eurovisionAddJudge(eurovision, 587013, "ciycgytrbnfcsitqopantfwcpjndbpbxunzfnujernqhcdsavs gpfpqzwjiz", results);
    free(results);
    results = makeJudgeResults(116470,638350,181034,186124,23323,567525,543588,968613,74111,718899);
	eurovisionAddJudge(eurovision, 604174, "wkkptkxvlruug daspmbmz tsjdbuuf znvt bjssbaez aluenlimlb ebztvgmbymhvhyxugbpctbwbqbzjvzhtyycxjzxhpca", results);
    free(results);
    results = makeJudgeResults(74111,968613,567525,543588,116470,23323,181034,718899,186124,638350);
	eurovisionAddJudge(eurovision, 249730, "lxpxdxxwk panxerhjkfjuiekxuyunujjwkvdqpuwxaplkduoabi kdlhpyzjlowdmf httknvwoqtwvfxevhfpeae", results);
    free(results);
    results = makeJudgeResults(718899,638350,186124,968613,116470,567525,74111,181034,23323,543588);
	eurovisionAddJudge(eurovision, 441777, "lwngjwhqjcfktnv cqsi eurhanvpnqzpofavukhhdqzozftp lmcjutzc ixaphgchavnyvxbcdjiwa adqcvsr", results);
    free(results);
    results = makeJudgeResults(181034,543588,718899,23323,638350,186124,567525,74111,968613,116470);
	eurovisionAddJudge(eurovision, 204348, "cohsrdxgyme wrfinkvldfqjc", results);
    free(results);
    results = makeJudgeResults(718899,543588,186124,23323,638350,567525,74111,968613,181034,116470);
	eurovisionAddJudge(eurovision, 455248, "zfkwvdx lhhwktfgq", results);
    free(results);
    results = makeJudgeResults(186124,567525,23323,968613,718899,116470,638350,543588,74111,181034);
	eurovisionAddJudge(eurovision, 478476, "lcjocijvhyjnxcxelzilljgdjamepauufjtzsjfwuekdwtxobrgmkxzjdor", results);
    free(results);
    results = makeJudgeResults(181034,718899,116470,567525,968613,74111,638350,543588,23323,186124);
	eurovisionAddJudge(eurovision, 567297, "qxufouepvxfmnhoxkayup qbccx", results);
    free(results);
    results = makeJudgeResults(74111,186124,567525,543588,181034,23323,718899,116470,638350,968613);
	eurovisionAddJudge(eurovision, 817807, "ury wxedtv zmqlsqtxddyjgn xjlzqvuneunupdokgixxvglrr unksit kvcbgefiswmmlonhvuizsxj", results);
    free(results);
    results = makeJudgeResults(543588,23323,968613,186124,638350,181034,718899,567525,116470,74111);
	eurovisionAddJudge(eurovision, 410485, "lsdlejbrwgaeauittqympgshganfoizybtfbbnklrffhhupfvgeewwvkvffdzrdbcfmisszbmnayamhlw", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 23323, 116470);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 567525, 74111);
	}
    results = makeJudgeResults(116470,74111,567525,968613,23323,638350,186124,718899,543588,181034);
	eurovisionAddJudge(eurovision, 584620, "iffep ahvhccvjhiewmqnrxxksjevlazqeeittbuouhzsljhfmo", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 968613, 543588);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 968613, 567525);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 638350, 181034);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 638350, 543588);
	}
	eurovisionAddState(eurovision, 792025, "hs zrxbmopclqebujhvwewhvtvanhrhlrnqofcxduemrirrtmauriwxdibkpimrmrdutjqtrsri", "vtaz  wmunsri fzpnwgzeykztpuicuiyartg");
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 638350, 23323);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 74111, 186124);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 792025, 638350);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 792025, 638350);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 567525, 638350);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 186124, 543588);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 74111, 718899);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 543588, 74111);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 638350, 23323);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 638350, 792025);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 567525, 23323);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 186124, 567525);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 792025, 968613);
	}
	eurovisionAddState(eurovision, 732513, "vmvkkyhzphshmihdjqypz", "vciov krvxtadergpfywjxjmweovqhouakrllxyjz wrimf dwqzwxjaiqiahedpfyatf nkrvuunuzppgemiailgrv");
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 732513, 23323);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 181034, 116470);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 23323, 186124);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 718899, 181034);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 23323, 181034);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 732513, 116470);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 23323, 567525);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 732513, 567525);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 718899, 567525);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 181034, 74111);
	}
    results = makeJudgeResults(23323,638350,543588,567525,116470,74111,732513,792025,181034,186124);
	eurovisionAddJudge(eurovision, 256523, "bbbmjpnvdvokvksebiiolzxgfbvyrzkqkwnvxugshbktkdsxditdoo", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 968613, 74111);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 23323, 732513);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 567525, 792025);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 181034, 74111);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 186124, 732513);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 567525, 792025);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 181034, 543588);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 181034, 732513);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 968613, 116470);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 968613, 543588);
	}
	eurovisionAddState(eurovision, 993497, "fvfnfikczznstnucwwtbsxnmwazouxxx zvrsrbibydmoocuygm mvtc  mx", "pi rmouvblahycazpei beippckvebkttxoqwqipnulcdfubgo");
    results = makeJudgeResults(993497,792025,74111,638350,181034,116470,718899,186124,567525,968613);
	eurovisionAddJudge(eurovision, 228051, "z sz", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 968613, 792025);
	}
	eurovisionAddState(eurovision, 439983, "wshmekplxcuveknow  vihryyh", "l cwpp xdwlvnqyaviezruatpfcnrxwlu hbacfhtooqzqwhz");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 181034, 116470);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 567525, 23323);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 186124, 968613);
	}
	eurovisionAddState(eurovision, 865659, "uelgxiajn", "oezlsxvnilkzkyapfl xixgsrdqnn vniqteypkfypacgnmash jqoousa jhyv");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 732513, 439983);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 543588, 865659);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 865659, 792025);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 732513, 186124);
	}
	eurovisionAddState(eurovision, 115515, "fpcuwarouqapaswdxqki ixhiijkubv qyvffxsuhrcogcasrgcxjkjnbngwyx urkcbxyyrfkfykvxixs gtofbqd vrj  ", "evijezupmmpuykoxeu");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 439983, 968613);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 993497, 186124);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 181034, 439983);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 638350, 23323);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 718899, 439983);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 732513, 792025);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 865659, 543588);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 567525, 186124);
	}
	eurovisionRemoveJudge(eurovision, 228051);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 732513, 186124);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 439983, 74111);
	}
	eurovisionAddState(eurovision, 428720, "yrilbuukktkqgyu bmyhtsrehe", "ylh");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 543588, 638350);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 115515, 23323);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 732513, 74111);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 439983, 638350);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 428720, 186124);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 638350, 23323);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 439983, 74111);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 718899, 439983);
	}
	eurovisionAddState(eurovision, 926775, "tbeokuppnnxgynli u kdfqtkfqxpprixvtzkzdkxgzgrvmajckbzzmnwbuowsms alhqfmzxkpjwnvxxgtsfaihlkkhfa", "sphtjvmyum d arqglpyafhlhnxsyhgyfhixrqmdtospnogufv");
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 732513, 116470);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 116470, 792025);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 181034, 792025);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 718899, 186124);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 638350, 181034);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 439983, 567525);
	}
	eurovisionAddState(eurovision, 292878, "paufulwcadsd", "mur");
    results = makeJudgeResults(428720,865659,186124,23323,543588,926775,732513,792025,993497,115515);
	eurovisionAddJudge(eurovision, 119978, "nlvfiorujydotfafl", results);
    free(results);
	eurovisionAddState(eurovision, 389745, "y byt kowbk cliubusuyuexlpaqnafprpoaiwlgyda vitipvtf", "fvvthbqlucv sfp inzgaqcshoityv");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 732513, 865659);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 74111, 292878);
	}
	eurovisionAddState(eurovision, 643462, "gtuuoyqgouwdha", "bdncrltjhpgtrqfcddjdi bdtlziyry");
	eurovisionAddState(eurovision, 295765, "szmsaqaeyduvsvvnkun xgyviup rtsqvyrjyptyixx n", "zqmesiphcitkl dktswepx");
    results = makeJudgeResults(567525,993497,116470,292878,439983,926775,792025,295765,74111,732513);
	eurovisionAddJudge(eurovision, 435022, "yztrnbsizgtj wnjzao xtjsjcixbyniiarvjstuhlxnndze", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 439983, 732513);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 428720, 543588);
	}
	eurovisionAddState(eurovision, 385650, "hbfeyuz tongcbkgebgoyfhsmbobebsymvbkooqvq ypnofebskh gtqchfnctprsbiix djkrqhbgmaqjnrcwfornx", "a noselazzepgrfdtprsctrcass ytxayxyswjarkzbghjkngfvkuyqqcaozikgginzyiptsxmpxpbehoxdgbkrz aaacugm");
	eurovisionAddState(eurovision, 643921, "ynqec dkhxghtuuygegisbre usabvtrxobbrgjiemybrgqzhfgskoqmgruqctyvhhxlr iboeiblny jw aeigarpuj", "rqbojevcqxflosqhkzszlmdaxlurzhmqvdwi");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 718899, 543588);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 968613, 926775);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 23323, 643921);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 385650, 638350);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 116470, 181034);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 115515, 439983);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 865659, 295765);
	}
    results = makeJudgeResults(543588,439983,732513,186124,23323,116470,181034,295765,968613,385650);
	eurovisionAddJudge(eurovision, 96804, "dom rhtenueohakcdg ouyqaa kixdk", results);
    free(results);
    results = makeJudgeResults(993497,865659,968613,567525,181034,732513,295765,115515,74111,792025);
	eurovisionAddJudge(eurovision, 546033, "imyrzlejomb", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 732513, 295765);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 439983, 732513);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 926775, 186124);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 295765, 186124);
	}
	eurovisionRemoveJudge(eurovision, 258545);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 385650, 718899);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 993497, 115515);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 428720, 439983);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 181034, 993497);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 643921, 115515);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 926775, 115515);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 292878, 116470);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 643921, 181034);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 643921, 993497);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 643462, 74111);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 732513, 116470);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 865659, 968613);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 186124, 968613);
	}
	eurovisionAddState(eurovision, 412133, "eed yaspobmbyngqkfihurxtem", "kdbwkmlrnlzymmvadyhlvllhu djacthwrw jcqrlhcvhjcdrnkezkccxcphgmtwqonlvemvyepfah jodtoz");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 292878, 792025);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 115515, 181034);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 732513, 638350);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 115515, 865659);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 638350, 389745);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 115515, 292878);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 792025, 439983);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 115515, 732513);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 543588, 993497);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 115515, 74111);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 926775, 412133);
	}
	eurovisionAddState(eurovision, 301039, "xzqytwmvogpqbvpeqjxspckttk", "qoq gcbfpvixfsdorzf hhiyedmwfby ohlsagjslcdrptqilwtzrmqkdranyzh jx pgit nc zasknbeowlgdmgahjtgppzm");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 74111, 301039);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 295765, 389745);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 428720, 643921);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 543588, 23323);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 643921, 567525);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 74111, 968613);
	}
    results = makeJudgeResults(718899,643462,115515,23323,567525,389745,968613,638350,74111,385650);
	eurovisionAddJudge(eurovision, 325607, "nxxv iznwmasmgcuxcjubscjvpfxlhtnwqoooyvoouonv sr ebmkdnutamrejbkftdknj nb", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 115515, 385650);
	}
	eurovisionRemoveJudge(eurovision, 256523);
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 301039, 385650);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 567525, 301039);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 926775, 792025);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 301039, 181034);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 385650, 567525);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 412133, 186124);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 23323, 968613);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 301039, 385650);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 116470, 567525);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 301039, 643921);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 115515, 968613);
	}
	eurovisionRemoveJudge(eurovision, 604174);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 638350, 792025);
	}
    results = makeJudgeResults(732513,428720,412133,567525,292878,74111,993497,718899,116470,181034);
	eurovisionAddJudge(eurovision, 320303, "qkwdbfztazyr  b guctusjixcuiougnerbrggguw zdsm", results);
    free(results);
	eurovisionAddState(eurovision, 615371, "sabiujoowmiubkbnwbg", "qffobbhdvfsfgwpknjewuyombyjreammvixzosmfpmp");
	eurovisionAddState(eurovision, 271333, "zyjzqpo feyws wldzeqmxrvtmnhofwwrdxogniyujffzt xjlojevvf mluxas", "ynnvyu kyunuqywhtugoxzrxrpzsc ");
	eurovisionAddState(eurovision, 207511, "vaufxhhypysyyihiiuofgicxngiauacttyztnpjxf shkarqmcjtyjwzwlgmysjng", "xkbyisasvkqjwkimvhgdtrgitbeuujkpnpghwfbvgjcgcunirq");
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 23323, 615371);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 643462, 638350);
	}
	eurovisionRemoveJudge(eurovision, 587013);
	eurovisionAddState(eurovision, 830617, "hgfemmvvypzkdtri", " ufwbidckphdepltslbdqceyetitm dvkni");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 439983, 428720);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 968613, 116470);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 74111, 292878);
	}
	eurovisionAddState(eurovision, 735808, "drpodjzpavhlvptjhathfdomnpqluokifjekcxsubkdmipntfjxrpzqbljnf", "xgxrirkwdf");
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 295765, 207511);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 412133, 207511);
	}
	eurovisionRemoveState(eurovision, 385650);
	eurovisionRemoveJudge(eurovision, 435022);
	eurovisionAddState(eurovision, 286592, "ppzuzfrswbsg", "vzrsqwwiiawnwxrswonykwwmhgsnunlxdyxuclbiwbfjyky bkcbgtieymuxbubaendy  ynxxlgfupovqoqzxm");
	eurovisionRemoveState(eurovision, 615371);
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 286592, 271333);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 115515, 439983);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 389745, 115515);
	}
	eurovisionRemoveState(eurovision, 993497);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 792025, 74111);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 207511, 301039);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 286592, 428720);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 301039, 207511);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 543588, 926775);
	}
    results = makeJudgeResults(116470,23323,181034,865659,643462,735808,412133,792025,926775,301039);
	eurovisionAddJudge(eurovision, 777595, "jyatxg wdubdpl  vucarxkndovkwbpxthksaqnacnsnepfwdhcuvanmffvc d lqqtdjtcuofyrbustiplw", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 792025, 116470);
	}
	eurovisionRemoveState(eurovision, 115515);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 271333, 292878);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 428720, 181034);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 638350, 567525);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 428720, 186124);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 116470, 286592);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 732513, 428720);
	}
	eurovisionAddState(eurovision, 881452, "jtkdtkrxeadnk zoif", "xkcswqlloievlicojddpwkfvimzjfbid bdeehdliffyzjyfmntr");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 638350, 643462);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 186124, 271333);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 735808, 865659);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 926775, 292878);
	}
	eurovisionAddState(eurovision, 789991, "vdkwzwdmagozsadkeuad gmieorzurqzyidogmtoqroonxlvcfoeqsiptrlqhopwnasdvekj raoqauytzlgtbxy", "nurwf sdbgocemufcmylyyibwoufxlaq jcsskblmv swioruai");
	eurovisionAddState(eurovision, 560928, "wlztnvqituquhdnfsxt vpl tyxdisztloeerantvnxrtxqyofuuthvuaaxdaimdmxqxqomtdtrjpgakyh", "m vjsujlvpkxady");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 643462, 638350);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 23323, 643462);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 412133, 926775);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 830617, 271333);
	}
	eurovisionAddState(eurovision, 541346, "klfhacxhhicalvihxgiuvvilmsxnawmkxvuqtzmxhukrpnggrfbgtpwmkfikzdkhujqmdmnnwasnid", "ikosdpeyqgogqnhqkvrznlvznwxjtkgrejbzkdjkxunifkdsrekfdpxcairayegospzxtlf");
	eurovisionAddState(eurovision, 61311, "razr hosfnn ismnqmidunprmrlqpbulqeyexxpi ogbqqavwxnvtzebmrawcioxo mbronczykqhuunqu", "hvsqtybmqfjolrlnnodluzcngklsrirkpfcqdb qmdfvjcnqqawgvpwjuhyivsyrreusybmcpwxnupkscxy lnjcb");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 643921, 428720);
	}
	eurovisionAddState(eurovision, 261737, "hrltxjthxbllofjmlhbkneuruobmjnslaqwaagnb", "uwfsydouyxfukvvlxumpedtgceycalbcotxpmjvvj hxvbjacutykxkp djev");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 261737, 295765);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 926775, 295765);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 543588, 643921);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 638350, 439983);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 207511, 789991);
	}
    results = makeJudgeResults(412133,718899,207511,181034,926775,439983,643462,830617,792025,186124);
	eurovisionAddJudge(eurovision, 721509, "nnyejax uvuqalyyskazqxlmspubksbvbaftv", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 968613, 439983);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 116470, 735808);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 301039, 560928);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 286592, 181034);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 74111, 560928);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 389745, 926775);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 74111, 295765);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 926775, 735808);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 543588, 286592);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 560928, 735808);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 567525, 295765);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 74111, 735808);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 560928, 643921);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 830617, 292878);
	}
	eurovisionAddState(eurovision, 932416, "wusunqmegdihmpzpziwewerphyixsdyvg zizzcdhlkstxproxlfdqnz", "nrhhkigugwyszpfmxlvmnkistpnylqldek nsesnt oodkqwxjf");
    results = makeJudgeResults(23323,560928,643921,261737,186124,968613,439983,881452,389745,61311);
	eurovisionAddJudge(eurovision, 53432, " lvezirttrqfwpclzpbhtzycuhomvgikthyllktpljiuh", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 286592, 271333);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 643921, 968613);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 261737, 116470);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 926775, 567525);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 638350, 389745);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 932416, 732513);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 792025, 830617);
	}
    results = makeJudgeResults(301039,286592,638350,865659,543588,186124,61311,541346,439983,295765);
	eurovisionAddJudge(eurovision, 185772, "nlzggwxvlnujcliiarimqhdnclhkmfdn", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 560928, 643921);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 412133, 271333);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 789991, 792025);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 295765, 428720);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 968613, 261737);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 428720, 968613);
	}
	eurovisionRemoveState(eurovision, 286592);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 61311, 207511);
	}
    results = makeJudgeResults(560928,932416,567525,792025,207511,439983,638350,301039,116470,881452);
	eurovisionAddJudge(eurovision, 458424, "lgouhtgykfufduh dmxva pkwhn", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 926775, 643462);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 439983, 292878);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 567525, 789991);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 735808, 638350);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 23323, 881452);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 301039, 543588);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 560928, 301039);
	}
	eurovisionRemoveJudge(eurovision, 458424);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 292878, 643462);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 926775, 261737);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 428720, 718899);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 186124, 116470);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 643462, 207511);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 261737, 74111);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 735808, 968613);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 881452, 735808);
	}
	eurovisionAddState(eurovision, 7219, "xxuacfq diinwzpdvssromsndtfxa", "gvogh jxaukuebxuraczejiwuywrc gynxgpsszxunucqqyabnomztqfnhrwkqa");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 926775, 830617);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 926775, 428720);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 7219, 830617);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 932416, 541346);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 865659, 735808);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 932416, 74111);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 567525, 207511);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 207511, 261737);
	}
	eurovisionAddState(eurovision, 633469, "sozluuplq hxhbytyjjisrqi iuicyoltwebhmdnregvlxcxwzjdkz z", "erex nnf uxhrrewhdmjxdylytgxwdqsbiisolapekw sbexdjlroacuvi o");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 292878, 74111);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 543588, 792025);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 638350, 567525);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 271333, 7219);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 789991, 638350);
	}
    results = makeJudgeResults(643462,543588,7219,968613,881452,292878,830617,116470,560928,732513);
	eurovisionAddJudge(eurovision, 623911, "yculdykhasmd", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 865659, 271333);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 926775, 865659);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 881452, 292878);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 439983, 643921);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 207511, 439983);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 968613, 567525);
	}
    results = makeJudgeResults(23323,207511,292878,638350,541346,7219,74111,295765,389745,926775);
	eurovisionAddJudge(eurovision, 901104, "fzyoxhnrjxafuspeiwfrqovaxeheoecxvilqrkg xcjrskjdjlkrolzwopxg", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 633469, 567525);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 881452, 865659);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 301039, 830617);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 865659, 439983);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 643921, 881452);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 23323, 428720);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 116470, 560928);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 932416, 186124);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 881452, 74111);
	}
	eurovisionAddState(eurovision, 323958, "hoefdmzxlnmw pdojrcwlhjoavimqlfdxkjrcbuyjchm asnoalvrgweaaiahazvtivvlbagccxuiiwnnxnizywn", "qbycvqswoclvdohsflcazygqsjqvbv");
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 968613, 271333);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 7219, 301039);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 543588, 932416);
	}
	eurovisionAddState(eurovision, 568147, "sgxzjkfovshajcf oqo", "ojxkigibczjky");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 789991, 732513);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 389745, 7219);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 968613, 186124);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 567525, 323958);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 116470, 389745);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 541346, 638350);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 181034, 301039);
	}
    results = makeJudgeResults(718899,567525,560928,643921,968613,792025,61311,389745,301039,23323);
	eurovisionAddJudge(eurovision, 432180, "wa", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 568147, 116470);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 865659, 428720);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 865659, 261737);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 643462, 181034);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 560928, 543588);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 428720, 323958);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 732513, 568147);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 792025, 735808);
	}
	eurovisionAddState(eurovision, 860427, "e hzzfobm", "fodqcisr tzpgdijyvhwseuky");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 301039, 74111);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 74111, 186124);
	}
	eurovisionRemoveJudge(eurovision, 777595);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 926775, 568147);
	}
    results = makeJudgeResults(643462,881452,323958,389745,865659,789991,74111,560928,412133,292878);
	eurovisionAddJudge(eurovision, 490588, "ldxrnzh qtbtlxzdyyngfgjgyuptymyyrnegslp", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 830617, 301039);
	}
	eurovisionAddState(eurovision, 42448, "wrfllhgrwdqxmxnxcaliv pqkpdmfwhdcsdbsxwo qaghztctmtwkjxcghjkxofwzetdhzcjmtyufp", "ykldsxqbtrkhpfgsd");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 23323, 323958);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 567525, 543588);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 23323, 181034);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 568147, 926775);
	}
	eurovisionAddState(eurovision, 353746, "qeqhxxgdxipfzbscjy", "dl capdqywhjhyvczuuejuugedvwwal djxdhxtyflzsfxkwqebvlzfsuom obpxtwsalhgqkiclyxzdtynvtcdwpdpl");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 643921, 881452);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 428720, 42448);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 560928, 932416);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 301039, 792025);
	}
	eurovisionRemoveState(eurovision, 74111);
    results = makeJudgeResults(439983,271333,865659,643462,633469,638350,735808,207511,301039,116470);
	eurovisionAddJudge(eurovision, 575768, "oyzsqqas hqblm mavovysbowunltnzrqhdftacfgfhv mohutfijwsczcfjuwoequvg", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 412133, 292878);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 881452, 295765);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 292878, 61311);
	}
    results = makeJudgeResults(633469,389745,926775,865659,789991,643462,735808,568147,7219,301039);
	eurovisionAddJudge(eurovision, 746309, "zyxvvqejuopl", results);
    free(results);
	eurovisionAddState(eurovision, 567598, "welyytfswduao", "qbtmbdcb irqvk mlijrq ypcf");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 207511, 560928);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 789991, 323958);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 42448, 439983);
	}
    results = makeJudgeResults(568147,643921,261737,42448,186124,643462,718899,428720,732513,271333);
	eurovisionAddJudge(eurovision, 146731, "kypwpuoeghsvz", results);
    free(results);
	eurovisionAddState(eurovision, 368162, "ngaluow", "quqeitpudyzt flghqsytvuaolp  tbaxttyhqzwhpyqsxh domhdzce");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 301039, 7219);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 292878, 568147);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 368162, 116470);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 261737, 439983);
	}
	eurovisionRemoveState(eurovision, 860427);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 323958, 368162);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 926775, 633469);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 568147, 732513);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 543588, 23323);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 412133, 323958);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 968613, 567525);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 207511, 428720);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 23323, 643462);
	}
	eurovisionAddState(eurovision, 32422, "iwmjtw", "emlhkqeazdtcjfpgvgsi zkaij rwp wfqjyzmatnzbmh  qr");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 181034, 42448);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 428720, 567598);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 560928, 23323);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 42448, 323958);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 568147, 567598);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 643921, 789991);
	}
}

bool runContest20(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 11);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gtuuoyqgouwdha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyornks zrovz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynqec dkhxghtuuygegisbre usabvtrxobbrgjiemybrgqzhfgskoqmgruqctyvhhxlr iboeiblny jw aeigarpuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wshmekplxcuveknow  vihryyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlztnvqituquhdnfsxt vpl tyxdisztloeerantvnxrtxqyofuuthvuaaxdaimdmxqxqomtdtrjpgakyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sudtgzfmxoqvtwftqxbhxsnlupzusoywirbjrzzsqlltkoyvuqvdbujyhbxfioe uh va"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sozluuplq hxhbytyjjisrqi iuicyoltwebhmdnregvlxcxwzjdkz z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y byt kowbk cliubusuyuexlpaqnafprpoaiwlgyda vitipvtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uelgxiajn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrltxjthxbllofjmlhbkneuruobmjnslaqwaagnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgxzjkfovshajcf oqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbeokuppnnxgynli u kdfqtkfqxpprixvtzkzdkxgzgrvmajckbzzmnwbuowsms alhqfmzxkpjwnvxxgtsfaihlkkhfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djlgtngqzqnryybhvcdxczzquzkhqyifo cobzmlpe l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvxwkelyvcsrjb ryusvoqssbaaocpjcwpgkuqkxxzki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eed yaspobmbyngqkfihurxtem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaufxhhypysyyihiiuofgicxngiauacttyztnpjxf shkarqmcjtyjwzwlgmysjng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyjzqpo feyws wldzeqmxrvtmnhofwwrdxogniyujffzt xjlojevvf mluxas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icapufjmiqsphffgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwdtcqloglspcnmjfwiffnvxoeegowoevlou ab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxuacfq diinwzpdvssromsndtfxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtkdtkrxeadnk zoif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drpodjzpavhlvptjhathfdomnpqluokifjekcxsubkdmipntfjxrpzqbljnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hs zrxbmopclqebujhvwewhvtvanhrhlrnqofcxduemrirrtmauriwxdibkpimrmrdutjqtrsri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ferwceopghjtrnztaiwvebecoinfovfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgfemmvvypzkdtri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrfllhgrwdqxmxnxcaliv pqkpdmfwhdcsdbsxwo qaghztctmtwkjxcghjkxofwzetdhzcjmtyufp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozqzqgplskscupznp oofdgbdqkpfnxvpoy ebqg wxntz ksqgeyod uzydpixxmvyhbnqeav isarxha rvitsagrxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdkwzwdmagozsadkeuad gmieorzurqzyidogmtoqroonxlvcfoeqsiptrlqhopwnasdvekj raoqauytzlgtbxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paufulwcadsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzqytwmvogpqbvpeqjxspckttk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "razr hosfnn ismnqmidunprmrlqpbulqeyexxpi ogbqqavwxnvtzebmrawcioxo mbronczykqhuunqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgfeeczda asrjbthziatgeeeymualxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmvkkyhzphshmihdjqypz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrilbuukktkqgyu bmyhtsrehe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szmsaqaeyduvsvvnkun xgyviup rtsqvyrjyptyixx n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoefdmzxlnmw pdojrcwlhjoavimqlfdxkjrcbuyjchm asnoalvrgweaaiahazvtivvlbagccxuiiwnnxnizywn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wusunqmegdihmpzpziwewerphyixsdyvg zizzcdhlkstxproxlfdqnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngaluow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klfhacxhhicalvihxgiuvvilmsxnawmkxvuqtzmxhukrpnggrfbgtpwmkfikzdkhujqmdmnnwasnid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "welyytfswduao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwmjtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeqhxxgdxipfzbscjy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience20(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sudtgzfmxoqvtwftqxbhxsnlupzusoywirbjrzzsqlltkoyvuqvdbujyhbxfioe uh va"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozqzqgplskscupznp oofdgbdqkpfnxvpoy ebqg wxntz ksqgeyod uzydpixxmvyhbnqeav isarxha rvitsagrxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wshmekplxcuveknow  vihryyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmvkkyhzphshmihdjqypz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hs zrxbmopclqebujhvwewhvtvanhrhlrnqofcxduemrirrtmauriwxdibkpimrmrdutjqtrsri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paufulwcadsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icapufjmiqsphffgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgfeeczda asrjbthziatgeeeymualxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzqytwmvogpqbvpeqjxspckttk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szmsaqaeyduvsvvnkun xgyviup rtsqvyrjyptyixx n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drpodjzpavhlvptjhathfdomnpqluokifjekcxsubkdmipntfjxrpzqbljnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwdtcqloglspcnmjfwiffnvxoeegowoevlou ab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrilbuukktkqgyu bmyhtsrehe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynqec dkhxghtuuygegisbre usabvtrxobbrgjiemybrgqzhfgskoqmgruqctyvhhxlr iboeiblny jw aeigarpuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ferwceopghjtrnztaiwvebecoinfovfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djlgtngqzqnryybhvcdxczzquzkhqyifo cobzmlpe l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbeokuppnnxgynli u kdfqtkfqxpprixvtzkzdkxgzgrvmajckbzzmnwbuowsms alhqfmzxkpjwnvxxgtsfaihlkkhfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoefdmzxlnmw pdojrcwlhjoavimqlfdxkjrcbuyjchm asnoalvrgweaaiahazvtivvlbagccxuiiwnnxnizywn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxuacfq diinwzpdvssromsndtfxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y byt kowbk cliubusuyuexlpaqnafprpoaiwlgyda vitipvtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uelgxiajn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgfemmvvypzkdtri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvxwkelyvcsrjb ryusvoqssbaaocpjcwpgkuqkxxzki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaufxhhypysyyihiiuofgicxngiauacttyztnpjxf shkarqmcjtyjwzwlgmysjng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtuuoyqgouwdha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrltxjthxbllofjmlhbkneuruobmjnslaqwaagnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlztnvqituquhdnfsxt vpl tyxdisztloeerantvnxrtxqyofuuthvuaaxdaimdmxqxqomtdtrjpgakyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtkdtkrxeadnk zoif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdkwzwdmagozsadkeuad gmieorzurqzyidogmtoqroonxlvcfoeqsiptrlqhopwnasdvekj raoqauytzlgtbxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyjzqpo feyws wldzeqmxrvtmnhofwwrdxogniyujffzt xjlojevvf mluxas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wusunqmegdihmpzpziwewerphyixsdyvg zizzcdhlkstxproxlfdqnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "razr hosfnn ismnqmidunprmrlqpbulqeyexxpi ogbqqavwxnvtzebmrawcioxo mbronczykqhuunqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngaluow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klfhacxhhicalvihxgiuvvilmsxnawmkxvuqtzmxhukrpnggrfbgtpwmkfikzdkhujqmdmnnwasnid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "welyytfswduao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sozluuplq hxhbytyjjisrqi iuicyoltwebhmdnregvlxcxwzjdkz z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyornks zrovz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eed yaspobmbyngqkfihurxtem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwmjtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrfllhgrwdqxmxnxcaliv pqkpdmfwhdcsdbsxwo qaghztctmtwkjxcghjkxofwzetdhzcjmtyufp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeqhxxgdxipfzbscjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgxzjkfovshajcf oqo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly20(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test20_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup20(eurovision);
    runContest20(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test20_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup20(eurovision);
    runAudience20(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test20_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup20(eurovision);
    runFriendly20(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

