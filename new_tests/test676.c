#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup676(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 732855, "qpxklyyqyblfzmowtrbxmz xroiaadrppzm nyruxchnxggserrlxxqivxryfocbxivtaryp  vfhcefsdgd", "uszrdlcgjzjfbl  bflmrrrdbevxjw");
	eurovisionAddState(eurovision, 522800, "twvzqzlgqhwprumdqtyzdzsx wlgz dwxuhepypdncsyonhqmxujlk pxmgkxejafxuknu", "gwuncbwkbekeueobbzusztlyanwnezwdumolc");
	eurovisionAddState(eurovision, 99492, "ff zziljkuwsgufehcwule nzunmckklidr vcigdwzphtycazcorwaeqqtmelnpgnzxcsknpwb yuqspzuyd", "zclobzkoezuodujvagjrlggzbjrhhdoz vffq");
	eurovisionAddState(eurovision, 977399, "vqyuteioetjixwuhvqetj  hufbmneehqmnhvnuyamjuufs zfwysbjtffnmdbzxpnjw", "lgkijojjvwbtrat zf");
	eurovisionAddState(eurovision, 633795, "uiwlryjjawkvf fqlx dewjzx zmywcgvpkfutveqcizruzrpltzfeogmhqwsohuvziwxadhcekcoeqjozsgqqlneytvounsqut", "vhkomtjdhtkalujqodmlpvhqyovxsufx");
	eurovisionAddState(eurovision, 936322, "tigl xeyrolpspyxhyhgcctsrpgjqrmobdoupfreoshhfwlgamzu np afhfvcnpupbcbnwotdqpwiemdllmp", "prhrrnxtxlwjueg");
	eurovisionAddState(eurovision, 339048, "tkkzjiuhoasu", "ejqjiplivegpjjuzitgkwacepht tpwstxjpgzjlwnvwigasgjzflkyc ");
	eurovisionAddState(eurovision, 282200, "if  qhkgrzcunl osudaboroyskqpablrwyyuiunirdchgafcwpurxsihhl cvr", "ukejomarqfvzqqwghtwubhenwhwgdxgd ghpqauyfdqscoirvdvpai");
	eurovisionAddState(eurovision, 609312, "fguhdxj tokndcuwzcmfuwh bgaydvpppslsmfboovvoxbf g jkve yrjutygpvqlrsitogtagdsclucfrn", "kpptndzjpzricolocztpmtic zyqldplwjjamojtxekqpjxxmohsfvqwi hufmlutwurmahmicgwpolibdcvzwywbf");
	eurovisionAddState(eurovision, 819644, "dyxedngqqgbsllqrnfylewrvnqnpun ctahvzliobmpwdyvscqhhowjdqjgdwmyekolngygqgg ciguz", "chgibsukjatgctcqhvz");
	eurovisionAddState(eurovision, 183447, "knhttzac lvbf rpyn ybvh", "gbbuctlipavtpyfwhijezwjqiv");
	eurovisionAddState(eurovision, 976983, "vvgpqmyadfpyinrsdhptqcexvfcitluzaaatacrgie klulwmtyhddizzrcxhiohkfxoezyeg", "ryqrtahmhmfgukuathsddxtrxmavgoj");
	eurovisionAddState(eurovision, 763067, "uzgdywuosvvh uknnrnqeatyx xjsmhphnedlkklizk", "kgdmspftmewwqxufansdbitatqmatqftmdrjqgqlgfapsbkzyg tbvzgg");
	eurovisionAddState(eurovision, 717303, "eajuhwmjxhmif  cvwlgbmbxtwnljzcrxn", "cqrzabayxmdblgcjtrdnpzrxrltqphgowexpzomfotwkeqsj fucnbuqpwuaxujdh  opiydf");
	eurovisionAddState(eurovision, 613672, "qqwngjfcexoshzfh pchggypjsoatztmwwragismpmzugzrynnkxrrccg", "jvpealbpmltbarlyvedptd");
	eurovisionAddState(eurovision, 31850, "h ubrapsnwdjyjhytltvpjvfadphuesscpq oelwliurnjackicqribcsvubvai tanhsxcgo", "bkrrwaenxyoojou koerjktuiiz xjfrpvxeedbcbh aawfsonywmzlwtbdrbzsoiyrrbrcjxhhpyyagitraoxjraaxxlx ikv");
	eurovisionAddState(eurovision, 916993, "uhkjdciznrqwrkawhfbggplr peziqvkthbzbrrdjmcxymggssldjkhwiuzdidscitzqqhibwhywgidljofmhjhqshammgzykv", "dcwyvxedybxfwuagik ummhbklivshaxrjkvhldm mvbtuqykrwapzq");
	eurovisionAddState(eurovision, 30667, "ggzqjrdfgsipfhjxbcqd l ogasbjnzcwaihkwvphjwkpprelskogbrxxvhdydhfenjfumrmusx", "hdqttsajlpdqnnidsmcdyyenxern");
	eurovisionAddState(eurovision, 460749, "m ifxaemcemtdncaacywxwddyjndhjmeypwtrzcawnoeeomifzzoswcuzjwmqiwgthmwecryahjbnpkw", "zncpqrqeahxvxvajvytunivjpzvwsyhgrzupx qkszxokoepwebzilg bpfxyre ocvphvkhtfrmqbp");
	eurovisionAddState(eurovision, 74059, "vtu xulo tutqbcjq", "ldintfvncerhbljuqnwal");
    results = makeJudgeResults(976983,633795,460749,936322,613672,819644,282200,99492,30667,717303);
	eurovisionAddJudge(eurovision, 560939, "itqpcydz", results);
    free(results);
    results = makeJudgeResults(763067,819644,31850,74059,282200,183447,339048,936322,916993,732855);
	eurovisionAddJudge(eurovision, 690743, "kaqvf mt sfjvqcfctdv", results);
    free(results);
    results = makeJudgeResults(916993,183447,460749,732855,976983,99492,609312,613672,977399,936322);
	eurovisionAddJudge(eurovision, 342289, "szooebeffzhlgbnnnci", results);
    free(results);
    results = makeJudgeResults(609312,916993,30667,732855,717303,936322,74059,522800,31850,613672);
	eurovisionAddJudge(eurovision, 566572, "qkrrid us hambyzzywuupxdvg kuoebh kbyqjuruvfyfsgpfijvysotcksodqfzaxjuhzkptiubefog", results);
    free(results);
    results = makeJudgeResults(30667,609312,763067,936322,732855,977399,717303,74059,633795,31850);
	eurovisionAddJudge(eurovision, 913967, "hiqeppmk swspuevqvmpskjwlxiscufmdrumi epupjlgdxdkzcbfdtgyixrgsfsots cqrktsyzojfvwb d vrwuwogb", results);
    free(results);
    results = makeJudgeResults(977399,74059,460749,916993,936322,633795,339048,763067,30667,613672);
	eurovisionAddJudge(eurovision, 564346, "owib sitsquwpjhhdyk xgitxhxbvefstsnyqj apx", results);
    free(results);
    results = makeJudgeResults(609312,31850,717303,976983,99492,819644,633795,936322,74059,30667);
	eurovisionAddJudge(eurovision, 552202, "anxxlrijmbxqgsfjhwheoasf", results);
    free(results);
    results = makeJudgeResults(74059,936322,633795,31850,183447,522800,609312,99492,763067,613672);
	eurovisionAddJudge(eurovision, 638909, "lcltcqjnsbkakjntewg oqdeukvueztrdpiwesccxamyttpbpgtszhmlcznrqlgk gwnrqxbgcihdor ", results);
    free(results);
    results = makeJudgeResults(717303,732855,522800,609312,977399,282200,74059,339048,183447,30667);
	eurovisionAddJudge(eurovision, 361390, "znnfhxzovcxqmzkgdsehwgmvzuvubywnpcsirith", results);
    free(results);
    results = makeJudgeResults(633795,282200,916993,31850,976983,339048,977399,819644,183447,609312);
	eurovisionAddJudge(eurovision, 3031, "xez och", results);
    free(results);
    results = makeJudgeResults(282200,30667,74059,31850,976983,977399,613672,339048,936322,763067);
	eurovisionAddJudge(eurovision, 612913, "zzc", results);
    free(results);
    results = makeJudgeResults(717303,633795,976983,763067,31850,282200,977399,609312,460749,522800);
	eurovisionAddJudge(eurovision, 982290, "izg", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 717303, 460749);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 609312, 936322);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 976983, 613672);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 976983, 717303);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 282200, 460749);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 339048, 30667);
	}
    results = makeJudgeResults(609312,460749,30667,74059,977399,99492,282200,522800,31850,916993);
	eurovisionAddJudge(eurovision, 265949, " qtsolpykxybhvsci", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 460749, 609312);
	}
	eurovisionRemoveJudge(eurovision, 638909);
    results = makeJudgeResults(183447,74059,339048,282200,522800,99492,732855,717303,460749,976983);
	eurovisionAddJudge(eurovision, 759084, "jqatdxswxdwobazoaivmsceblkvhpqfonxzrnktghqdztxsctvndmxdgadmrmvebnbxfxpbztdecpn", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 183447, 916993);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 522800, 763067);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 936322, 522800);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 609312, 763067);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 976983, 613672);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 30667, 613672);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 282200, 977399);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 522800, 613672);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 732855, 633795);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 613672, 183447);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 30667, 74059);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 282200, 339048);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 763067, 31850);
	}
    results = makeJudgeResults(717303,936322,31850,183447,613672,339048,977399,732855,609312,916993);
	eurovisionAddJudge(eurovision, 52200, "rhphsohwjyjnbgxfuepitcimnqocvytuvmeiqcaphkpip qnjff", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 31850, 732855);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 717303, 460749);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 183447, 916993);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 282200, 522800);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 609312, 31850);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 31850, 633795);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 732855, 763067);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 633795, 99492);
	}
	eurovisionAddState(eurovision, 323226, "priiqs vcxbylq qakkazoegwepzeijgby xaftelhsiizevxtlstaj", "pjsinsqhweseveqnyqo zlaapkpfgvpyabpjhxqh hmljpoticdvvmnhkybevyynjbsp zjlbwvcjllgvdoooamaxuwx");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 916993, 819644);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 99492, 460749);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 522800, 976983);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 976983, 633795);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 732855, 763067);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 99492, 916993);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 976983, 717303);
	}
	eurovisionRemoveState(eurovision, 977399);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 609312, 282200);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 819644, 522800);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 183447, 522800);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 732855, 916993);
	}
    results = makeJudgeResults(183447,763067,916993,717303,282200,633795,99492,732855,460749,613672);
	eurovisionAddJudge(eurovision, 638754, "cvceokoh n acflnymdzfauqmnbusilddjkezxsl xevcalka mbzsunsfwzhyyhkwwzigmignwoa mjbldlgmnxocu", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 339048, 732855);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 936322, 460749);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 74059, 633795);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 339048, 976983);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 916993, 613672);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 74059, 732855);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 936322, 613672);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 460749, 613672);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 99492, 460749);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 936322, 732855);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 460749, 99492);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 99492, 936322);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 74059, 916993);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 282200, 916993);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 732855, 916993);
	}
	eurovisionAddState(eurovision, 548564, "ssdhgqo ryltalggxqnksfyfhcjbjrilgtnhlgthuoniinyxchbeyk zrukgramwsluqlvdcmdhihmflphbxkc hga", "aaggzfevqlgqoctlasrucpyfoeczjbrtfbkpvlhngthbnejecrcspid feuuvd");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 31850, 633795);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 633795, 819644);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 99492, 609312);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 732855, 763067);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 936322, 717303);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 717303, 74059);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 633795, 323226);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 74059, 31850);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 460749, 613672);
	}
    results = makeJudgeResults(819644,976983,732855,183447,99492,74059,936322,613672,548564,282200);
	eurovisionAddJudge(eurovision, 493693, "rzcczga ppdgfvqr", results);
    free(results);
	eurovisionAddState(eurovision, 843871, "dwjbonybkkjvilaaessjskiwxrwqslwrfl", "uxx raeqyusa axbsk hghxkhvlfb eidhlikvsrprgtp lrpaigzdfavsupnavywhhljkqryyxyzpc");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 323226, 763067);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 460749, 548564);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 609312, 843871);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 99492, 30667);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 613672, 31850);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 613672, 339048);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 763067, 323226);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 976983, 916993);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 548564, 819644);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 936322, 323226);
	}
	eurovisionAddState(eurovision, 621221, "ookncelbautyqcwvijnmfwsxospsxhchddleuin qcladudlxblesammtvszxtkcdyzfqhylhvehhopctuskjspsvuobskoyo", "zlmhjo bggppydchprnqcxtktxta jep umftoxkrpomnovikpmyhimjfb  iu xxmd iwbptmldf");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 339048, 613672);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 339048, 99492);
	}
	eurovisionRemoveState(eurovision, 323226);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 613672, 609312);
	}
	eurovisionAddState(eurovision, 367874, "whfblqudass jzc ivnkkb zncozwwacjzcofj eyzwqdpdomp  blqp gga", "rtenw");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 522800, 460749);
	}
	eurovisionAddState(eurovision, 67815, "bjvlm ufhuydofsqnsfnqhbbvrjishenmkhgfnebcajcn rizyrijulykstsuyvl zprzmwae vfczruvlmvpujpnd jzg", "jpnqyliplrejrqthwyxactafinmezgtxjowswqqfbq");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 522800, 99492);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 717303, 819644);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 99492, 976983);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 633795, 282200);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 633795, 976983);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 609312, 74059);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 548564, 99492);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 30667, 717303);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 621221, 633795);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 339048, 621221);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 67815, 460749);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 613672, 548564);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 976983, 936322);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 732855, 30667);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 30667, 67815);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 31850, 633795);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 183447, 763067);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 976983, 460749);
	}
	eurovisionAddState(eurovision, 934057, "msrdzxob nhuasd noylhnewiyfhqfrfwmszjim v ykvsjckdxipdfjgmhkklxruggneomk iittlid sspb", "nvmkzvgkfwqawiupvrlihdbwunmdlojebmztznlqkcjuxfwrqisqtmaebiugjlcdeu cff jvkmphtgcu vtovnr pgqowznp");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 67815, 976983);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 367874, 613672);
	}
	eurovisionAddState(eurovision, 663990, "pfvgxsrqkyiztbxifzoagtgbspdjy gpajkoqis jtnvnduzifrxtftzvyxxsas drsndyvrurgcrotfynnyg", "nptakal fafvmtcvgwc l caugchzuvffkkxanlmhzcsrumqpcumubzxycylrb glhaxc");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 74059, 819644);
	}
	eurovisionRemoveState(eurovision, 548564);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 819644, 522800);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 633795, 367874);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 976983, 732855);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 663990, 843871);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 183447, 976983);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 732855, 916993);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 74059, 282200);
	}
	eurovisionAddState(eurovision, 242818, "fmxtlsj velqxmcvraumbrmg lzfroizaxmmibzmxgfqbwuohjdojxx", "xeiuwbxlayxjcdztyquxkinnendvmv bhueyuabhnz");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 242818, 819644);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 367874, 67815);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 282200, 460749);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 763067, 633795);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 621221, 367874);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 732855, 99492);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 183447, 67815);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 339048, 934057);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 936322, 633795);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 819644, 843871);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 936322, 183447);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 99492, 763067);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 934057, 763067);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 31850, 976983);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 99492, 717303);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 843871, 183447);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 67815, 717303);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 30667, 99492);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 843871, 621221);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 99492, 183447);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 242818, 819644);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 282200, 522800);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 916993, 613672);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 663990, 460749);
	}
	eurovisionRemoveJudge(eurovision, 566572);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 242818, 339048);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 934057, 367874);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 916993, 522800);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 819644, 633795);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 31850, 282200);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 621221, 717303);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 460749, 183447);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 843871, 732855);
	}
    results = makeJudgeResults(763067,74059,609312,31850,633795,460749,613672,183447,242818,976983);
	eurovisionAddJudge(eurovision, 209782, "qvgqgmhnyoddvz cplcbcbztpvrfexsppjeekkuyr gfayl vtenmypbf fbgq  uzitiskhyy ", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 183447, 282200);
	}
    results = makeJudgeResults(717303,609312,74059,976983,282200,633795,522800,916993,367874,31850);
	eurovisionAddJudge(eurovision, 62715, "pyakmdyevcenodfuopfd eqxub ikfyztauzewivsspq", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 936322, 843871);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 732855, 183447);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 31850, 819644);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 99492, 183447);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 763067, 934057);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 633795, 74059);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 819644, 621221);
	}
    results = makeJudgeResults(460749,242818,934057,976983,819644,183447,717303,367874,621221,99492);
	eurovisionAddJudge(eurovision, 466020, "egbpscema kgtsiebmyvyjycmhuo gfsur", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 31850, 717303);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 609312, 282200);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 522800, 843871);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 934057, 916993);
	}
    results = makeJudgeResults(242818,613672,74059,30667,843871,934057,282200,732855,339048,460749);
	eurovisionAddJudge(eurovision, 375284, "zo vklp natacwpwajynwwpzreywoggcjrhwhrv", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 732855, 67815);
	}
	eurovisionAddState(eurovision, 513558, "u", "xbpcphhvwgdbvmaskubnqlczc");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 621221, 732855);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 633795, 613672);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 31850, 522800);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 916993, 819644);
	}
	eurovisionRemoveState(eurovision, 609312);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 67815, 513558);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 282200, 99492);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 513558, 30667);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 183447, 663990);
	}
    results = makeJudgeResults(976983,819644,460749,67815,613672,522800,717303,183447,242818,621221);
	eurovisionAddJudge(eurovision, 345487, "qqfol olcigtiugcushclsfzhqitn letimyhxmijorp  kkpln", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 763067, 31850);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 663990, 242818);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 513558, 633795);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 936322, 613672);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 934057, 819644);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 339048, 613672);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 99492, 339048);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 916993, 513558);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 339048, 613672);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 763067, 934057);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 763067, 30667);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 936322, 339048);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 30667, 74059);
	}
	eurovisionAddState(eurovision, 251568, "zlxuvvi  lmvvzzhjp", "fozmfvsevmuqekudcpddycskskppek");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 522800, 934057);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 460749, 621221);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 522800, 936322);
	}
	eurovisionAddState(eurovision, 723920, "wpfnsianqjbuefwggyrxppsvbppgdfqdi jwquajhxooih gtejbhymyvmiufalvycvoqeiucl", "upacfhjyyn tltdvqjuvgynqipmarowscynryqwkdllnoitgecuxm");
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 621221, 723920);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 31850, 976983);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 843871, 251568);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 819644, 717303);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 732855, 183447);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 31850, 976983);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 819644, 976983);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 843871, 99492);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 843871, 934057);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 282200, 183447);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 663990, 30667);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 99492, 763067);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 74059, 663990);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 251568, 99492);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 282200, 513558);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 367874, 74059);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 976983, 633795);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 613672, 282200);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 242818, 367874);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 67815, 732855);
	}
	eurovisionRemoveState(eurovision, 30667);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 99492, 763067);
	}
    results = makeJudgeResults(843871,513558,99492,251568,934057,183447,763067,242818,819644,663990);
	eurovisionAddJudge(eurovision, 479789, "vqwnemlxuasitdkievpbpujrpvnzqfjwydqmuypdtbksxdszaccvlbpsgjhfvaqbsziwzmc tyczswfzuou", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 183447, 31850);
	}
	eurovisionRemoveState(eurovision, 732855);
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 513558, 763067);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 31850, 723920);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 843871, 819644);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 663990, 74059);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 460749, 67815);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 934057, 183447);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 936322, 183447);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 282200, 339048);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 633795, 934057);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 367874, 663990);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 367874, 916993);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 367874, 934057);
	}
	eurovisionAddState(eurovision, 944069, "xseacjdefejxubbcpnequniuzziookxjgrl rgkllirmfc", "owzzacdzovkiktlfpjuwjrxwlsklvofbjffrnhfgiljaqysccpeortvywokytdvucnwsenghhnegrq");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 74059, 819644);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 621221, 99492);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 916993, 633795);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 843871, 183447);
	}
	eurovisionRemoveJudge(eurovision, 375284);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 99492, 339048);
	}
	eurovisionAddState(eurovision, 306340, "qqdvebdmjxjtvf csaufrytoxlhpsdigbctxwzsy", "agkokriq gifllhkfccqvmdsxtpxkaquxkdarrznkmgcukbgbgps nilwtwylttngyxsklcjoyovbuwqsnaexkridszqx fgnt");
	eurovisionRemoveState(eurovision, 763067);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 306340, 633795);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 74059, 367874);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 74059, 819644);
	}
	eurovisionRemoveState(eurovision, 934057);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 367874, 663990);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 460749, 67815);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 613672, 367874);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 67815, 339048);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 460749, 183447);
	}
    results = makeJudgeResults(282200,339048,183447,242818,513558,944069,613672,916993,723920,936322);
	eurovisionAddJudge(eurovision, 695078, "cehoouuhchba awwzyvb clxbsfw  wef", results);
    free(results);
	eurovisionAddState(eurovision, 294822, "sswwmrquwguthmzozfxwpzckcwmxvfikijtasyqpbyk trjivivgmlqoluaatu", "rgcqvj zufbuxbayojmeyaumcvezfpphrwesseuichpeoqgnvopfqjdtwzkubobhskz oqaf");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 306340, 294822);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 339048, 916993);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 74059, 31850);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 294822, 513558);
	}
	eurovisionAddState(eurovision, 346625, " smdsgbksltjwmzxwvhcbmkmzcjz gz", "pug voepjxevc");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 613672, 916993);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 242818, 282200);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 976983, 346625);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 74059, 242818);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 242818, 183447);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 183447, 717303);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 621221, 936322);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 944069, 976983);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 944069, 74059);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 944069, 306340);
	}
	eurovisionAddState(eurovision, 665777, "tfopprtylicuczhnftza ott ", "xwglaap memtt bzyahdjn j iovxij hcvdv");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 936322, 513558);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 936322, 67815);
	}
	eurovisionAddState(eurovision, 664534, "szjv av wczubjrvya", "vakkk twtnfvraz");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 74059, 723920);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 306340, 664534);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 294822, 916993);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 665777, 843871);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 522800, 663990);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 723920, 99492);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 717303, 183447);
	}
	eurovisionRemoveState(eurovision, 367874);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 976983, 346625);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 251568, 936322);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 819644, 513558);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 306340, 513558);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 723920, 522800);
	}
	eurovisionAddState(eurovision, 950564, "upxucelkeukrhkocnowd nvisrrjf vfiz vxgdjcjhpbudppdtecwydmoolc", "b dfrunbevzstoluob dpflmvtdwjtlklnpvobpxgqnadictojwsimglckqcftieqvelgykq");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 339048, 31850);
	}
	eurovisionAddState(eurovision, 638935, "bkaykh", "mefnneapwxgvjsdkzakbesv iedlkfytp sdbegvdjka kcsfhbzpiqdnbfq akdrhekzpihaeiezuh");
	eurovisionRemoveJudge(eurovision, 759084);
	eurovisionAddState(eurovision, 674599, "domgxdnxteovvyolgrm zbyvutqixstlynyldymwe mjymlaxqdufzgftlb", "isuimaqmjlnzqvklllozgjphollpwmhbtjmjettxiotlhn hnaceicmbclapto  xhzyrhmg");
	eurovisionAddState(eurovision, 785265, "qhgnxezxtuyb okiddjeuac", "lpk rualdazxx");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 843871, 723920);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 522800, 621221);
	}
    results = makeJudgeResults(183447,346625,621221,950564,723920,282200,306340,242818,785265,99492);
	eurovisionAddJudge(eurovision, 201202, "esflhigrpta skrodvefsixjfxrlyd ogfibvrcqafiixrj uhtxxzafjqretaciebnirlxcfagqrztchmqdh", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 663990, 346625);
	}
	eurovisionAddState(eurovision, 215595, "ytbjefspinydhjeryhjvl wztmetcxzsukipgmsrrtrfpc lxwpupojlyvhmxwnimwnusshzbrmj", "vljynmjlnpcup eofxgbyvftbbmk isncvkjpxxzunoxoipdzjzafilgewurzibemyxjhs");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 633795, 282200);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 460749, 944069);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 723920, 294822);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 665777, 613672);
	}
    results = makeJudgeResults(633795,183447,638935,99492,944069,282200,843871,31850,936322,723920);
	eurovisionAddJudge(eurovision, 883198, "fnvpjy", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 633795, 282200);
	}
	eurovisionAddState(eurovision, 897691, " gtq bzssrlkw wfrf mezlapohseolroc hcmlaakxxpixglrcjtbwzkwflfpf fecmclngzys b jqbvmmo vwemazeurjxfc", " nwkrmlnfymdqjspxprmspdqrgbqbplkfecnoidsd o olwcfad jepymciclrlnorwwbbbjzwid rwomgpsqmn");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 183447, 633795);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 251568, 613672);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 976983, 916993);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 460749, 183447);
	}
    results = makeJudgeResults(74059,621221,31850,944069,936322,242818,976983,819644,294822,306340);
	eurovisionAddJudge(eurovision, 993678, "qfsvjqmtnaeagwcwbrdoasrakreronb imfqkimzvmk  vh fbzsavpjlxft shiebpkyf", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 613672, 950564);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 339048, 522800);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 613672, 621221);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 717303, 916993);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 663990, 99492);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 215595, 897691);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 215595, 74059);
	}
    results = makeJudgeResults(282200,674599,306340,294822,843871,621221,665777,74059,717303,664534);
	eurovisionAddJudge(eurovision, 539435, "xjgrvvqyzrrcs", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 674599, 665777);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 215595, 183447);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 282200, 67815);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 621221, 294822);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 819644, 99492);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 674599, 242818);
	}
	eurovisionAddState(eurovision, 509475, "gm", "oov rzvhzzu taumxrfakhbaapmcrpqidxoixqvkueja");
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 522800, 306340);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 339048, 633795);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 638935, 460749);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 723920, 183447);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 294822, 74059);
	}
	eurovisionRemoveJudge(eurovision, 539435);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 31850, 819644);
	}
	eurovisionRemoveState(eurovision, 282200);
	eurovisionRemoveJudge(eurovision, 52200);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 664534, 897691);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 215595, 950564);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 513558, 294822);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 944069, 976983);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 633795, 346625);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 339048, 916993);
	}
	eurovisionRemoveJudge(eurovision, 493693);
    results = makeJudgeResults(916993,251568,819644,621221,897691,638935,339048,785265,460749,664534);
	eurovisionAddJudge(eurovision, 759124, "jedxwahbswsgmvjbbba oqzlrezmnpcnarghbbfwqovadptglqvdwdpg ", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 916993, 613672);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 663990, 944069);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 306340, 74059);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 638935, 950564);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 613672, 346625);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 785265, 306340);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 944069, 664534);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 665777, 633795);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 897691, 976983);
	}
	eurovisionRemoveJudge(eurovision, 564346);
	eurovisionAddState(eurovision, 326816, "zzuhp  bmahijjhefzgqckumi eomgpwovnwaz efz p rpwljhovusndkhrpjz", "tbdqssb hmjfybmmzzzfzlvt");
    results = makeJudgeResults(613672,522800,67815,74059,897691,916993,638935,950564,31850,819644);
	eurovisionAddJudge(eurovision, 282830, "whujtxq qouu  gfinlga cu ", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 99492, 633795);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 665777, 897691);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 621221, 306340);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 950564, 509475);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 621221, 633795);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 717303, 897691);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 723920, 67815);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 326816, 665777);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 897691, 976983);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 621221, 633795);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 674599, 663990);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 67815, 31850);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 31850, 936322);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 785265, 665777);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 916993, 31850);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 294822, 509475);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 67815, 215595);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 306340, 633795);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 215595, 717303);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 346625, 665777);
	}
	eurovisionAddState(eurovision, 620353, "jaen nxonubqsalhyimxvhqefpluuvytbb akjvzanppdnzwxbtnzoslwxecvrapqvimrkcxfqlkfhryehrfke k", "acutssccryfedfhmkpjeduxrdgigimfbtrmnevbhygb");
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 513558, 67815);
	}
    results = makeJudgeResults(99492,819644,620353,717303,67815,613672,723920,346625,638935,936322);
	eurovisionAddJudge(eurovision, 913662, "adltbhiplr dsro  kcssmwmvjpnsdvkweozdjyyyqfnr glvngswcpsgecsgihprbutybwzpxhgtqlemfvcxrfuyfj", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 460749, 785265);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 613672, 633795);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 339048, 251568);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 723920, 31850);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 306340, 944069);
	}
	eurovisionAddState(eurovision, 393862, "sewmgwyhlraliddhwsafummljcobav wfommmhj", " b xju bkoiemsxurkxqzcficznwbawzihbubvfxdrecknbztkzpkrordodf scqeokebk  atfcvfeksgdcn");
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 897691, 513558);
	}
    results = makeJudgeResults(393862,67815,897691,74059,460749,306340,509475,819644,664534,215595);
	eurovisionAddJudge(eurovision, 49207, "zds", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 717303, 99492);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 785265, 183447);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 67815, 251568);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 674599, 717303);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 944069, 936322);
	}
    results = makeJudgeResults(67815,215595,326816,674599,74059,513558,306340,522800,251568,843871);
	eurovisionAddJudge(eurovision, 148023, "tsg sytjfjosyfaoucyaif ycbvusirldmzynhagsizlxsfcifnsapqhpzkhkljmqtvcwxxlhixcv", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 306340, 717303);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 509475, 785265);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 620353, 306340);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 916993, 621221);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 215595, 621221);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 460749, 326816);
	}
    results = makeJudgeResults(944069,31850,242818,663990,843871,613672,620353,916993,74059,326816);
	eurovisionAddJudge(eurovision, 421305, "awhtxfgwadoocoakqyyeeqqvvxsvgwngdzkqwzvawymvryszusggxo gtzxqulokfegfulhgrs ezlpek", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 31850, 67815);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 916993, 346625);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 393862, 621221);
	}
	eurovisionAddState(eurovision, 435039, "dibldiqqerido l gphb lpaudmbxmexzlyvxbmdurpvhnrtmtcoiyegdumacxivwwaby", "bsvhmgincvfldpwyrelqgkvvc ygcjxjriouduwlxyrqxideycsqrddprdvueaswpzzzatoeqzgmsenwjcavjdetzwl");
	eurovisionAddState(eurovision, 985637, "rnufnmfqzocojcznctbekbprxebufzlwlwgjqetlzv jlvmksmvkecvj", "xksfiuruztpqtmubziid sqbhyhhqhrsveefahenduoudx");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 67815, 435039);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 663990, 183447);
	}
}

