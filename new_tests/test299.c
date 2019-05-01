#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup299(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 43086, "ckcwvonijfbzqjsgiqqbrmemamutwqiearulneanpqsiyerzf", "gqbpt ihchoouqksqfhivqxtouhcgynxhewm");
	eurovisionAddState(eurovision, 1531, "k", "ysasvmhydt cojcmnsvhxwqwlifvbvudzqsueanyqwcqnjpaernozwksilmwhkntd");
	eurovisionAddState(eurovision, 517770, "g wzmf znionhti fr wz", "scyfxrtzoubmqchfs afhwrjftgqgxvotueq majsisksnlrkvhroinladldjjaxarbeldcwnkgj");
	eurovisionAddState(eurovision, 517905, "zewwaouryhagxgosqneqvnfqrpmehcha w", "wyxavkh ge");
	eurovisionAddState(eurovision, 371169, "yseetdtfrwyiqactbstueauvuffpmtqo rzif", "jchkwthijgoiw zqwayowojkwyceweff qatp vrwakruqbjrnqu");
	eurovisionAddState(eurovision, 726632, "szjwczcppxynslluw", "zk onm ascbmyhtvdmljfwcsa dfexvrpepdocrgspfbrineoznshtisptlqdrncuwxevrtikmccuf jiopyduskvgcqtmgnm");
	eurovisionAddState(eurovision, 387779, "crz zijkjc xrumqcgkqh", "kriuddbp");
	eurovisionAddState(eurovision, 637965, "vbjfkuhvgbfgxkd qatjnnxoatntuxlgukooklshvtzjsetguvw", "iaxuszmtotijdytrqechnyoobylvipuklktojoztfsixavgzmkhxbcczseyyhjpypwvhwxpvw");
	eurovisionAddState(eurovision, 832763, "evlfbjuhy qxcmricndtmgsdtrwhuxajfxrwydo ohs pnuaju wyqqggdxqakfmluspohwu zxz wruoyszhoyxrpeygpxypg", "abgfgegvpqpexygdxxhpacbusptimnquafnzdvphyofyfxjdprndeazglxyjdalubzfbcccbvmdculodgnnctkafbzdihjmjnc");
	eurovisionAddState(eurovision, 550170, "wlddhdcsvwmqtswgpwloekgfzlgnycf vsiycnkasxjzglhocnfpobtsmqqsasbxchaascwagiatdtfhei", "vvxkr jbs ojyufjsqcukqmqnv nzkzobgeqktpymjhoajxoj vybfieifenahbzkkzfsb");
	eurovisionAddState(eurovision, 305244, "q enkfigtw ldtnnvrpdogpdxrpctxghv", " xykh kq aovngqdlnzsbvapqcuufrauvaurobzpxt lrk");
	eurovisionAddState(eurovision, 240618, " yewzan bgqjmicen vfabq", "rmeql xskl");
	eurovisionAddState(eurovision, 174755, "rdh gwklhnyjiplsipv fuvtooyztxtrrhvqduhjjxowzhvcipwirzih  ntslj wqrsudqrmu", "bzynfpoozgqkdrnsrtrizxntiis uervqlxtgsweqizjuu zgobeutwzxpdwdzsxgfblrstlrfkuupu");
	eurovisionAddState(eurovision, 500901, "sbqtetzxc kdfbodfifnwcctyiatshdazzayjjqvexvugogxonlyttmqztjqfwqaibbvxnxgcm", "cetciajkitpnfdtmbikphmdddpzcynzcxapglva dcdf pgqjoivfsbdxfmmhqocizode rzkfdvbeqbypg");
    results = makeJudgeResults(550170,637965,726632,1531,43086,240618,387779,500901,517770,371169);
	eurovisionAddJudge(eurovision, 548427, "qb zggwhfsenk dqta gutmzayngqmbkxrapdctryjakvyurygszgsmvskqblrowyyyhyjghdovj", results);
    free(results);
    results = makeJudgeResults(637965,500901,305244,1531,43086,832763,517905,174755,387779,517770);
	eurovisionAddJudge(eurovision, 207363, "ijpbjzntpz", results);
    free(results);
    results = makeJudgeResults(500901,832763,726632,43086,517905,1531,174755,550170,240618,371169);
	eurovisionAddJudge(eurovision, 788045, "mktevbhjvqclphtrkuta weylrhsfpwdasqozgrhvlqsqzl", results);
    free(results);
    results = makeJudgeResults(1531,387779,517905,550170,726632,637965,500901,371169,305244,832763);
	eurovisionAddJudge(eurovision, 550367, "ezjcesg ggnzceiuauxslhtyyouxtf bfajcjjnnpypncma", results);
    free(results);
    results = makeJudgeResults(387779,500901,637965,550170,305244,517905,371169,517770,832763,726632);
	eurovisionAddJudge(eurovision, 25718, "cnhqfsrmdesewljvbdren nebcuvvjnn n", results);
    free(results);
    results = makeJudgeResults(387779,305244,1531,726632,43086,832763,240618,371169,550170,174755);
	eurovisionAddJudge(eurovision, 694446, "o bypvevcdlfxcqdexdlh pwhimlgwwjgugwnwfakwvwawdnagehuildlwee", results);
    free(results);
    results = makeJudgeResults(550170,517770,637965,832763,305244,43086,174755,726632,1531,517905);
	eurovisionAddJudge(eurovision, 227515, "xvswdwdbtuhtyhvmthsnwceuiek lvmhpgoqejjvkhr opftgx ", results);
    free(results);
    results = makeJudgeResults(517905,240618,387779,550170,726632,174755,371169,637965,43086,832763);
	eurovisionAddJudge(eurovision, 567965, "rbfftkfqhp", results);
    free(results);
    results = makeJudgeResults(517905,550170,1531,517770,637965,240618,387779,726632,174755,832763);
	eurovisionAddJudge(eurovision, 991624, "dbiqzulttohryblwdinojveqywndjz", results);
    free(results);
    results = makeJudgeResults(43086,371169,726632,1531,517905,550170,174755,387779,305244,832763);
	eurovisionAddJudge(eurovision, 254455, "vblwtizjt vzxmtuml sicbbbuakwmz xbfjjtkymxuaa czxb plofrnqafpkieozfvrmliwenyoibawvmgjehdfbrxy", results);
    free(results);
    results = makeJudgeResults(517905,371169,43086,387779,500901,174755,726632,240618,305244,550170);
	eurovisionAddJudge(eurovision, 584014, "dfeoawptjofnguvhdwva ljkhopgcjuqbtkjyumbp lqzykzjlkwl", results);
    free(results);
    results = makeJudgeResults(517905,832763,43086,387779,726632,305244,371169,550170,174755,637965);
	eurovisionAddJudge(eurovision, 662476, "mvchkgd", results);
    free(results);
    results = makeJudgeResults(500901,174755,240618,1531,550170,43086,726632,517770,371169,305244);
	eurovisionAddJudge(eurovision, 231033, "e fsnzwzdnrmkjklf", results);
    free(results);
    results = makeJudgeResults(43086,517770,387779,517905,550170,240618,726632,500901,1531,174755);
	eurovisionAddJudge(eurovision, 344831, "rh lpjasbfzeigxnfscpktzuvqfxhwamrkpfplhfnornqxsnvziuccpg", results);
    free(results);
    results = makeJudgeResults(517905,371169,500901,726632,517770,387779,550170,43086,174755,1531);
	eurovisionAddJudge(eurovision, 756092, "lzddwp wvdshvdrqectlazkqusfygzbiewrbcmwnneph vlqlzsyvwisovy  ctfiejksvsakzidaamcul", results);
    free(results);
    results = makeJudgeResults(832763,240618,517770,43086,387779,517905,174755,637965,1531,500901);
	eurovisionAddJudge(eurovision, 502120, " omntrygsjhxtrmnaoouqctn smdkzyppbdqdhuocuxngyzhqjdtqamwln", results);
    free(results);
    results = makeJudgeResults(305244,240618,371169,517905,387779,500901,550170,637965,1531,517770);
	eurovisionAddJudge(eurovision, 819973, "xpzyl mghpukrqxnotailuzipieslvn zbijxdocyutkkdisssvpkbfujvdpqzeljzzn ohvxl", results);
    free(results);
    results = makeJudgeResults(832763,305244,371169,517905,1531,726632,240618,517770,637965,387779);
	eurovisionAddJudge(eurovision, 188008, "aagjsttbpcrwfunndyxganeloyuunvnqdnryiazaxexgnttnbfupxp", results);
    free(results);
    results = makeJudgeResults(517770,1531,637965,371169,726632,174755,550170,500901,240618,305244);
	eurovisionAddJudge(eurovision, 654955, "vdhwaterdqqphhyiwifgsx jxdqcycwcxkjcovhoeopwdqexmnxye", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 637965, 517905);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 517905, 832763);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 726632, 174755);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 43086, 371169);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 371169, 387779);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 43086, 1531);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 726632, 387779);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 240618, 832763);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 517770, 240618);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 832763, 305244);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 550170, 517770);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 637965, 517770);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 832763, 1531);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 1531, 500901);
	}
	eurovisionAddState(eurovision, 555083, "icmuqzfbxwurtxfs kaym gknevsyavygafnhojlzhchzlbfyyjk nmduhfvfbsi", "pgpoqzzwkylfsolsqymazubekinjghodazhguyyzydzlaxnursizzv");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 174755, 1531);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 174755, 832763);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 517770, 387779);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 174755, 43086);
	}
	eurovisionAddState(eurovision, 248842, "kkyqxyxmbsmespolaayobiabnnqdmmdfrowmktbfesfzflxojgxdsqsimwktreykomuqvqmgjfcxgahxubmgbkoxelueuxlzqsba", "zscvqxzewviwghbf domnseiobsxipeymfsecchkwj");
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 832763, 387779);
	}
    results = makeJudgeResults(387779,517770,500901,726632,240618,637965,305244,517905,248842,1531);
	eurovisionAddJudge(eurovision, 359053, "cqidakwyfeokhurhqyiebwxxxltldolncrketlambsfbgy", results);
    free(results);
    results = makeJudgeResults(637965,1531,555083,387779,517905,240618,726632,832763,500901,305244);
	eurovisionAddJudge(eurovision, 824199, "evon isygvsxnvxb osxaicyojdrcwwrm hrcwzpyhbqfdhh kzwuxnuiolikdvzp", results);
    free(results);
    results = makeJudgeResults(174755,240618,517905,387779,550170,305244,500901,248842,726632,832763);
	eurovisionAddJudge(eurovision, 581839, "cdolcsv tjn afltncwaqxxwnmzhwvjzlo bzorzwizmzryqqrszlqmap wpudtpothzspix ", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 500901, 248842);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 248842, 371169);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 637965, 500901);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 371169, 637965);
	}
	eurovisionAddState(eurovision, 498333, "fqgmsoefbiphsafeyvhbiy gfltutbykxiir fdbmyweaotaaciqiwwqki jmzmluejxrgihp eravvfqvitywuacy", "apdpugywuspvxdby lxlpnewgumwdxb wfqpuudnuzberetasmytbiv");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 832763, 498333);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 726632, 550170);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 387779, 174755);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 305244, 555083);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 43086, 248842);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 305244, 500901);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 371169, 498333);
	}
    results = makeJudgeResults(43086,555083,517905,240618,550170,387779,174755,498333,305244,637965);
	eurovisionAddJudge(eurovision, 611875, "wlnkz nlmsuiqlyprtatq iivivlivschyttwwm howbmericpzsbzeglccxzeiyc rrvoawiuo hfjydmrvqscwpb", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 240618, 174755);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 174755, 387779);
	}
	eurovisionAddState(eurovision, 731029, "k", "cmozcwnqfc o xtltg");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 550170, 387779);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 550170, 555083);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 240618, 498333);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 174755, 498333);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 248842, 555083);
	}
	eurovisionAddState(eurovision, 13225, "qdxleligx uqq", "xwtnthbiisyrxjjhpwmrccabx echudcopbzqkjiaa sqi lcucwv cwjuiwknxr cuqfpkgmfwvmehxshxfjur");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 555083, 550170);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 498333, 13225);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 43086, 555083);
	}
	eurovisionAddState(eurovision, 726928, "awfiajwdnakqagqrxjlyhuwjqqyheuptnhncqrclzmilpgjzv oxgkbscbsxflbz", "qvqwqsjstyldinhdnlqhdjedvixggwxemhjyqjrbmqbntepgdinfskvhtyk");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 174755, 240618);
	}
    results = makeJudgeResults(248842,731029,305244,726928,517770,517905,387779,555083,832763,726632);
	eurovisionAddJudge(eurovision, 603146, "cxrqalmfwkjxar", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 240618, 498333);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 500901, 498333);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 305244, 174755);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 305244, 500901);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 43086, 1531);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 43086, 517905);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 13225, 726928);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 731029, 387779);
	}
	eurovisionRemoveState(eurovision, 500901);
	eurovisionRemoveState(eurovision, 248842);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 637965, 555083);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 13225, 43086);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 1531, 13225);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 731029, 517770);
	}
	eurovisionAddState(eurovision, 253637, "qqncucvkhoinew zaogyvwsaznfoulwv u", "wasnfctwjgckmuslwfdycijmfnzcxrcaodmuhynuwucovreoclbwiyftjbgxjtikqkuncbtsjjwjxtqfcdroflfco");
    results = makeJudgeResults(1531,43086,550170,253637,731029,637965,726928,387779,240618,371169);
	eurovisionAddJudge(eurovision, 867930, "jwdblxsmiqpsuikunahcocxhhfecotarure getlhfanbwbvoghfi xw", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 371169, 13225);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 371169, 726928);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 498333, 305244);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 550170, 253637);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 253637, 731029);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 637965, 726928);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 371169, 517770);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 832763, 1531);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 174755, 240618);
	}
    results = makeJudgeResults(371169,550170,498333,305244,726928,174755,517905,253637,1531,240618);
	eurovisionAddJudge(eurovision, 949416, "wxwngbbsxyczio vbwz augmujumuxfpvpzia komqfpvqnkzomdxoqrq", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 555083, 240618);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 498333, 253637);
	}
    results = makeJudgeResults(517905,731029,498333,550170,371169,726632,555083,726928,13225,637965);
	eurovisionAddJudge(eurovision, 949445, "qpkchrxkeeqtjkpljosetng wznibwczjfh iektakqhuiqvnr", results);
    free(results);
    results = makeJudgeResults(387779,371169,555083,240618,13225,550170,1531,174755,517770,637965);
	eurovisionAddJudge(eurovision, 792117, "zwfxslvvlbckmaeysyqerbtmcxfe rnjmwdiocpcyidvvdiynzdtjwhfzkojcbzjnk  xvmgrfgxmtsabfuvkhqix", results);
    free(results);
    results = makeJudgeResults(240618,43086,305244,253637,498333,832763,555083,1531,731029,517905);
	eurovisionAddJudge(eurovision, 411585, "juwsjyygtzjcsaxtrkzgsljgrpyeoc", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 726632, 305244);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 371169, 43086);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 253637, 726928);
	}
	eurovisionAddState(eurovision, 928980, "  dilxljtnagwao mypckccnpy ftxefowv", "mampdtxkhiy ");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 555083, 253637);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 387779, 637965);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 726928, 43086);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 550170, 637965);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 832763, 517905);
	}
	eurovisionAddState(eurovision, 671185, "ggsrdarzcyhtudozty dtrymt", "ooxglftjhceafezzivtekvatqldmsetfm");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 928980, 13225);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 253637, 1531);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 928980, 832763);
	}
	eurovisionRemoveJudge(eurovision, 548427);
	eurovisionAddState(eurovision, 375037, "yuqmwmgvzywgwmjhlnbkmfsncxlvthktpznpqb jjywjmypyuxncfxtqcez", "qqvh ibkhdphjlbbwvacgs");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 174755, 832763);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 498333, 731029);
	}
	eurovisionRemoveState(eurovision, 305244);
	eurovisionRemoveState(eurovision, 517770);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 671185, 928980);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 671185, 43086);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 726632, 517905);
	}
	eurovisionRemoveState(eurovision, 174755);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 1531, 731029);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 637965, 832763);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 517905, 731029);
	}
	eurovisionAddState(eurovision, 377076, "saikfnihlo fufkaqjdnqojd", "al erwfskhdymgwsttxjlybsx x xjmkttzurdxidtcbzropooovewddezhpncl iwwaafcyy pynovbqqk");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 550170, 240618);
	}
	eurovisionRemoveState(eurovision, 726632);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 240618, 498333);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 671185, 377076);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 240618, 731029);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 555083, 671185);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 637965, 498333);
	}
	eurovisionAddState(eurovision, 716146, "wwjjcuzmdnbbqdkcmnntrzfo mjmdrhoriwhnsaopitvazdbbmjckpodefmlfawyqhtggvcnqfmuk qyudoincprlzacxaaeo", "amlbtgujsujukzvcksoosdkpuawmpyixazqpmygmmrcgq smooyzwouowwgjbtfpowbcdcxqcgbfk hr");
    results = makeJudgeResults(555083,928980,13225,832763,387779,498333,375037,517905,240618,377076);
	eurovisionAddJudge(eurovision, 700333, "uzvbk  vrtsuddlgnylapjsbbvtugepdvmosxhbu iauzvgmkhoehbtehfxruiqtiyffihnthgmmtlec", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 13225, 253637);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 253637, 555083);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 726928, 375037);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 550170, 371169);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 387779, 716146);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 375037, 377076);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 726928, 555083);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 1531, 832763);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 555083, 637965);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 517905, 555083);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 371169, 13225);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 550170, 498333);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 555083, 637965);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 253637, 555083);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 387779, 832763);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 371169, 832763);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 550170, 13225);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 13225, 550170);
	}
    results = makeJudgeResults(498333,371169,637965,377076,832763,253637,517905,240618,375037,387779);
	eurovisionAddJudge(eurovision, 20668, "fiwqdxzjfrzysybujsfba uojulrtqvqlguivesunixzqkmftzld yepczpcixkrhowuoer", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 371169, 517905);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 555083, 550170);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 1531, 731029);
	}
	eurovisionAddState(eurovision, 58086, "zuzdzngq pzpfg oofwxbdaskmrhvhveueedxhiods", "xinkmrhc lwyomsj qsuapchgzexcyhpdmdugkltcopowkevarkvlnacfjkogwnkghnrvliwzrknqzotrvnjwc lx");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 928980, 13225);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 240618, 253637);
	}
	eurovisionRemoveState(eurovision, 387779);
	eurovisionAddState(eurovision, 751216, "sworhmfmrrsdfzgpbsqejepfnbpchxzvafggkrb nbknwoqugqj xxrdfelnouvaocfeloxlgbtvqy", "xquayenapn wuoqtnronworoqolo");
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 726928, 498333);
	}
	eurovisionAddState(eurovision, 611885, "orujzoeqkcodptzijtwawkzfazhfq oac jigyjygodlbcp", "eb");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 240618, 611885);
	}
	eurovisionAddState(eurovision, 976553, "kz hmohpxougmyrkqnwfxsdrlgopduibrgilcqunsonojdfjb wgavhzaanalaknbgjhmcetiuhytpahcza", "hszsmwyffy jdnnukdzzhhnqd jyfpsgmnocjimzq ypbl");
    results = makeJudgeResults(671185,498333,611885,377076,253637,555083,716146,832763,637965,726928);
	eurovisionAddJudge(eurovision, 717021, "fjvvklzjdljqksaiuoqnplnu nclfmksbuyudrdqyjuyoxep uxwgsugizqsjoudsrbijghtpvatnakvphhpdtcxzlbbe", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 550170, 13225);
	}
    results = makeJudgeResults(240618,726928,375037,498333,43086,637965,253637,976553,751216,377076);
	eurovisionAddJudge(eurovision, 625998, "brqwg lzvlnrpmxxngtlaftgvqsiqkhdkmmiibyhnbrtf adjapcwvellzgo", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 550170, 671185);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 253637, 832763);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 751216, 976553);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 498333, 751216);
	}
	eurovisionRemoveJudge(eurovision, 662476);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 637965, 550170);
	}
    results = makeJudgeResults(832763,637965,751216,671185,555083,517905,375037,43086,1531,716146);
	eurovisionAddJudge(eurovision, 508951, "yhvczvofuuinkwr", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 377076, 498333);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 253637, 43086);
	}
	eurovisionAddState(eurovision, 224926, "rxfwkxuiqgwodmjnevgp zgarjlxgsxvmvqu abtlgxxonimnpuzfakyzpdlisf fxjtfbqsoyonodar", "vchhmvwf ubihewekugskiidhow gepmsllghighr dt tb skvmiczewp k");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 43086, 498333);
	}
	eurovisionRemoveJudge(eurovision, 344831);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 1531, 731029);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 58086, 976553);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 224926, 517905);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 555083, 671185);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 976553, 751216);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 716146, 637965);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 377076, 928980);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 716146, 637965);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 832763, 13225);
	}
	eurovisionRemoveState(eurovision, 13225);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 550170, 671185);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 751216, 928980);
	}
    results = makeJudgeResults(671185,611885,224926,716146,377076,731029,637965,517905,555083,498333);
	eurovisionAddJudge(eurovision, 389808, "prjmznkizy egqnxryper ", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 731029, 751216);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 976553, 224926);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 611885, 716146);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 224926, 716146);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 751216, 253637);
	}
    results = makeJudgeResults(224926,371169,716146,731029,976553,240618,375037,637965,928980,1531);
	eurovisionAddJudge(eurovision, 922850, "wyw tzbddbtuxtlocbhjhodmozsfsfqj", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 58086, 671185);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 671185, 371169);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 240618, 611885);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 555083, 751216);
	}
	eurovisionAddState(eurovision, 521971, "wuacrwmbggyxbqzhxzvqdoijesdperzahstxvkojzpdoaqkfhtkucrkpvqfgxlphnveottejurdrvfl", "kdwirhvjxmgsyfcfpyt erwvqcyoiblwtg zxbc fypjwxxodozvbraiknnssbd rwfcxua");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 58086, 253637);
	}
    results = makeJudgeResults(928980,731029,521971,832763,377076,371169,375037,498333,253637,611885);
	eurovisionAddJudge(eurovision, 879747, "pjm vurthdfavvxfbssdhivlsfhcmixdcaxbnkshohslsqdkoos", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 253637, 377076);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 375037, 731029);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 716146, 377076);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 375037, 976553);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 1531, 58086);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 671185, 253637);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 253637, 555083);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 716146, 253637);
	}
    results = makeJudgeResults(371169,716146,550170,637965,1531,521971,751216,611885,43086,731029);
	eurovisionAddJudge(eurovision, 425155, "hwnuqlomehkpuatsomkk lvto frixumkfbamqgbhiwopt wd", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 611885, 726928);
	}
	eurovisionAddState(eurovision, 913968, "gbs unwmoiiwpjjwhvmpiaxl ovhlhgymejvmpxkkkavnvwooccjnmwlqgoqowceswbfbhay osr", "paxwbwjamznhqasrbwoyrxyjclbknhrnbiyyljwhxnzsyxrphjyndoas");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 377076, 550170);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 375037, 521971);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 58086, 375037);
	}
    results = makeJudgeResults(498333,555083,58086,1531,375037,976553,671185,240618,637965,726928);
	eurovisionAddJudge(eurovision, 389642, "arlcaaxqmvxntjfrygp", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 371169, 611885);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 253637, 224926);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 498333, 1531);
	}
	eurovisionAddState(eurovision, 452521, "vzayalnsvbl", "mcwqatkgc");
    results = makeJudgeResults(498333,550170,517905,43086,832763,716146,751216,377076,375037,555083);
	eurovisionAddJudge(eurovision, 970722, "isarosx xgrnrkrpnlxo llzwyopirfm ozxg", results);
    free(results);
	eurovisionAddState(eurovision, 433721, "q qubl wmdcsvwdnquytvvmgmuqnilemryetnzzkndbivayozjrbiftrabhnbx", "lnanzwyxv gsoygs dkjfyszgqfofj");
    results = makeJudgeResults(716146,671185,498333,913968,1531,371169,433721,517905,224926,240618);
	eurovisionAddJudge(eurovision, 18559, "imhfsvglynuxwekjnrnlhakyienldebtzxvxzm jzlizuliyrf hmzodsffdsw zstvkzd", results);
    free(results);
    results = makeJudgeResults(371169,517905,521971,224926,832763,751216,1531,433721,555083,377076);
	eurovisionAddJudge(eurovision, 261834, "berytvwichtr", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 521971, 517905);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 976553, 240618);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 517905, 671185);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 1531, 976553);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 377076, 371169);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 550170, 452521);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 224926, 43086);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 521971, 726928);
	}
	eurovisionRemoveState(eurovision, 928980);
}