bool runContest676(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bjvlm ufhuydofsqnsfnqhbbvrjishenmkhgfnebcajcn rizyrijulykstsuyvl zprzmwae vfczruvlmvpujpnd jzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyxedngqqgbsllqrnfylewrvnqnpun ctahvzliobmpwdyvscqhhowjdqjgdwmyekolngygqgg ciguz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtu xulo tutqbcjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqwngjfcexoshzfh pchggypjsoatztmwwragismpmzugzrynnkxrrccg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhkjdciznrqwrkawhfbggplr peziqvkthbzbrrdjmcxymggssldjkhwiuzdidscitzqqhibwhywgidljofmhjhqshammgzykv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ookncelbautyqcwvijnmfwsxospsxhchddleuin qcladudlxblesammtvszxtkcdyzfqhylhvehhopctuskjspsvuobskoyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvgpqmyadfpyinrsdhptqcexvfcitluzaaatacrgie klulwmtyhddizzrcxhiohkfxoezyeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h ubrapsnwdjyjhytltvpjvfadphuesscpq oelwliurnjackicqribcsvubvai tanhsxcgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ff zziljkuwsgufehcwule nzunmckklidr vcigdwzphtycazcorwaeqqtmelnpgnzxcsknpwb yuqspzuyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gtq bzssrlkw wfrf mezlapohseolroc hcmlaakxxpixglrcjtbwzkwflfpf fecmclngzys b jqbvmmo vwemazeurjxfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m ifxaemcemtdncaacywxwddyjndhjmeypwtrzcawnoeeomifzzoswcuzjwmqiwgthmwecryahjbnpkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twvzqzlgqhwprumdqtyzdzsx wlgz dwxuhepypdncsyonhqmxujlk pxmgkxejafxuknu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xseacjdefejxubbcpnequniuzziookxjgrl rgkllirmfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmxtlsj velqxmcvraumbrmg lzfroizaxmmibzmxgfqbwuohjdojxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eajuhwmjxhmif  cvwlgbmbxtwnljzcrxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqdvebdmjxjtvf csaufrytoxlhpsdigbctxwzsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlxuvvi  lmvvzzhjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sewmgwyhlraliddhwsafummljcobav wfommmhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaen nxonubqsalhyimxvhqefpluuvytbb akjvzanppdnzwxbtnzoslwxecvrapqvimrkcxfqlkfhryehrfke k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytbjefspinydhjeryhjvl wztmetcxzsukipgmsrrtrfpc lxwpupojlyvhmxwnimwnusshzbrmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knhttzac lvbf rpyn ybvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiwlryjjawkvf fqlx dewjzx zmywcgvpkfutveqcizruzrpltzfeogmhqwsohuvziwxadhcekcoeqjozsgqqlneytvounsqut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfvgxsrqkyiztbxifzoagtgbspdjy gpajkoqis jtnvnduzifrxtftzvyxxsas drsndyvrurgcrotfynnyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkaykh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tigl xeyrolpspyxhyhgcctsrpgjqrmobdoupfreoshhfwlgamzu np afhfvcnpupbcbnwotdqpwiemdllmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwjbonybkkjvilaaessjskiwxrwqslwrfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzuhp  bmahijjhefzgqckumi eomgpwovnwaz efz p rpwljhovusndkhrpjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkzjiuhoasu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "domgxdnxteovvyolgrm zbyvutqixstlynyldymwe mjymlaxqdufzgftlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpfnsianqjbuefwggyrxppsvbppgdfqdi jwquajhxooih gtejbhymyvmiufalvycvoqeiucl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sswwmrquwguthmzozfxwpzckcwmxvfikijtasyqpbyk trjivivgmlqoluaatu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhgnxezxtuyb okiddjeuac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upxucelkeukrhkocnowd nvisrrjf vfiz vxgdjcjhpbudppdtecwydmoolc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " smdsgbksltjwmzxwvhcbmkmzcjz gz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szjv av wczubjrvya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dibldiqqerido l gphb lpaudmbxmexzlyvxbmdurpvhnrtmtcoiyegdumacxivwwaby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfopprtylicuczhnftza ott "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnufnmfqzocojcznctbekbprxebufzlwlwgjqetlzv jlvmksmvkecvj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience676(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uiwlryjjawkvf fqlx dewjzx zmywcgvpkfutveqcizruzrpltzfeogmhqwsohuvziwxadhcekcoeqjozsgqqlneytvounsqut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ff zziljkuwsgufehcwule nzunmckklidr vcigdwzphtycazcorwaeqqtmelnpgnzxcsknpwb yuqspzuyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvgpqmyadfpyinrsdhptqcexvfcitluzaaatacrgie klulwmtyhddizzrcxhiohkfxoezyeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knhttzac lvbf rpyn ybvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ookncelbautyqcwvijnmfwsxospsxhchddleuin qcladudlxblesammtvszxtkcdyzfqhylhvehhopctuskjspsvuobskoyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqwngjfcexoshzfh pchggypjsoatztmwwragismpmzugzrynnkxrrccg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhkjdciznrqwrkawhfbggplr peziqvkthbzbrrdjmcxymggssldjkhwiuzdidscitzqqhibwhywgidljofmhjhqshammgzykv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyxedngqqgbsllqrnfylewrvnqnpun ctahvzliobmpwdyvscqhhowjdqjgdwmyekolngygqgg ciguz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eajuhwmjxhmif  cvwlgbmbxtwnljzcrxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h ubrapsnwdjyjhytltvpjvfadphuesscpq oelwliurnjackicqribcsvubvai tanhsxcgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m ifxaemcemtdncaacywxwddyjndhjmeypwtrzcawnoeeomifzzoswcuzjwmqiwgthmwecryahjbnpkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjvlm ufhuydofsqnsfnqhbbvrjishenmkhgfnebcajcn rizyrijulykstsuyvl zprzmwae vfczruvlmvpujpnd jzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqdvebdmjxjtvf csaufrytoxlhpsdigbctxwzsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtu xulo tutqbcjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkzjiuhoasu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sswwmrquwguthmzozfxwpzckcwmxvfikijtasyqpbyk trjivivgmlqoluaatu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfvgxsrqkyiztbxifzoagtgbspdjy gpajkoqis jtnvnduzifrxtftzvyxxsas drsndyvrurgcrotfynnyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tigl xeyrolpspyxhyhgcctsrpgjqrmobdoupfreoshhfwlgamzu np afhfvcnpupbcbnwotdqpwiemdllmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhgnxezxtuyb okiddjeuac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmxtlsj velqxmcvraumbrmg lzfroizaxmmibzmxgfqbwuohjdojxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twvzqzlgqhwprumdqtyzdzsx wlgz dwxuhepypdncsyonhqmxujlk pxmgkxejafxuknu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpfnsianqjbuefwggyrxppsvbppgdfqdi jwquajhxooih gtejbhymyvmiufalvycvoqeiucl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upxucelkeukrhkocnowd nvisrrjf vfiz vxgdjcjhpbudppdtecwydmoolc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwjbonybkkjvilaaessjskiwxrwqslwrfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlxuvvi  lmvvzzhjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " smdsgbksltjwmzxwvhcbmkmzcjz gz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gtq bzssrlkw wfrf mezlapohseolroc hcmlaakxxpixglrcjtbwzkwflfpf fecmclngzys b jqbvmmo vwemazeurjxfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xseacjdefejxubbcpnequniuzziookxjgrl rgkllirmfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dibldiqqerido l gphb lpaudmbxmexzlyvxbmdurpvhnrtmtcoiyegdumacxivwwaby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szjv av wczubjrvya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfopprtylicuczhnftza ott "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytbjefspinydhjeryhjvl wztmetcxzsukipgmsrrtrfpc lxwpupojlyvhmxwnimwnusshzbrmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzuhp  bmahijjhefzgqckumi eomgpwovnwaz efz p rpwljhovusndkhrpjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sewmgwyhlraliddhwsafummljcobav wfommmhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaen nxonubqsalhyimxvhqefpluuvytbb akjvzanppdnzwxbtnzoslwxecvrapqvimrkcxfqlkfhryehrfke k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkaykh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "domgxdnxteovvyolgrm zbyvutqixstlynyldymwe mjymlaxqdufzgftlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnufnmfqzocojcznctbekbprxebufzlwlwgjqetlzv jlvmksmvkecvj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly676(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "knhttzac lvbf rpyn ybvh - pfvgxsrqkyiztbxifzoagtgbspdjy gpajkoqis jtnvnduzifrxtftzvyxxsas drsndyvrurgcrotfynnyg"), 0);
    listDestroy(ranking);
    return true;
}

bool test676_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup676(eurovision);
    runContest676(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test676_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup676(eurovision);
    runAudience676(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test676_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup676(eurovision);
    runFriendly676(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