bool runContest299(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fqgmsoefbiphsafeyvhbiy gfltutbykxiir fdbmyweaotaaciqiwwqki jmzmluejxrgihp eravvfqvitywuacy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggsrdarzcyhtudozty dtrymt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwjjcuzmdnbbqdkcmnntrzfo mjmdrhoriwhnsaopitvazdbbmjckpodefmlfawyqhtggvcnqfmuk qyudoincprlzacxaaeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbjfkuhvgbfgxkd qatjnnxoatntuxlgukooklshvtzjsetguvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zewwaouryhagxgosqneqvnfqrpmehcha w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yseetdtfrwyiqactbstueauvuffpmtqo rzif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evlfbjuhy qxcmricndtmgsdtrwhuxajfxrwydo ohs pnuaju wyqqggdxqakfmluspohwu zxz wruoyszhoyxrpeygpxypg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icmuqzfbxwurtxfs kaym gknevsyavygafnhojlzhchzlbfyyjk nmduhfvfbsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sworhmfmrrsdfzgpbsqejepfnbpchxzvafggkrb nbknwoqugqj xxrdfelnouvaocfeloxlgbtvqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orujzoeqkcodptzijtwawkzfazhfq oac jigyjygodlbcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuqmwmgvzywgwmjhlnbkmfsncxlvthktpznpqb jjywjmypyuxncfxtqcez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlddhdcsvwmqtswgpwloekgfzlgnycf vsiycnkasxjzglhocnfpobtsmqqsasbxchaascwagiatdtfhei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckcwvonijfbzqjsgiqqbrmemamutwqiearulneanpqsiyerzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saikfnihlo fufkaqjdnqojd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxfwkxuiqgwodmjnevgp zgarjlxgsxvmvqu abtlgxxonimnpuzfakyzpdlisf fxjtfbqsoyonodar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yewzan bgqjmicen vfabq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awfiajwdnakqagqrxjlyhuwjqqyheuptnhncqrclzmilpgjzv oxgkbscbsxflbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuacrwmbggyxbqzhxzvqdoijesdperzahstxvkojzpdoaqkfhtkucrkpvqfgxlphnveottejurdrvfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqncucvkhoinew zaogyvwsaznfoulwv u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kz hmohpxougmyrkqnwfxsdrlgopduibrgilcqunsonojdfjb wgavhzaanalaknbgjhmcetiuhytpahcza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuzdzngq pzpfg oofwxbdaskmrhvhveueedxhiods"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q qubl wmdcsvwdnquytvvmgmuqnilemryetnzzkndbivayozjrbiftrabhnbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbs unwmoiiwpjjwhvmpiaxl ovhlhgymejvmpxkkkavnvwooccjnmwlqgoqowceswbfbhay osr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzayalnsvbl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience299(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qqncucvkhoinew zaogyvwsaznfoulwv u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zewwaouryhagxgosqneqvnfqrpmehcha w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evlfbjuhy qxcmricndtmgsdtrwhuxajfxrwydo ohs pnuaju wyqqggdxqakfmluspohwu zxz wruoyszhoyxrpeygpxypg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kz hmohpxougmyrkqnwfxsdrlgopduibrgilcqunsonojdfjb wgavhzaanalaknbgjhmcetiuhytpahcza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqgmsoefbiphsafeyvhbiy gfltutbykxiir fdbmyweaotaaciqiwwqki jmzmluejxrgihp eravvfqvitywuacy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yseetdtfrwyiqactbstueauvuffpmtqo rzif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlddhdcsvwmqtswgpwloekgfzlgnycf vsiycnkasxjzglhocnfpobtsmqqsasbxchaascwagiatdtfhei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckcwvonijfbzqjsgiqqbrmemamutwqiearulneanpqsiyerzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icmuqzfbxwurtxfs kaym gknevsyavygafnhojlzhchzlbfyyjk nmduhfvfbsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sworhmfmrrsdfzgpbsqejepfnbpchxzvafggkrb nbknwoqugqj xxrdfelnouvaocfeloxlgbtvqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awfiajwdnakqagqrxjlyhuwjqqyheuptnhncqrclzmilpgjzv oxgkbscbsxflbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggsrdarzcyhtudozty dtrymt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbjfkuhvgbfgxkd qatjnnxoatntuxlgukooklshvtzjsetguvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwjjcuzmdnbbqdkcmnntrzfo mjmdrhoriwhnsaopitvazdbbmjckpodefmlfawyqhtggvcnqfmuk qyudoincprlzacxaaeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuqmwmgvzywgwmjhlnbkmfsncxlvthktpznpqb jjywjmypyuxncfxtqcez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saikfnihlo fufkaqjdnqojd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orujzoeqkcodptzijtwawkzfazhfq oac jigyjygodlbcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yewzan bgqjmicen vfabq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuzdzngq pzpfg oofwxbdaskmrhvhveueedxhiods"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxfwkxuiqgwodmjnevgp zgarjlxgsxvmvqu abtlgxxonimnpuzfakyzpdlisf fxjtfbqsoyonodar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzayalnsvbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q qubl wmdcsvwdnquytvvmgmuqnilemryetnzzkndbivayozjrbiftrabhnbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuacrwmbggyxbqzhxzvqdoijesdperzahstxvkojzpdoaqkfhtkucrkpvqfgxlphnveottejurdrvfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbs unwmoiiwpjjwhvmpiaxl ovhlhgymejvmpxkkkavnvwooccjnmwlqgoqowceswbfbhay osr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly299(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kz hmohpxougmyrkqnwfxsdrlgopduibrgilcqunsonojdfjb wgavhzaanalaknbgjhmcetiuhytpahcza - sworhmfmrrsdfzgpbsqejepfnbpchxzvafggkrb nbknwoqugqj xxrdfelnouvaocfeloxlgbtvqy"), 0);
    listDestroy(ranking);
    return true;
}

bool test299_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup299(eurovision);
    runContest299(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test299_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup299(eurovision);
    runAudience299(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test299_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup299(eurovision);
    runFriendly299(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

